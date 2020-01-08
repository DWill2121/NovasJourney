// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Abilities.generated.h"

/**
 *
 */
UCLASS()
class NOVASJOURNEY_API UAbilities : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

		UFUNCTION(BlueprintCallable, Category = "Abilities")
		static void CanUseAbility(const int Strain, const bool OnCD, const int Cost, const float CD,
			const float Duration, const bool IsSpawned, bool& AbilitySuccess, bool& DrainAnimation, bool& OnCD_Out);

};
