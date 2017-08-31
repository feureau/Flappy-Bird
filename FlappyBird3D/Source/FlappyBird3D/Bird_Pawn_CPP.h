// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Components/PrimitiveComponent.h"
#include "Bird_Pawn_CPP.generated.h"

UCLASS()
class FLAPPYBIRD3D_API ABird_Pawn_CPP : public APawn {
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	ABird_Pawn_CPP();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable, Category = "Bird_Pawn_CPP") FRotator CalculateOrientationDependingOnVerticalMovement(FVector currentVelocity);
	UFUNCTION(BlueprintPure, Category = "Bird_Pawn_CPP") bool IsItFalling(FVector currentVelocity);
};
