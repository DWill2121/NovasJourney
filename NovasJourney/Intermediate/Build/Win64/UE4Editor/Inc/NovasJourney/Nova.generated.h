// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOVASJOURNEY_Nova_generated_h
#error "Nova.generated.h already included, missing '#pragma once' in Nova.h"
#endif
#define NOVASJOURNEY_Nova_generated_h

#define NovasJourney_Source_NovasJourney_Nova_h_16_RPC_WRAPPERS
#define NovasJourney_Source_NovasJourney_Nova_h_16_RPC_WRAPPERS_NO_PURE_DECLS
#define NovasJourney_Source_NovasJourney_Nova_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesANova(); \
	friend struct Z_Construct_UClass_ANova_Statics; \
public: \
	DECLARE_CLASS(ANova, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NovasJourney"), NO_API) \
	DECLARE_SERIALIZER(ANova)


#define NovasJourney_Source_NovasJourney_Nova_h_16_INCLASS \
private: \
	static void StaticRegisterNativesANova(); \
	friend struct Z_Construct_UClass_ANova_Statics; \
public: \
	DECLARE_CLASS(ANova, ACharacter, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NovasJourney"), NO_API) \
	DECLARE_SERIALIZER(ANova)


#define NovasJourney_Source_NovasJourney_Nova_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ANova(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ANova) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANova); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANova); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANova(ANova&&); \
	NO_API ANova(const ANova&); \
public:


#define NovasJourney_Source_NovasJourney_Nova_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ANova(ANova&&); \
	NO_API ANova(const ANova&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ANova); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ANova); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ANova)


#define NovasJourney_Source_NovasJourney_Nova_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Blast() { return STRUCT_OFFSET(ANova, Blast); } \
	FORCEINLINE static uint32 __PPO__SpawnPoint() { return STRUCT_OFFSET(ANova, SpawnPoint); } \
	FORCEINLINE static uint32 __PPO__MaxHP() { return STRUCT_OFFSET(ANova, MaxHP); } \
	FORCEINLINE static uint32 __PPO__HP() { return STRUCT_OFFSET(ANova, HP); } \
	FORCEINLINE static uint32 __PPO__MaxStrain() { return STRUCT_OFFSET(ANova, MaxStrain); } \
	FORCEINLINE static uint32 __PPO__Strain() { return STRUCT_OFFSET(ANova, Strain); } \
	FORCEINLINE static uint32 __PPO__PushActor() { return STRUCT_OFFSET(ANova, PushActor); } \
	FORCEINLINE static uint32 __PPO__AbilitySpawn() { return STRUCT_OFFSET(ANova, AbilitySpawn); }


#define NovasJourney_Source_NovasJourney_Nova_h_13_PROLOG
#define NovasJourney_Source_NovasJourney_Nova_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NovasJourney_Source_NovasJourney_Nova_h_16_PRIVATE_PROPERTY_OFFSET \
	NovasJourney_Source_NovasJourney_Nova_h_16_RPC_WRAPPERS \
	NovasJourney_Source_NovasJourney_Nova_h_16_INCLASS \
	NovasJourney_Source_NovasJourney_Nova_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NovasJourney_Source_NovasJourney_Nova_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NovasJourney_Source_NovasJourney_Nova_h_16_PRIVATE_PROPERTY_OFFSET \
	NovasJourney_Source_NovasJourney_Nova_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	NovasJourney_Source_NovasJourney_Nova_h_16_INCLASS_NO_PURE_DECLS \
	NovasJourney_Source_NovasJourney_Nova_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOVASJOURNEY_API UClass* StaticClass<class ANova>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NovasJourney_Source_NovasJourney_Nova_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
