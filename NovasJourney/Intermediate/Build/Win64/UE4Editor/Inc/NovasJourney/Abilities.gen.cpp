// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovasJourney/Abilities.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAbilities() {}
// Cross Module References
	NOVASJOURNEY_API UClass* Z_Construct_UClass_UAbilities_NoRegister();
	NOVASJOURNEY_API UClass* Z_Construct_UClass_UAbilities();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_NovasJourney();
	NOVASJOURNEY_API UFunction* Z_Construct_UFunction_UAbilities_CanUseAbility();
// End Cross Module References
	void UAbilities::StaticRegisterNativesUAbilities()
	{
		UClass* Class = UAbilities::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CanUseAbility", &UAbilities::execCanUseAbility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAbilities_CanUseAbility_Statics
	{
		struct Abilities_eventCanUseAbility_Parms
		{
			int32 Strain;
			bool OnCD;
			int32 Cost;
			float CD;
			float Duration;
			bool IsSpawned;
			bool AbilitySuccess;
			bool DrainAnimation;
			bool OnCD_Out;
		};
		static void NewProp_OnCD_Out_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnCD_Out;
		static void NewProp_DrainAnimation_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrainAnimation;
		static void NewProp_AbilitySuccess_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AbilitySuccess;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsSpawned_MetaData[];
#endif
		static void NewProp_IsSpawned_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsSpawned;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Duration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Duration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CD_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Cost_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Cost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnCD_MetaData[];
#endif
		static void NewProp_OnCD_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_OnCD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strain_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Strain;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_Out_SetBit(void* Obj)
	{
		((Abilities_eventCanUseAbility_Parms*)Obj)->OnCD_Out = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_Out = { "OnCD_Out", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Abilities_eventCanUseAbility_Parms), &Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_Out_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_DrainAnimation_SetBit(void* Obj)
	{
		((Abilities_eventCanUseAbility_Parms*)Obj)->DrainAnimation = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_DrainAnimation = { "DrainAnimation", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Abilities_eventCanUseAbility_Parms), &Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_DrainAnimation_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_AbilitySuccess_SetBit(void* Obj)
	{
		((Abilities_eventCanUseAbility_Parms*)Obj)->AbilitySuccess = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_AbilitySuccess = { "AbilitySuccess", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Abilities_eventCanUseAbility_Parms), &Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_AbilitySuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned_SetBit(void* Obj)
	{
		((Abilities_eventCanUseAbility_Parms*)Obj)->IsSpawned = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned = { "IsSpawned", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Abilities_eventCanUseAbility_Parms), &Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Duration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abilities_eventCanUseAbility_Parms, Duration), METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Duration_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Duration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_CD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_CD = { "CD", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abilities_eventCanUseAbility_Parms, CD), METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_CD_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_CD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Cost_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Cost = { "Cost", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abilities_eventCanUseAbility_Parms, Cost), METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Cost_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Cost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	void Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_SetBit(void* Obj)
	{
		((Abilities_eventCanUseAbility_Parms*)Obj)->OnCD = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD = { "OnCD", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(Abilities_eventCanUseAbility_Parms), &Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_SetBit, METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Strain_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(Abilities_eventCanUseAbility_Parms, Strain), METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Strain_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Strain_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD_Out,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_DrainAnimation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_AbilitySuccess,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_IsSpawned,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Duration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_CD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Cost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_OnCD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::NewProp_Strain,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Abilities.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAbilities, nullptr, "CanUseAbility", sizeof(Abilities_eventCanUseAbility_Parms), Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAbilities_CanUseAbility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAbilities_CanUseAbility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAbilities_NoRegister()
	{
		return UAbilities::StaticClass();
	}
	struct Z_Construct_UClass_UAbilities_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAbilities_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_NovasJourney,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAbilities_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAbilities_CanUseAbility, "CanUseAbility" }, // 982663584
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Abilities.h" },
		{ "ModuleRelativePath", "Abilities.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAbilities_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAbilities>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAbilities_Statics::ClassParams = {
		&UAbilities::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UAbilities_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAbilities()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAbilities_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAbilities, 2491568978);
	template<> NOVASJOURNEY_API UClass* StaticClass<UAbilities>()
	{
		return UAbilities::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAbilities(Z_Construct_UClass_UAbilities, &UAbilities::StaticClass, TEXT("/Script/NovasJourney"), TEXT("UAbilities"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAbilities);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
