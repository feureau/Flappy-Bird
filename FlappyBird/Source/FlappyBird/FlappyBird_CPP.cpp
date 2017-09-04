// Fill out your copyright notice in the Description page of Project Settings.

#include "FlappyBird_CPP.h"

// Sets default values
AFlappyBird_CPP::AFlappyBird_CPP() {
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AFlappyBird_CPP::BeginPlay() {
	Super::BeginPlay();
}

// Called every frame
void AFlappyBird_CPP::Tick(float DeltaTime) {
	Super::Tick(DeltaTime);
}

// Called to bind functionality to input
void AFlappyBird_CPP::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) {
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

UFUNCTION(BlueprintPure, Category = "Flappy Bird Custom CPP") bool AFlappyBird_CPP::isItJumping(FVector inputVelocity) {
	if (inputVelocity.Z > 0) {
		return true;
	} else {
		return false;
	}
}