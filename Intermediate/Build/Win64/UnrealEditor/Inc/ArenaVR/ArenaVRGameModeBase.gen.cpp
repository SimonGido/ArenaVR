// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaVR/ArenaVRGameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeArenaVRGameModeBase() {}
// Cross Module References
	ARENAVR_API UClass* Z_Construct_UClass_AArenaVRGameModeBase_NoRegister();
	ARENAVR_API UClass* Z_Construct_UClass_AArenaVRGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_ArenaVR();
// End Cross Module References
	void AArenaVRGameModeBase::StaticRegisterNativesAArenaVRGameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AArenaVRGameModeBase);
	UClass* Z_Construct_UClass_AArenaVRGameModeBase_NoRegister()
	{
		return AArenaVRGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AArenaVRGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AArenaVRGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaVR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AArenaVRGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "ArenaVRGameModeBase.h" },
		{ "ModuleRelativePath", "ArenaVRGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AArenaVRGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AArenaVRGameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AArenaVRGameModeBase_Statics::ClassParams = {
		&AArenaVRGameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AArenaVRGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AArenaVRGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AArenaVRGameModeBase()
	{
		if (!Z_Registration_Info_UClass_AArenaVRGameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AArenaVRGameModeBase.OuterSingleton, Z_Construct_UClass_AArenaVRGameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AArenaVRGameModeBase.OuterSingleton;
	}
	template<> ARENAVR_API UClass* StaticClass<AArenaVRGameModeBase>()
	{
		return AArenaVRGameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AArenaVRGameModeBase);
	struct Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_ArenaVRGameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_ArenaVRGameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AArenaVRGameModeBase, AArenaVRGameModeBase::StaticClass, TEXT("AArenaVRGameModeBase"), &Z_Registration_Info_UClass_AArenaVRGameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AArenaVRGameModeBase), 1867503266U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_ArenaVRGameModeBase_h_3821653410(TEXT("/Script/ArenaVR"),
		Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_ArenaVRGameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_ArenaVRGameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
