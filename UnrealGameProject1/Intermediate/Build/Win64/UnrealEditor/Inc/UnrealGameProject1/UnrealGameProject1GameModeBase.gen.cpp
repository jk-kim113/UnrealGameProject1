// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealGameProject1/UnrealGameProject1GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealGameProject1GameModeBase() {}
// Cross Module References
	UNREALGAMEPROJECT1_API UClass* Z_Construct_UClass_AUnrealGameProject1GameModeBase_NoRegister();
	UNREALGAMEPROJECT1_API UClass* Z_Construct_UClass_AUnrealGameProject1GameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_UnrealGameProject1();
// End Cross Module References
	void AUnrealGameProject1GameModeBase::StaticRegisterNativesAUnrealGameProject1GameModeBase()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AUnrealGameProject1GameModeBase);
	UClass* Z_Construct_UClass_AUnrealGameProject1GameModeBase_NoRegister()
	{
		return AUnrealGameProject1GameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealGameProject1,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "UnrealGameProject1GameModeBase.h" },
		{ "ModuleRelativePath", "UnrealGameProject1GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AUnrealGameProject1GameModeBase>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::ClassParams = {
		&AUnrealGameProject1GameModeBase::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AUnrealGameProject1GameModeBase()
	{
		if (!Z_Registration_Info_UClass_AUnrealGameProject1GameModeBase.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AUnrealGameProject1GameModeBase.OuterSingleton, Z_Construct_UClass_AUnrealGameProject1GameModeBase_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AUnrealGameProject1GameModeBase.OuterSingleton;
	}
	template<> UNREALGAMEPROJECT1_API UClass* StaticClass<AUnrealGameProject1GameModeBase>()
	{
		return AUnrealGameProject1GameModeBase::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AUnrealGameProject1GameModeBase);
	struct Z_CompiledInDeferFile_FID_UnrealGameProject1_Source_UnrealGameProject1_UnrealGameProject1GameModeBase_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGameProject1_Source_UnrealGameProject1_UnrealGameProject1GameModeBase_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AUnrealGameProject1GameModeBase, AUnrealGameProject1GameModeBase::StaticClass, TEXT("AUnrealGameProject1GameModeBase"), &Z_Registration_Info_UClass_AUnrealGameProject1GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AUnrealGameProject1GameModeBase), 423326056U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_UnrealGameProject1_Source_UnrealGameProject1_UnrealGameProject1GameModeBase_h_4215021687(TEXT("/Script/UnrealGameProject1"),
		Z_CompiledInDeferFile_FID_UnrealGameProject1_Source_UnrealGameProject1_UnrealGameProject1GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_UnrealGameProject1_Source_UnrealGameProject1_UnrealGameProject1GameModeBase_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
