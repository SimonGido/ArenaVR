// Fill out your copyright notice in the Description page of Project Settings.


#include "Projectile.h"

// Sets default values
AProjectile::AProjectile()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	if (!RootComponent)
	{
		RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("ProjectileSceneComponent"));
	}

	createCollisionComponent();
	createMovementComponent();
	createMeshComponent();
	
	InitialLifeSpan = 4.0f;
}

// Called when the game starts or when spawned
void AProjectile::BeginPlay()
{
	Super::BeginPlay();
		
}

// Called every frame
void AProjectile::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void AProjectile::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
{
	if (OtherActor != this && OtherComponent->IsSimulatingPhysics())
	{
		OtherComponent->AddImpulseAtLocation(ProjectileMovementComponent->Velocity * 100.0f, Hit.ImpactPoint);
	}
	Destroy();
}

void AProjectile::FireInDirection(const FVector& Direction)
{
	ProjectileMovementComponent->Velocity = Direction * ProjectileMovementComponent->InitialSpeed;
}



void AProjectile::createCollisionComponent()
{
	if (!CollisionComponent)
	{
		// Use a sphere as a simple collision representation.
		CollisionComponent = CreateDefaultSubobject<USphereComponent>(TEXT("SphereComponent"));
		// Set the sphere's collision radius.
		CollisionComponent->InitSphereRadius(2.0f);
		// Set the root component to be the collision component.
		RootComponent = CollisionComponent;

		CollisionComponent->BodyInstance.SetCollisionProfileName(TEXT("Projectile"));

		CollisionComponent->OnComponentHit.AddDynamic(this, &AProjectile::OnHit);
	}
}

void AProjectile::createMovementComponent()
{
	if (!ProjectileMovementComponent)
	{
		// Use this component to drive this projectile's movement.
		ProjectileMovementComponent = CreateDefaultSubobject<UProjectileMovementComponent>(TEXT("ProjectileMovementComponent"));
		ProjectileMovementComponent->SetUpdatedComponent(CollisionComponent);
		ProjectileMovementComponent->InitialSpeed = 3000.0f;
		ProjectileMovementComponent->MaxSpeed = 3000.0f;
		ProjectileMovementComponent->bRotationFollowsVelocity = true;
		ProjectileMovementComponent->bShouldBounce = true;
		ProjectileMovementComponent->Bounciness = 0.3f;
		ProjectileMovementComponent->ProjectileGravityScale = 1.0f;
	}
}

void AProjectile::createMeshComponent()
{
	if (!MeshComponent)
	{
		static ConstructorHelpers::FObjectFinder<UStaticMesh> DefaultAsset(TEXT("/Game/Assets/sphere"));
		auto mesh = DefaultAsset.Object;
		MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ProjectileMesh"));
		MeshComponent->SetStaticMesh(mesh);

		FAttachmentTransformRules attachmentRules(EAttachmentRule::KeepRelative, false);
		MeshComponent->AttachToComponent(RootComponent, attachmentRules);
		MeshComponent->SetRelativeScale3D(FVector(0.2f, 0.2f, 0.2f));
	}
}


