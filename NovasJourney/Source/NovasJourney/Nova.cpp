// Fill out your copyright notice in the Description page of Project Settings.


#include "Nova.h"
#include "Kismet/GameplayStatics.h"
#include "Engine/World.h"

// Sets default values
ANova::ANova()
{
	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	MaxHP = 100;
	MaxStrain = 100;

	AbilitySpawn = CreateDefaultSubobject<USceneComponent>(TEXT("AbilitySpawn"));
	AbilityOffSet = FVector(100.0f, 0.0f, 10.0f);


}

// Called when the game starts or when spawned
void ANova::BeginPlay()
{
	Super::BeginPlay();


	HP = MaxHP;
	Strain = 0;

}



// Called every frame
void ANova::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void ANova::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	//Super::SetupPlayerInputComponent(PlayerInputComponent);

	check(PlayerInputComponent);

	PlayerInputComponent->BindAction("Force Push", IE_Pressed, this, &ANova::PushAbility);

}

void ANova::PushAbility()
{
	UWorld* const World = GetWorld();
	if (World != NULL)
	{
		const FRotator SpawnRotation = GetActorRotation();
		// MuzzleOffset is in camera space, so transform it to world space before offsetting from the character location to find the final muzzle position
		const FVector SpawnLocation = AbilitySpawn->GetComponentLocation();
		FActorSpawnParameters ActorSpawnParams;
		//ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		World->SpawnActor<AActor>(PushActor, SpawnLocation, SpawnRotation, ActorSpawnParams);
	}

}

void ANova::Regeneration()
{

}

