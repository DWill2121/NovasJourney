// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovasJourney/Nova.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNova() {}
// Cross Module References
	NOVASJOURNEY_API UClass* Z_Construct_UClass_ANova_NoRegister();
	NOVASJOURNEY_API UClass* Z_Construct_UClass_ANova();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_NovasJourney();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
// End Cross Module References
	void ANova::StaticRegisterNativesANova()
	{
	}
	UClass* Z_Construct_UClass_ANova_NoRegister()
	{
		return ANova::StaticClass();
	}
	struct Z_Construct_UClass_ANova_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilityOffSet_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AbilityOffSet;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PushActor_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_PushActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Strain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Strain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxStrain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxStrain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxHP_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxHP;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AbilitySpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AbilitySpawn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANova_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_NovasJourney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Nova.h" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_AbilityOffSet_MetaData[] = {
		{ "Category", "Gameplay" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_AbilityOffSet = { "AbilityOffSet", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, AbilityOffSet), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_AbilityOffSet_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_AbilityOffSet_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_PushActor_MetaData[] = {
		{ "Category", "Abilities" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_PushActor = { "PushActor", nullptr, (EPropertyFlags)0x0024080000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, PushActor), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_PushActor_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_PushActor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_Strain_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_Strain = { "Strain", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, Strain), METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_Strain_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_Strain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_MaxStrain_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_MaxStrain = { "MaxStrain", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, MaxStrain), METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_MaxStrain_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_MaxStrain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_HP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_HP = { "HP", nullptr, (EPropertyFlags)0x0020080000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, HP), METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_HP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_HP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_MaxHP_MetaData[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_MaxHP = { "MaxHP", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, MaxHP), METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_MaxHP_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_MaxHP_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANova_Statics::NewProp_AbilitySpawn_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Nova.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ANova_Statics::NewProp_AbilitySpawn = { "AbilitySpawn", nullptr, (EPropertyFlags)0x00400000000b0009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ANova, AbilitySpawn), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::NewProp_AbilitySpawn_MetaData, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::NewProp_AbilitySpawn_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ANova_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_AbilityOffSet,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_PushActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_Strain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_MaxStrain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_HP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_MaxHP,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ANova_Statics::NewProp_AbilitySpawn,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANova_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANova>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANova_Statics::ClassParams = {
		&ANova::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ANova_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::PropPointers),
		0,
		0x009000A0u,
		METADATA_PARAMS(Z_Construct_UClass_ANova_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANova_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANova()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANova_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANova, 2576195888);
	template<> NOVASJOURNEY_API UClass* StaticClass<ANova>()
	{
		return ANova::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANova(Z_Construct_UClass_ANova, &ANova::StaticClass, TEXT("/Script/NovasJourney"), TEXT("ANova"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANova);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
