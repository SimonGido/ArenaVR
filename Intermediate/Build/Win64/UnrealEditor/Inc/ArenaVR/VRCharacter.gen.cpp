// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ArenaVR/VRCharacter.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVRCharacter() {}
// Cross Module References
	ARENAVR_API UClass* Z_Construct_UClass_AVRCharacter_NoRegister();
	ARENAVR_API UClass* Z_Construct_UClass_AVRCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_ArenaVR();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	HEADMOUNTEDDISPLAY_API UClass* Z_Construct_UClass_UMotionControllerComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMesh_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(AVRCharacter::execSpawnProjectile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnProjectile();
		P_NATIVE_END;
	}
	void AVRCharacter::StaticRegisterNativesAVRCharacter()
	{
		UClass* Class = AVRCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnProjectile", &AVRCharacter::execSpawnProjectile },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AVRCharacter, nullptr, "SpawnProjectile", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AVRCharacter_SpawnProjectile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AVRCharacter_SpawnProjectile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AVRCharacter);
	UClass* Z_Construct_UClass_AVRCharacter_NoRegister()
	{
		return AVRCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AVRCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHanded_MetaData[];
#endif
		static void NewProp_RightHanded_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_RightHanded;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CollisionComponent_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionComponent;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerLeft_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerLeft;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MotionControllerRight_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MotionControllerRight;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LeftHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LeftHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RightHand_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RightHand;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Camera_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Camera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_m_HandMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_m_HandMesh;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AVRCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_ArenaVR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AVRCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AVRCharacter_SpawnProjectile, "SpawnProjectile" }, // 1662310905
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "VRCharacter.h" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded_SetBit(void* Obj)
	{
		((AVRCharacter*)Obj)->RightHanded = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded = { "RightHanded", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AVRCharacter), &Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded_SetBit, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_CollisionComponent_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_CollisionComponent = { "CollisionComponent", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, CollisionComponent), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_CollisionComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_CollisionComponent_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerLeft_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerLeft = { "MotionControllerLeft", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, MotionControllerLeft), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerLeft_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerLeft_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerRight_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerRight = { "MotionControllerRight", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, MotionControllerRight), Z_Construct_UClass_UMotionControllerComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerRight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerRight_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftHand_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftHand = { "LeftHand", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, LeftHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHand_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHand = { "RightHand", nullptr, (EPropertyFlags)0x0010000000080009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, RightHand), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHand_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHand_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData[] = {
		{ "Category", "VRCharacter" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera = { "Camera", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, Camera), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AVRCharacter_Statics::NewProp_m_HandMesh_MetaData[] = {
		{ "ModuleRelativePath", "VRCharacter.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AVRCharacter_Statics::NewProp_m_HandMesh = { "m_HandMesh", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AVRCharacter, m_HandMesh), Z_Construct_UClass_USkeletalMesh_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::NewProp_m_HandMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::NewProp_m_HandMesh_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AVRCharacter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHanded,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_CollisionComponent,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerLeft,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_MotionControllerRight,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_LeftHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_RightHand,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_Camera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AVRCharacter_Statics::NewProp_m_HandMesh,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AVRCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AVRCharacter>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AVRCharacter_Statics::ClassParams = {
		&AVRCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AVRCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AVRCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AVRCharacter()
	{
		if (!Z_Registration_Info_UClass_AVRCharacter.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AVRCharacter.OuterSingleton, Z_Construct_UClass_AVRCharacter_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AVRCharacter.OuterSingleton;
	}
	template<> ARENAVR_API UClass* StaticClass<AVRCharacter>()
	{
		return AVRCharacter::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AVRCharacter);
	struct Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_VRCharacter_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_VRCharacter_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AVRCharacter, AVRCharacter::StaticClass, TEXT("AVRCharacter"), &Z_Registration_Info_UClass_AVRCharacter, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AVRCharacter), 2859260933U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_VRCharacter_h_4282988128(TEXT("/Script/ArenaVR"),
		Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_VRCharacter_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ArenaVR_Source_ArenaVR_VRCharacter_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
