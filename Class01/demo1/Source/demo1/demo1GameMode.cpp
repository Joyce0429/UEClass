// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo1GameMode.h"
#include "demo1Character.h"
#include "UObject/ConstructorHelpers.h"

Ademo1GameMode::Ademo1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
