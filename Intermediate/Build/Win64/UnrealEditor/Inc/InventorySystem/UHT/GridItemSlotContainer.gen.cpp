// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemSlotContainer/GridItemSlotContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGridItemSlotContainer() {}

// Begin Cross Module References
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UGridItemSlotContainer();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UGridItemSlotContainer_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UGridItemSlotContainer
void UGridItemSlotContainer::StaticRegisterNativesUGridItemSlotContainer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UGridItemSlotContainer);
UClass* Z_Construct_UClass_UGridItemSlotContainer_NoRegister()
{
	return UGridItemSlotContainer::StaticClass();
}
struct Z_Construct_UClass_UGridItemSlotContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSlotContainer/GridItemSlotContainer.h" },
		{ "ModuleRelativePath", "Public/ItemSlotContainer/GridItemSlotContainer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGridItemSlotContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UGridItemSlotContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UItemSlotContainerBase,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UGridItemSlotContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UGridItemSlotContainer_Statics::ClassParams = {
	&UGridItemSlotContainer::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UGridItemSlotContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UGridItemSlotContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UGridItemSlotContainer()
{
	if (!Z_Registration_Info_UClass_UGridItemSlotContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UGridItemSlotContainer.OuterSingleton, Z_Construct_UClass_UGridItemSlotContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UGridItemSlotContainer.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UGridItemSlotContainer>()
{
	return UGridItemSlotContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UGridItemSlotContainer);
UGridItemSlotContainer::~UGridItemSlotContainer() {}
// End Class UGridItemSlotContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_GridItemSlotContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UGridItemSlotContainer, UGridItemSlotContainer::StaticClass, TEXT("UGridItemSlotContainer"), &Z_Registration_Info_UClass_UGridItemSlotContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UGridItemSlotContainer), 2883692567U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_GridItemSlotContainer_h_2933930146(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_GridItemSlotContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainer_GridItemSlotContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
