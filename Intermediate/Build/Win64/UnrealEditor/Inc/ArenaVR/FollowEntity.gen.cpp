// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaVR/Entity/FollowEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeFollowEntity() {}
// Cross Module References
	ARENAVR_API UClass* Z_Construct_UClass_AFollowEntity_NoRegister();
	ARENAVR_API UClass* Z_Construct_UClass_AFollowEntity();
	ARENAVR_API UClass* Z_Construct_UClass_ABaseEntity();
	UPackage* Z_Construct_UPackage__Script_ArenaVR();
	ARENAVR_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
// End Cross Module References
	void AFollowEntity::StaticRegisterNativesAFollowEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AFollowEntity);
	UClass* Z_Construct_UClass_AFollowEntity_NoRegister()
	{
		return AFollowEntity::StaticClass();
	}
	struct Z_Construct_UClass_AFollowEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Speed_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Speed;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_VRCharacter_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_VRCharacter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AFollowEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABaseEntity,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaVR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowEntity_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Entity/FollowEntity.h" },
		{ "ModuleRelativePath", "Entity/FollowEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowEntity_Statics::NewProp_Speed_MetaData[] = {
		{ "Category", "FollowEntity" },
		{ "ModuleRelativePath", "Entity/FollowEntity.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AFollowEntity_Statics::NewProp_Speed = { "Speed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFollowEntity, Speed), METADATA_PARAMS(Z_Construct_UClass_AFollowEntity_Statics::NewProp_Speed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowEntity_Statics::NewProp_Speed_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AFollowEntity_Statics::NewProp_m_VRCharacter_MetaData[] = {
		{ "ModuleRelativePath", "Entity/FollowEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AFollowEntity_Statics::NewProp_m_VRCharacter = { "m_VRCharacter", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AFollowEntity, m_VRCharacter), Z_Construct_UClass_AVRCharacter_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AFollowEntity_Statics::NewProp_m_VRCharacter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowEntity_Statics::NewProp_m_VRCharacter_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AFollowEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFollowEntity_Statics::NewProp_Speed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AFollowEntity_Statics::NewProp_m_VRCharacter,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AFollowEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AFollowEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AFollowEntity_Statics::ClassParams = {
		&AFollowEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AFollowEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AFollowEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AFollowEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AFollowEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AFollowEntity()
	{
		if (!Z_Registration_Info_UClass_AFollowEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AFollowEntity.OuterSingleton, Z_Construct_UClass_AFollowEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AFollowEntity.OuterSingleton;
	}
	template<> ARENAVR_API UClass* StaticClass<AFollowEntity>()
	{
		return AFollowEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AFollowEntity);
	struct Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_FollowEntity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_FollowEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AFollowEntity, AFollowEntity::StaticClass, TEXT("AFollowEntity"), &Z_Registration_Info_UClass_AFollowEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AFollowEntity), 40799152U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_FollowEntity_h_4128280647(TEXT("/Script/ArenaVR"),
		Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_FollowEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_FollowEntity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
