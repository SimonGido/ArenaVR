// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowEntity.h"

#include "ArenaVR/Utils/WorldUtils.h"

AFollowEntity::AFollowEntity()
{
	bAllowTickBeforeBeginPlay = true;
	PrimaryActorTick.bCanEverTick = true;
	PrimaryActorTick.bStartWithTickEnabled = true;
	PrimaryActorTick.bAllowTickOnDedicatedServer = true;
}

void AFollowEntity::BeginPlay()
{
	
}

void AFollowEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (!m_VRCharacter)
	{
		TArray<AVRCharacter*> foundActors;
		WorldUtils::FindAllActors(GetWorld(), foundActors);

		if (foundActors.Num() != 0)
		{
			m_VRCharacter = foundActors[0];
		}
	}
	else
	{
		followCharacter();
		if (Health <= 0)
			Destroy();
	}
}


void AFollowEntity::followCharacter()
{
	const FVector location = CollisionComponent->GetComponentLocation();
	const FVector characterLocation = m_VRCharacter->GetActorLocation();

	FVector direction = characterLocation - location;
	direction.Normalize();

	SetActorLocation(GetActorLocation() + direction * Speed);
}
