// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "MotionControllerComponent.h"
#include "Projectile/Projectile.h"

#include "VRCharacter.generated.h"

UCLASS()
class ARENAVR_API AVRCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AVRCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
	void SpawnProjectile();

public:
	UPROPERTY(EditAnywhere)
	bool RightHanded = false;

	UPROPERTY(EditAnywhere)
	UCapsuleComponent* CollisionComponent;

	UPROPERTY(EditAnywhere)
	UMotionControllerComponent* MotionControllerLeft;

	UPROPERTY(EditAnywhere)
	UMotionControllerComponent* MotionControllerRight;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* LeftHand;

	UPROPERTY(EditAnywhere)
	USkeletalMeshComponent* RightHand;

	UPROPERTY(BlueprintReadWrite)
	UCameraComponent* Camera;
private:
	void initializeCapsuleComponent();
	void createMotionControllerLeft();
	void createMotionControllerRight();

	void createRightHandComponent();
	void createLeftHandComponent();

private:
	UPROPERTY()
	USkeletalMesh* m_HandMesh;
};
