// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "myPlugins/myPluginsGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyPluginsGameMode() {}
// Cross Module References
	MYPLUGINS_API UClass* Z_Construct_UClass_AmyPluginsGameMode_NoRegister();
	MYPLUGINS_API UClass* Z_Construct_UClass_AmyPluginsGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_myPlugins();
// End Cross Module References
	void AmyPluginsGameMode::StaticRegisterNativesAmyPluginsGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AmyPluginsGameMode);
	UClass* Z_Construct_UClass_AmyPluginsGameMode_NoRegister()
	{
		return AmyPluginsGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AmyPluginsGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AmyPluginsGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_myPlugins,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AmyPluginsGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "myPluginsGameMode.h" },
		{ "ModuleRelativePath", "myPluginsGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AmyPluginsGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AmyPluginsGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AmyPluginsGameMode_Statics::ClassParams = {
		&AmyPluginsGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AmyPluginsGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AmyPluginsGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AmyPluginsGameMode()
	{
		if (!Z_Registration_Info_UClass_AmyPluginsGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AmyPluginsGameMode.OuterSingleton, Z_Construct_UClass_AmyPluginsGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AmyPluginsGameMode.OuterSingleton;
	}
	template<> MYPLUGINS_API UClass* StaticClass<AmyPluginsGameMode>()
	{
		return AmyPluginsGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AmyPluginsGameMode);
	struct Z_CompiledInDeferFile_FID_myPlugins_Source_myPlugins_myPluginsGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myPlugins_Source_myPlugins_myPluginsGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AmyPluginsGameMode, AmyPluginsGameMode::StaticClass, TEXT("AmyPluginsGameMode"), &Z_Registration_Info_UClass_AmyPluginsGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AmyPluginsGameMode), 3947543611U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_myPlugins_Source_myPlugins_myPluginsGameMode_h_516059365(TEXT("/Script/myPlugins"),
		Z_CompiledInDeferFile_FID_myPlugins_Source_myPlugins_myPluginsGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_myPlugins_Source_myPlugins_myPluginsGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
