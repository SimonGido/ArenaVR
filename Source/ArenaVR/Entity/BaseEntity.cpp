// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseEntity.h"


// Sets default values
ABaseEntity::ABaseEntity()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	createCapsuleComponent();
	createMeshComponent();
}

// Called when the game starts or when spawned
void ABaseEntity::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABaseEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABaseEntity::createCapsuleComponent()
{
	if (!CollisionComponent)
	{
		CollisionComponent = CreateDefaultSubobject<UCapsuleComponent>(TEXT("CapsuleComponent"));
		CollisionComponent->InitCapsuleSize(32.0f, 64.0f);
		RootComponent = CollisionComponent;
	}
}

void ABaseEntity::createMeshComponent()
{
	if (!MeshComponent)
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultAsset(TEXT("/Game/Assets/capsule"));
		auto mesh = DefaultAsset.Object;
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComponent"));
		MeshComponent->SetStaticMesh(mesh);

		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);
		MeshComponent->AttachToComponent(RootComponent, attachmentRules);

		MeshComponent->SetRelativeScale3D(FVector(64.0));
	}
}

