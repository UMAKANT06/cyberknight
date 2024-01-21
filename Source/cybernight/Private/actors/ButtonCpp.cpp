// Fill out your copyright notice in the Description page of Project Settings.


#include "actors/ButtonCpp.h"

// Sets default values
AButtonCpp::AButtonCpp()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AButtonCpp::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AButtonCpp::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

