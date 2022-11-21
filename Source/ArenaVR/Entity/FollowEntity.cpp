// Fill out your copyright notice in the Description page of Project Settings.


#include "FollowEntity.h"

#include "Kismet/GameplayStatics.h"



AFollowEntity::AFollowEntity()
{
	if (!m_VRCharacter)
	{
		TArray<AActor*> foundActors;
		UGameplayStatics::GetAllActorsOfClass(GetWorld(), AVRCharacter::StaticClass(), foundActors);
		
		if (foundActors.Num() != 0)
		{
			m_VRCharacter = Cast<AVRCharacter>(foundActors[0]);
		}
	}
}

void AFollowEntity::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	followCharacter();
}


void AFollowEntity::followCharacter()
{
	const FVector location = CollisionComponent->GetComponentLocation();
	const FVector characterLocation = m_VRCharacter->GetActorLocation();

	FVector direction = characterLocation - location;
	direction.Normalize();

	SetActorLocation(GetActorLocation() + direction * Speed);
}
