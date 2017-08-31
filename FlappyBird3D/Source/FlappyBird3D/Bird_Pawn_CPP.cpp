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
	UE_LOG(LogTemp, Warning, TEXT("%s - Current Velocity: %s"), *nameOfThishing, *currentVelocity.ToString());
	return *(new FRotator(1.0f, 1.0f, 1.0f));
}

UFUNCTION(BlueprintPure, Category = "Bird_Pawn_CPP") bool ABird_Pawn_CPP::IsItFalling(FVector currentVelocity) {
	UE_LOG(LogTemp, Warning, TEXT("Velocity: %s"), *currentVelocity.ToString());
	if (currentVelocity.Z < 0) {
		return true;
	} else {
		return false;
	}
}