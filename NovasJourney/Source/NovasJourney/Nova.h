// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "Nova.generated.h"

UCLASS()
class NOVASJOURNEY_API ANova : public ACharacter
{
	GENERATED_BODY()

		UPROPERTY(VisibleDefaultsOnly, Category = Components)
		class USceneComponent* AbilitySpawn;

public:
	// Sets default values for this character's properties
	ANova();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float MaxHP;

	UPROPERTY(BlueprintReadWrite, Category = "Stats")
		float HP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Stats")
		float MaxStrain;

	UPROPERTY(BlueprintReadWrite, Category = "Stats")
		float Strain;

	UPROPERTY(EditAnywhere, Category = "Abilities")
		TSubclassOf<AActor> PushActor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Gameplay)
		FVector AbilityOffSet;

	void PushAbility();



public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
