// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseEntity.h"

#include "ArenaVR/VRCharacter.h"

#include "FollowEntity.generated.h"

/**
 * 
 */
UCLASS()
class ARENAVR_API AFollowEntity : public ABaseEntity
{
	GENERATED_BODY()
public:
	AFollowEntity();

	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	float Speed = 5.0f;

private:
	void followCharacter();

private:
	UPROPERTY()
	AVRCharacter* m_VRCharacter;
};
