// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "plugtest/plugtestGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplugtestGameMode() {}
// Cross Module References
	PLUGTEST_API UClass* Z_Construct_UClass_AplugtestGameMode_NoRegister();
	PLUGTEST_API UClass* Z_Construct_UClass_AplugtestGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_plugtest();
// End Cross Module References
	void AplugtestGameMode::StaticRegisterNativesAplugtestGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AplugtestGameMode);
	UClass* Z_Construct_UClass_AplugtestGameMode_NoRegister()
	{
		return AplugtestGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AplugtestGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AplugtestGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_plugtest,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AplugtestGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "plugtestGameMode.h" },
		{ "ModuleRelativePath", "plugtestGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AplugtestGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AplugtestGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AplugtestGameMode_Statics::ClassParams = {
		&AplugtestGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AplugtestGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AplugtestGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AplugtestGameMode()
	{
		if (!Z_Registration_Info_UClass_AplugtestGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AplugtestGameMode.OuterSingleton, Z_Construct_UClass_AplugtestGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AplugtestGameMode.OuterSingleton;
	}
	template<> PLUGTEST_API UClass* StaticClass<AplugtestGameMode>()
	{
		return AplugtestGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AplugtestGameMode);
	struct Z_CompiledInDeferFile_FID_plugtest_Source_plugtest_plugtestGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_plugtest_Source_plugtest_plugtestGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AplugtestGameMode, AplugtestGameMode::StaticClass, TEXT("AplugtestGameMode"), &Z_Registration_Info_UClass_AplugtestGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AplugtestGameMode), 2450615831U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_plugtest_Source_plugtest_plugtestGameMode_h_2740780800(TEXT("/Script/plugtest"),
		Z_CompiledInDeferFile_FID_plugtest_Source_plugtest_plugtestGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_plugtest_Source_plugtest_plugtestGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
