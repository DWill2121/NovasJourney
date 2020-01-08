// Fill out your copyright notice in the Description page of Project Settings.


#include "Abilities.h"

void UAbilities::CanUseAbility(const int Strain, const bool OnCD, const int Cost, const float CD,
	const float Duration, const bool IsSpawned, bool& AbilitySuccess, bool& DrainAnimation, bool& OnCD_Out)
{
	if (Strain + Cost < 100)
	{
		if (OnCD)
		{
			if (IsSpawned)
			{
				AbilitySuccess = false;
				DrainAnimation = false;
			}
			else
			{
				AbilitySuccess = false;
				DrainAnimation = true;
			}
		}
		else
		{
			AbilitySuccess = true;
			DrainAnimation = false;
		}

	}
	else
	{
		AbilitySuccess = false;
		DrainAnimation = true;
		UE_LOG(LogTemp, Warning, TEXT("You're dangerously strained!"));
	}
}
