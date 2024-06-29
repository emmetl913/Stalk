// Copyright Epic Games, Inc. All Rights Reserved.

#include "StalkGameMode.h"
#include "StalkCharacter.h"
#include "UObject/ConstructorHelpers.h"

AStalkGameMode::AStalkGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
