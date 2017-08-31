// Fill out your copyright notice in the Description page of Project Settings.

#include "Bird_Pawn_CPP.h"

// Sets default values
ABird_Pawn_CPP::ABird_Pawn_CPP() {
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void ABird_Pawn_CPP::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void ABird_Pawn_CPP::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void ABird_Pawn_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UFUNCTION(BlueprintCallable, Category = "Bird_Pawn_CPP")FRotator ABird_Pawn_CPP::CalculateOrientationDependingOnVerticalMovement(FVector currentVelocity) {
	FString nameOfThishing = this->GetName();
	//UE_LOG(LogTemp, Warning, TEXT("%s - Current Velocity: %s"), *nameOfThishing, *currentVelocity.ToString());
	return *(new FRotator(1.0f, 1.0f, 1.0f));
}

UFUNCTION(BlueprintPure, Category = "Bird_Pawn_CPP") bool ABird_Pawn_CPP::IsItFalling(FVector currentVelocity) {
	//UE_LOG(LogTemp, Warning, TEXT("Velocity: %s"), *currentVelocity.ToString());
	if (currentVelocity.Z < 0) {
		return true;
	} else {
		return false;
	}
}

UFUNCTION(BlueprintPure, Category = "Bird_Pawn_CPP") FRotator  ABird_Pawn_CPP::GetRotationInterpolationTarget(FVector currentVelocity) {
	if (currentVelocity.Z > 0) {
		return FRotator(0.0f, 0.0f, -30.0f).GetNormalized();
	} else if (currentVelocity.Z < 0) {
		return FRotator(0.0f, 0.0f, 90.0f);
	} else if (currentVelocity.Z == 0) {
		return FRotator(0.0f, 0.0f, 0.0f);
	}
	return FRotator(0.0f, 0.0f, 0.0f);
}

UFUNCTION(BlueprintPure, Category = "Bird_Pawn_CPP") float ABird_Pawn_CPP::GetInterpolationSpeed(FVector currentVelocity) {
	float interpSpeedToReturn = 1.0f;
	float maxZ_Up_Velocity = 2750.0; // initial jump velocity as defined in Bird_Pawn_BP that is used as initial velocity when player presses jump.
	if (currentVelocity.Z > 0) {
		//interpSpeedToReturn = currentVelocity.Z / maxZ_Up_Velocity * 15; // 15 is the result of playtesting. Defined in Bird_Pawn_BP under Quickly point bird upwards when jumping rinterpto interpspeed.
		//UE_LOG(LogTemp, Warning, TEXT("InterpSpeed to Return: %s"), *interpSpeedToReturn.ToString());
		return 15;
	} else if (currentVelocity.Z < 0) {
		//interpSpeedToReturn = currentVelocity.Z / maxZ_Up_Velocity * 3; // 3 is the result of playtesting. Defined in Bird_Pawn_BP under Slowly rotate face to ground rinterpto interpspeed.
		//UE_LOG(LogTemp, Warning, TEXT("InterpSpeed to Return: %s"), *interpSpeedToReturn.ToString());
		return 3;
	} else if (currentVelocity.Z == 0) {
		return interpSpeedToReturn;
	}
	return interpSpeedToReturn;
}