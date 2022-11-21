// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaVR/Entity/BaseEntity.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBaseEntity() {}
// Cross Module References
	ARENAVR_API UClass* Z_Construct_UClass_ABaseEntity_NoRegister();
	ARENAVR_API UClass* Z_Construct_UClass_ABaseEntity();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_ArenaVR();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ABaseEntity::StaticRegisterNativesABaseEntity()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ABaseEntity);
	UClass* Z_Construct_UClass_ABaseEntity_NoRegister()
	{
		return ABaseEntity::StaticClass();
	}
	struct Z_Construct_UClass_ABaseEntity_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABaseEntity_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaVR,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Entity/BaseEntity.h" },
		{ "ModuleRelativePath", "Entity/BaseEntity.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "BaseEntity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Entity/BaseEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEntity, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEntity_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABaseEntity_Statics::NewProp_MeshComponent_MetaData[] = {
		{ "Category", "BaseEntity" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Entity/BaseEntity.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABaseEntity_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABaseEntity, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABaseEntity_Statics::NewProp_MeshComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::NewProp_MeshComponent_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABaseEntity_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABaseEntity_Statics::NewProp_MeshComponent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABaseEntity_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABaseEntity>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ABaseEntity_Statics::ClassParams = {
		&ABaseEntity::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABaseEntity_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABaseEntity_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABaseEntity()
	{
		if (!Z_Registration_Info_UClass_ABaseEntity.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ABaseEntity.OuterSingleton, Z_Construct_UClass_ABaseEntity_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ABaseEntity.OuterSingleton;
	}
	template<> ARENAVR_API UClass* StaticClass<ABaseEntity>()
	{
		return ABaseEntity::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABaseEntity);
	struct Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_BaseEntity_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_BaseEntity_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ABaseEntity, ABaseEntity::StaticClass, TEXT("ABaseEntity"), &Z_Registration_Info_UClass_ABaseEntity, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ABaseEntity), 3380653618U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_BaseEntity_h_226769122(TEXT("/Script/ArenaVR"),
		Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_BaseEntity_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_Entity_BaseEntity_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
