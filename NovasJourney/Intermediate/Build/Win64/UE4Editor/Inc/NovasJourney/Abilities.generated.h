// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef NOVASJOURNEY_Abilities_generated_h
#error "Abilities.generated.h already included, missing '#pragma once' in Abilities.h"
#endif
#define NOVASJOURNEY_Abilities_generated_h

#define NovasJourney_Source_NovasJourney_Abilities_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCanUseAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Strain); \
		P_GET_UBOOL(Z_Param_OnCD); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cost); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CD); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsSpawned); \
		P_GET_UBOOL_REF(Z_Param_Out_AbilitySuccess); \
		P_GET_UBOOL_REF(Z_Param_Out_DrainAnimation); \
		P_GET_UBOOL_REF(Z_Param_Out_OnCD_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAbilities::CanUseAbility(Z_Param_Strain,Z_Param_OnCD,Z_Param_Cost,Z_Param_CD,Z_Param_Duration,Z_Param_IsSpawned,Z_Param_Out_AbilitySuccess,Z_Param_Out_DrainAnimation,Z_Param_Out_OnCD_Out); \
		P_NATIVE_END; \
	}


#define NovasJourney_Source_NovasJourney_Abilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCanUseAbility) \
	{ \
		P_GET_PROPERTY(UIntProperty,Z_Param_Strain); \
		P_GET_UBOOL(Z_Param_OnCD); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Cost); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_CD); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Duration); \
		P_GET_UBOOL(Z_Param_IsSpawned); \
		P_GET_UBOOL_REF(Z_Param_Out_AbilitySuccess); \
		P_GET_UBOOL_REF(Z_Param_Out_DrainAnimation); \
		P_GET_UBOOL_REF(Z_Param_Out_OnCD_Out); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UAbilities::CanUseAbility(Z_Param_Strain,Z_Param_OnCD,Z_Param_Cost,Z_Param_CD,Z_Param_Duration,Z_Param_IsSpawned,Z_Param_Out_AbilitySuccess,Z_Param_Out_DrainAnimation,Z_Param_Out_OnCD_Out); \
		P_NATIVE_END; \
	}


#define NovasJourney_Source_NovasJourney_Abilities_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAbilities(); \
	friend struct Z_Construct_UClass_UAbilities_Statics; \
public: \
	DECLARE_CLASS(UAbilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NovasJourney"), NO_API) \
	DECLARE_SERIALIZER(UAbilities)


#define NovasJourney_Source_NovasJourney_Abilities_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUAbilities(); \
	friend struct Z_Construct_UClass_UAbilities_Statics; \
public: \
	DECLARE_CLASS(UAbilities, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/NovasJourney"), NO_API) \
	DECLARE_SERIALIZER(UAbilities)


#define NovasJourney_Source_NovasJourney_Abilities_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilities) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilities); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilities(UAbilities&&); \
	NO_API UAbilities(const UAbilities&); \
public:


#define NovasJourney_Source_NovasJourney_Abilities_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAbilities(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAbilities(UAbilities&&); \
	NO_API UAbilities(const UAbilities&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAbilities); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAbilities); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAbilities)


#define NovasJourney_Source_NovasJourney_Abilities_h_15_PRIVATE_PROPERTY_OFFSET
#define NovasJourney_Source_NovasJourney_Abilities_h_12_PROLOG
#define NovasJourney_Source_NovasJourney_Abilities_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NovasJourney_Source_NovasJourney_Abilities_h_15_PRIVATE_PROPERTY_OFFSET \
	NovasJourney_Source_NovasJourney_Abilities_h_15_RPC_WRAPPERS \
	NovasJourney_Source_NovasJourney_Abilities_h_15_INCLASS \
	NovasJourney_Source_NovasJourney_Abilities_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define NovasJourney_Source_NovasJourney_Abilities_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	NovasJourney_Source_NovasJourney_Abilities_h_15_PRIVATE_PROPERTY_OFFSET \
	NovasJourney_Source_NovasJourney_Abilities_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	NovasJourney_Source_NovasJourney_Abilities_h_15_INCLASS_NO_PURE_DECLS \
	NovasJourney_Source_NovasJourney_Abilities_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> NOVASJOURNEY_API UClass* StaticClass<class UAbilities>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID NovasJourney_Source_NovasJourney_Abilities_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
