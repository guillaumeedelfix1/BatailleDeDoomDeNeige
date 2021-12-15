// Copyright Epic Games, Inc. All Rights Reserved.

#include "BDNGameMode.h"
#include "BDNCharacter.h"
#include "UObject/ConstructorHelpers.h"

ABDNGameMode::ABDNGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
