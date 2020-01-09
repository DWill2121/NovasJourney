// Fill out your copyright notice in the Description page of Project Settings.


#include "Nova.h"
#include "Kismet/GameplayStatics.h"
#include "Camera/CameraComponent.h"
#include "Components/CapsuleComponent.h"
#include "Components/InputComponent.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "Engine/World.h"

// Sets default values
ANova::ANova()
{
	PrimaryActorTick.bCanEverTick = true;

	Blast = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("Blast"));
	Blast->SetOnlyOwnerSee(true);			// only the owning player will see this mesh
	Blast->bCastDynamicShadow = false;
	Blast->CastShadow = false;
	// FP_Gun->SetupAttachment(Mesh1P, TEXT("GripPoint"));
	Blast->SetupAttachment(RootComponent);

	SpawnPoint = CreateDefaultSubobject<USceneComponent>(TEXT("SpawnPoint"));
	SpawnPoint->SetupAttachment(Blast);
	SpawnPoint->SetRelativeLocation(FVector(0.2f, 48.4f, -10.6f));

	AbilitySpawn = FVector(100.0f, 0.0f, 10.0f);


	MaxHP = 100;
	MaxStrain = 100;

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
		const FVector SpawnLocation = ((Blast != nullptr) ? Blast->GetComponentLocation() : GetActorLocation()) + SpawnRotation.RotateVector(AbilitySpawn);
		FActorSpawnParameters ActorSpawnParams;
		//ActorSpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AdjustIfPossibleButDontSpawnIfColliding;
		World->SpawnActor<AActor>(PushActor, SpawnLocation, SpawnRotation, ActorSpawnParams);
	}

}

void ANova::Regeneration()
{

}

