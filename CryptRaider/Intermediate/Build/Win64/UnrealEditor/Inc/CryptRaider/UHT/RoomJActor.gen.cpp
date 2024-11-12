// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRaider/Public/RoomJActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRoomJActor() {}

// Begin Cross Module References
CRYPTRAIDER_API UClass* Z_Construct_UClass_ARoomJActor();
CRYPTRAIDER_API UClass* Z_Construct_UClass_ARoomJActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor();
UPackage* Z_Construct_UPackage__Script_CryptRaider();
// End Cross Module References

// Begin Class ARoomJActor
void ARoomJActor::StaticRegisterNativesARoomJActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ARoomJActor);
UClass* Z_Construct_UClass_ARoomJActor_NoRegister()
{
	return ARoomJActor::StaticClass();
}
struct Z_Construct_UClass_ARoomJActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "RoomJActor.h" },
		{ "ModuleRelativePath", "Public/RoomJActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_roomJfloat_MetaData[] = {
		{ "Category", "RoomJActor" },
		{ "ModuleRelativePath", "Public/RoomJActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_roomJfloat;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ARoomJActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ARoomJActor_Statics::NewProp_roomJfloat = { "roomJfloat", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ARoomJActor, roomJfloat), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_roomJfloat_MetaData), NewProp_roomJfloat_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ARoomJActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ARoomJActor_Statics::NewProp_roomJfloat,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomJActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ARoomJActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRaider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomJActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ARoomJActor_Statics::ClassParams = {
	&ARoomJActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_ARoomJActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_ARoomJActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ARoomJActor_Statics::Class_MetaDataParams), Z_Construct_UClass_ARoomJActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ARoomJActor()
{
	if (!Z_Registration_Info_UClass_ARoomJActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ARoomJActor.OuterSingleton, Z_Construct_UClass_ARoomJActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ARoomJActor.OuterSingleton;
}
template<> CRYPTRAIDER_API UClass* StaticClass<ARoomJActor>()
{
	return ARoomJActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ARoomJActor);
ARoomJActor::~ARoomJActor() {}
// End Class ARoomJActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_CryptRaiderPractice_CryptRaider_Source_CryptRaider_Public_RoomJActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ARoomJActor, ARoomJActor::StaticClass, TEXT("ARoomJActor"), &Z_Registration_Info_UClass_ARoomJActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ARoomJActor), 3542246462U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_CryptRaiderPractice_CryptRaider_Source_CryptRaider_Public_RoomJActor_h_3413463997(TEXT("/Script/CryptRaider"),
	Z_CompiledInDeferFile_FID_Unreal_CryptRaiderPractice_CryptRaider_Source_CryptRaider_Public_RoomJActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_CryptRaiderPractice_CryptRaider_Source_CryptRaider_Public_RoomJActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
