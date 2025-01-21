// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemSlotContainerComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSlotContainerComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotContainerType();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UItemSlotContainerComponent
void UItemSlotContainerComponent::StaticRegisterNativesUItemSlotContainerComponent()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemSlotContainerComponent);
UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister()
{
	return UItemSlotContainerComponent::StaticClass();
}
struct Z_Construct_UClass_UItemSlotContainerComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Inventory" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\nItemSlotContainer\xeb\xa5\xbc \xea\xb0\x96\xea\xb3\xa0\xec\x9e\x88\xeb\x8a\x94 Component. Actor\xec\x97\x90 \xeb\xb6\x80\xec\xb0\xa9\xed\x95\x98\xeb\xa9\xb4\xeb\x90\xa8.\n*/" },
#endif
		{ "IncludePath", "ItemSlotContainerComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ItemSlotContainer\xeb\xa5\xbc \xea\xb0\x96\xea\xb3\xa0\xec\x9e\x88\xeb\x8a\x94 Component. Actor\xec\x97\x90 \xeb\xb6\x80\xec\xb0\xa9\xed\x95\x98\xeb\xa9\xb4\xeb\x90\xa8." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotContainerMap_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotContainerComponent" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemMap_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ItemMap\n\x09 \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb0\xbe\xeb\x8a\x94 \xec\x9a\xa9\xeb\x8f\x84. ItemSlotContainerMap\xec\x97\x90 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x9e\x88\xeb\x8a\x94 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4\xea\xb3\xb3\xec\x97\x90 \xec\xa0\x80\xec\x9e\xa5. \n\x09 \xeb\xb3\x80\xec\x88\x98\xeb\x8a\x94 Native\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x94\x81\xec\x8b\x9c\xeb\x8b\xb9~\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ItemMap\n       \xeb\x8f\x99\xea\xb8\xb0\xed\x99\x94\xeb\xa5\xbc \xec\x9c\x84\xed\x95\xb4 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c \xec\xb0\xbe\xeb\x8a\x94 \xec\x9a\xa9\xeb\x8f\x84. ItemSlotContainerMap\xec\x97\x90 \xeb\x93\xa4\xec\x96\xb4\xea\xb0\x80\xec\x9e\x88\xeb\x8a\x94 \xec\x95\x84\xec\x9d\xb4\xed\x85\x9c\xec\x9d\x84 \xeb\xaa\xa8\xeb\x91\x90 \xec\x9d\xb4\xea\xb3\xb3\xec\x97\x90 \xec\xa0\x80\xec\x9e\xa5.\n       \xeb\xb3\x80\xec\x88\x98\xeb\x8a\x94 Native\xec\x97\x90\xec\x84\x9c\xeb\xa7\x8c \xec\x94\x81\xec\x8b\x9c\xeb\x8b\xb9~" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSlotContainerMap_ValueProp;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemSlotContainerMap_Key_KeyProp_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemSlotContainerMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ItemSlotContainerMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemMap_ValueProp;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ItemMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSlotContainerComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_ValueProp = { "ItemSlotContainerMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItemSlotContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_Key_KeyProp_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_Key_KeyProp = { "ItemSlotContainerMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(0, nullptr) }; // 3642467615
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap = { "ItemSlotContainerMap", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotContainerComponent, ItemSlotContainerMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotContainerMap_MetaData), NewProp_ItemSlotContainerMap_MetaData) }; // 3642467615
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap_ValueProp = { "ItemMap", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap_Key_KeyProp = { "ItemMap_Key", nullptr, (EPropertyFlags)0x0100000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap = { "ItemMap", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotContainerComponent, ItemMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemMap_MetaData), NewProp_ItemMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSlotContainerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_Key_KeyProp_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemSlotContainerMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerComponent_Statics::NewProp_ItemMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemSlotContainerComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemSlotContainerComponent_Statics::ClassParams = {
	&UItemSlotContainerComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UItemSlotContainerComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemSlotContainerComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemSlotContainerComponent()
{
	if (!Z_Registration_Info_UClass_UItemSlotContainerComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemSlotContainerComponent.OuterSingleton, Z_Construct_UClass_UItemSlotContainerComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemSlotContainerComponent.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemSlotContainerComponent>()
{
	return UItemSlotContainerComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSlotContainerComponent);
UItemSlotContainerComponent::~UItemSlotContainerComponent() {}
// End Class UItemSlotContainerComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemSlotContainerComponent, UItemSlotContainerComponent::StaticClass, TEXT("UItemSlotContainerComponent"), &Z_Registration_Info_UClass_UItemSlotContainerComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemSlotContainerComponent), 2849236517U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerComponent_h_749982317(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
