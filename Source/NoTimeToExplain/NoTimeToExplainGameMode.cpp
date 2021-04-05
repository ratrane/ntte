// Copyright Epic Games, Inc. All Rights Reserved.

#include "NoTimeToExplainGameMode.h"
#include "NoTimeToExplainCharacter.h"

ANoTimeToExplainGameMode::ANoTimeToExplainGameMode()
{
	// Set default pawn class to our character
	DefaultPawnClass = ANoTimeToExplainCharacter::StaticClass();	
}
