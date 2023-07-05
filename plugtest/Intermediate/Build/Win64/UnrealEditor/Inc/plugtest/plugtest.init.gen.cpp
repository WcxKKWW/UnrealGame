// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeplugtest_init() {}
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_plugtest;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_plugtest()
	{
		if (!Z_Registration_Info_UPackage__Script_plugtest.OuterSingleton)
		{
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/plugtest",
				nullptr,
				0,
				PKG_CompiledIn | 0x00000000,
				0x02A48444,
				0x4F77827C,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_plugtest.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_plugtest.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_plugtest(Z_Construct_UPackage__Script_plugtest, TEXT("/Script/plugtest"), Z_Registration_Info_UPackage__Script_plugtest, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x02A48444, 0x4F77827C));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
