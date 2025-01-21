// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemSlotContainer/SingleItemSlotContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSingleItemSlotContainer() {}

// Begin Cross Module References
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_USingleItemSlotContainer();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_USingleItemSlotContainer_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class USingleItemSlotContainer
void USingleItemSlotContainer::StaticRegisterNativesUSingleItemSlotContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USingleItemSlotContainer);
UClass* Z_Construct_UClass_USingleItemSlotContainer_NoRegister()
{
	return USingleItemSlotContainer::StaticClass();
}
struct Z_Construct_UClass_USingleItemSlotContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSlotContainer/SingleItemSlotContainer.h" },
		{ "ModuleRelativePath", "Public/ItemSlotContainer/SingleItemSlotContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USingleItemSlotContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USingleItemSlotContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemSlotContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USingleItemSlotContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USingleItemSlotContainer_Statics::ClassParams = {
	&USingleItemSlotContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USingleItemSlotContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_USingleItemSlotContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USingleItemSlotContainer()
{
	if (!Z_Registration_Info_UClass_USingleItemSlotContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USingleItemSlotContainer.OuterSingleton, Z_Construct_UClass_USingleItemSlotContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USingleItemSlotContainer.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<USingleItemSlotContainer>()
{
	return USingleItemSlotContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USingleItemSlotContainer);
USingleItemSlotContainer::~USingleItemSlotContainer() {}
// End Class USingleItemSlotContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_SingleItemSlotContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USingleItemSlotContainer, USingleItemSlotContainer::StaticClass, TEXT("USingleItemSlotContainer"), &Z_Registration_Info_UClass_USingleItemSlotContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USingleItemSlotContainer), 4072888849U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_SingleItemSlotContainer_h_3039084632(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_SingleItemSlotContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_SingleItemSlotContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
