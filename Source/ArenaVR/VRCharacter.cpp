// Fill out your copyright notice in the Description page of Project Settings.


#include "VRCharacter.h"

#include "Kismet/GameplayStatics.h"



// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	AutoPossessPlayer = EAutoReceiveInput::Player0;
	AutoReceiveInput = EAutoReceiveInput::Player0;

	static ConstructorHelpers::FObjectFinder<USkeletalMesh> DefaultAsset(TEXT("/Game/Assets/Hands/QK_CustomHand"));
	m_HandMesh = DefaultAsset.Object;
	
	
	
	initializeCapsuleComponent();
	createMotionControllerLeft();
	createMotionControllerRight();
	createLeftHandComponent();
	createRightHandComponent();


	FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);
	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->AttachToComponent(CollisionComponent, attachmentRules);
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AVRCharacter::SpawnProjectile()
{
	FActorSpawnParameters spawnParams;
	spawnParams.Owner = this;
	spawnParams.Instigator = GetInstigator();

	const FVector location = RightHand->GetComponentLocation();
	const FRotator rotation = RightHand->GetComponentRotation();
	AProjectile* projectile = GetWorld()->SpawnActor<AProjectile>(location, rotation, spawnParams);

	const FVector dir = RightHand->GetForwardVector();
	projectile->FireInDirection(dir);
}


void AVRCharacter::createLeftHandComponent()
{
	if (!LeftHand)
	{
		LeftHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("LeftHand"));
		LeftHand->SetSkeletalMesh(m_HandMesh);

		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);
		LeftHand->AttachToComponent(MotionControllerLeft, attachmentRules);

		FTransform transform;
		transform.SetTranslation(FVector3d(-6.2, 0.1, 5.6));

		FVector3d rotEuler(265.9, -90.0, 2.64);
		
		transform.SetRotation(rotEuler.ToOrientationQuat());
		
		transform.SetScale3D(FVector3d(1.0, -1.0, 1.0));

		LeftHand->SetRelativeTransform(transform);
	}
}

void AVRCharacter::createRightHandComponent()
{
	if (!RightHand)
	{

		RightHand = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("RightHand"));
		RightHand->SetSkeletalMesh(m_HandMesh);
		
		

		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);
		RightHand->AttachToComponent(MotionControllerRight, attachmentRules);
	
		FTransform transform;
		transform.SetTranslation(FVector3d(-6.2, 0.1, 5.6));

		FVector3d rotEuler(106.8, -90.0, -13.5);
		transform.SetRotation(rotEuler.ToOrientationQuat());

		transform.SetScale3D(FVector3d(1.0, 1.0, 1.0));

		RightHand->SetRelativeTransform(transform);
	}
}

void AVRCharacter::initializeCapsuleComponent()
{
	if (!CollisionComponent)
	{
		CollisionComponent = GetCapsuleComponent();
		CollisionComponent->InitCapsuleSize(32.0f, 64.0f);
		RootComponent = CollisionComponent;
	}
}

void AVRCharacter::createMotionControllerLeft()
{
	if (!MotionControllerLeft)
	{
		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);

		MotionControllerLeft = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionControllerLeft"));
		MotionControllerLeft->AttachToComponent(CollisionComponent, attachmentRules);
		MotionControllerLeft->SetTrackingMotionSource(TEXT("Left"));
	}
}
void AVRCharacter::createMotionControllerRight()
{
	if (!MotionControllerRight)
	{
		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);

		MotionControllerRight = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("MotionControllerRight"));
		MotionControllerRight->AttachToComponent(CollisionComponent, attachmentRules);
		MotionControllerRight->SetTrackingMotionSource(TEXT("Right"));
	}
}
