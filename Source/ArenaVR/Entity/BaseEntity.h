// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"

#include "Components/CapsuleComponent.h"

#include "BaseEntity.generated.h"

UCLASS()
class ARENAVR_API ABaseEntity : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABaseEntity();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	UPROPERTY(EditAnywhere)
	UCapsuleComponent* CollisionComponent;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* MeshComponent;

private:
	void createCapsuleComponent();
	void createMeshComponent();
};
