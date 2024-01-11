// Copyright Epic Games, Inc. All Rights Reserved.

#include "cybernightGameMode.h"
#include "cybernightCharacter.h"
#include "UObject/ConstructorHelpers.h"

AcybernightGameMode::AcybernightGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
