// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "NovasJourney/NovasJourneyGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeNovasJourneyGameModeBase() {}
// Cross Module References
	NOVASJOURNEY_API UClass* Z_Construct_UClass_ANovasJourneyGameModeBase_NoRegister();
	NOVASJOURNEY_API UClass* Z_Construct_UClass_ANovasJourneyGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_NovasJourney();
// End Cross Module References
	void ANovasJourneyGameModeBase::StaticRegisterNativesANovasJourneyGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ANovasJourneyGameModeBase_NoRegister()
	{
		return ANovasJourneyGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ANovasJourneyGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_NovasJourney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "NovasJourneyGameModeBase.h" },
		{ "ModuleRelativePath", "NovasJourneyGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ANovasJourneyGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::ClassParams = {
		&ANovasJourneyGameModeBase::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002A8u,
		METADATA_PARAMS(Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ANovasJourneyGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ANovasJourneyGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ANovasJourneyGameModeBase, 3233622573);
	template<> NOVASJOURNEY_API UClass* StaticClass<ANovasJourneyGameModeBase>()
	{
		return ANovasJourneyGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ANovasJourneyGameModeBase(Z_Construct_UClass_ANovasJourneyGameModeBase, &ANovasJourneyGameModeBase::StaticClass, TEXT("/Script/NovasJourney"), TEXT("ANovasJourneyGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ANovasJourneyGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
