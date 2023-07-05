// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodemyPlugins_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_myPlugins;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_myPlugins()
	{
		if (!Z_Registration_Info_UPackage__Script_myPlugins.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/myPlugins",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0xC684BC28,
				0xD5E633F2,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_myPlugins.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_myPlugins.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_myPlugins(Z_Construct_UPackage__Script_myPlugins, TEXT("/Script/myPlugins"), Z_Registration_Info_UPackage__Script_myPlugins, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xC684BC28, 0xD5E633F2));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
