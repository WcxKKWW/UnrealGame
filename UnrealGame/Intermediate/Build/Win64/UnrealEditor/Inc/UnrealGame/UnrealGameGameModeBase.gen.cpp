// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGame/UnrealGameGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGameGameModeBase() {}
// Cross Module References
	UNREALGAME_API UClass* Z_Construct_UClass_AUnrealGameGameModeBase_NoRegister();
	UNREALGAME_API UClass* Z_Construct_UClass_AUnrealGameGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealGame();
// End Cross Module References
	void AUnrealGameGameModeBase::StaticRegisterNativesAUnrealGameGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealGameGameModeBase);
	UClass* Z_Construct_UClass_AUnrealGameGameModeBase_NoRegister()
	{
		return AUnrealGameGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealGameGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealGameGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGame,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealGameGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealGameGameModeBase.h" },
		{ "ModuleRelativePath", "UnrealGameGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealGameGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealGameGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealGameGameModeBase_Statics::ClassParams = {
		&AUnrealGameGameModeBase::StaticClass,
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
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AUnrealGameGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealGameGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealGameGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealGameGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealGameGameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealGameGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealGameGameModeBase.OuterSingleton;
	}
	template<> UNREALGAME_API UClass* StaticClass<AUnrealGameGameModeBase>()
	{
		return AUnrealGameGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealGameGameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealGame_Source_UnrealGame_UnrealGameGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Source_UnrealGame_UnrealGameGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealGameGameModeBase, AUnrealGameGameModeBase::StaticClass, TEXT("AUnrealGameGameModeBase"), &Z_Registration_Info_UClass_AUnrealGameGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealGameGameModeBase), 3909642314U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGame_Source_UnrealGame_UnrealGameGameModeBase_h_3420448923(TEXT("/Script/UnrealGame"),
		Z_CompiledInDeferFile_FID_UnrealGame_Source_UnrealGame_UnrealGameGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGame_Source_UnrealGame_UnrealGameGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
