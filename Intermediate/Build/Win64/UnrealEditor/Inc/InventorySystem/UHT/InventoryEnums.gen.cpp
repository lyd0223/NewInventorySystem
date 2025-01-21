// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/InventoryEnums.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryEnums() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UStaticMesh_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemMessageType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemModifyType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotContainerType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemVariableType();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FInventorySearchOrder();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemMessageBase();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemData();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemSlotMessage();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemVariableMessage();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMoveItemMessage();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin ScriptStruct FItemData
static_assert(std::is_polymorphic<FItemData>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FItemData cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemData;
class UScriptStruct* FItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ItemData.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemData>()
{
	return FItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[] = {
		{ "Category", "ItemData" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Icon_MetaData[] = {
		{ "Category", "ItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// UI\xef\xbf\xbd\xf3\xbf\xa1\xbc\xef\xbf\xbd \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UI\xef\xbf\xbd\xf3\xbf\xa1\xbc\xef\xbf\xbd \xc7\xa5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Mesh_MetaData[] = {
		{ "Category", "ItemData" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd9\xb4\xda\xbf\xef\xbf\xbd \xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd9\xb4\xda\xbf\xef\xbf\xbd \xef\xbf\xbd\xd1\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb6\xef\xbf\xbd \xef\xbf\xbd\xde\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Type;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Name;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Icon;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_Mesh;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID = { "ID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, ID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ID_MetaData), NewProp_ID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Type), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Type_MetaData), NewProp_Type_MetaData) }; // 1298103297
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Name), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Name_MetaData), NewProp_Name_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon = { "Icon", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Icon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Icon_MetaData), NewProp_Icon_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Mesh = { "Mesh", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemData, Mesh), Z_Construct_UClass_UStaticMesh_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Mesh_MetaData), NewProp_Mesh_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_ID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Type,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Name,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Icon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemData_Statics::NewProp_Mesh,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"ItemData",
	Z_Construct_UScriptStruct_FItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::PropPointers),
	sizeof(FItemData),
	alignof(FItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton, Z_Construct_UScriptStruct_FItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemData.InnerSingleton;
}
// End ScriptStruct FItemData

// Begin Enum EItemSlotContainerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemSlotContainerType;
static UEnum* EItemSlotContainerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemSlotContainerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemSlotContainerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemSlotContainerType"));
	}
	return Z_Registration_Info_UEnum_EItemSlotContainerType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemSlotContainerType>()
{
	return EItemSlotContainerType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BagContainer.Comment", "// Grid Item Slot Container \n" },
		{ "BagContainer.Name", "EItemSlotContainerType::BagContainer" },
		{ "BagContainer.ToolTip", "Grid Item Slot Container" },
		{ "BlueprintType", "true" },
		{ "CaseContainer.Name", "EItemSlotContainerType::CaseContainer" },
		{ "ChestContainer.Name", "EItemSlotContainerType::ChestContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EItemSlotContainerType\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd.\n */" },
#endif
		{ "Equips.Comment", "// Single Item Slot Container\n" },
		{ "Equips.Name", "EItemSlotContainerType::Equips" },
		{ "Equips.ToolTip", "Single Item Slot Container" },
		{ "LootContainer.Name", "EItemSlotContainerType::LootContainer" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EItemSlotContainerType::Max" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
		{ "None.Name", "EItemSlotContainerType::None" },
		{ "PouchContainer.Name", "EItemSlotContainerType::PouchContainer" },
		{ "Storage.Name", "EItemSlotContainerType::Storage" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EItemSlotContainerType\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd." },
#endif
		{ "WeaponContainer.Name", "EItemSlotContainerType::WeaponContainer" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemSlotContainerType::None", (int64)EItemSlotContainerType::None },
		{ "EItemSlotContainerType::Equips", (int64)EItemSlotContainerType::Equips },
		{ "EItemSlotContainerType::WeaponContainer", (int64)EItemSlotContainerType::WeaponContainer },
		{ "EItemSlotContainerType::ChestContainer", (int64)EItemSlotContainerType::ChestContainer },
		{ "EItemSlotContainerType::BagContainer", (int64)EItemSlotContainerType::BagContainer },
		{ "EItemSlotContainerType::PouchContainer", (int64)EItemSlotContainerType::PouchContainer },
		{ "EItemSlotContainerType::Storage", (int64)EItemSlotContainerType::Storage },
		{ "EItemSlotContainerType::LootContainer", (int64)EItemSlotContainerType::LootContainer },
		{ "EItemSlotContainerType::CaseContainer", (int64)EItemSlotContainerType::CaseContainer },
		{ "EItemSlotContainerType::Max", (int64)EItemSlotContainerType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EItemSlotContainerType",
	"EItemSlotContainerType",
	Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotContainerType()
{
	if (!Z_Registration_Info_UEnum_EItemSlotContainerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemSlotContainerType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemSlotContainerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemSlotContainerType.InnerSingleton;
}
// End Enum EItemSlotContainerType

// Begin Enum EItemSlotType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemSlotType;
static UEnum* EItemSlotType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemSlotType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemSlotType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemSlotType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemSlotType"));
	}
	return Z_Registration_Info_UEnum_EItemSlotType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemSlotType>()
{
	return EItemSlotType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bag.Name", "EItemSlotType::Bag" },
		{ "BagSlot.Comment", "// - EItemSlotContainerType::Baggage\n" },
		{ "BagSlot.Name", "EItemSlotType::BagSlot" },
		{ "BagSlot.ToolTip", "- EItemSlotContainerType::Baggage" },
		{ "BlueprintType", "true" },
		{ "BulletCase.Comment", "// - EItemSlotContainerType::CaseContainer\n" },
		{ "BulletCase.Name", "EItemSlotType::BulletCase" },
		{ "BulletCase.ToolTip", "- EItemSlotContainerType::CaseContainer" },
		{ "Chest.Name", "EItemSlotType::Chest" },
		{ "ChestCase.Name", "EItemSlotType::ChestCase" },
		{ "ChestSlot.Comment", "// - EItemSlotContainerType::ChestSlots\n" },
		{ "ChestSlot.Name", "EItemSlotType::ChestSlot" },
		{ "ChestSlot.ToolTip", "- EItemSlotContainerType::ChestSlots" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EItemSlotType\n \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd.\n*/" },
#endif
		{ "Helmet.Name", "EItemSlotType::Helmet" },
		{ "LootContainer.Comment", "// - EItemSlotContainerType::LootContainer\n" },
		{ "LootContainer.Name", "EItemSlotType::LootContainer" },
		{ "LootContainer.ToolTip", "- EItemSlotContainerType::LootContainer" },
		{ "Max.Hidden", "" },
		{ "Max.Name", "EItemSlotType::Max" },
		{ "MedicineCase.Name", "EItemSlotType::MedicineCase" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
		{ "MoneyCase.Name", "EItemSlotType::MoneyCase" },
		{ "MultiCase.Name", "EItemSlotType::MultiCase" },
		{ "None.Name", "EItemSlotType::None" },
		{ "Pouch.Name", "EItemSlotType::Pouch" },
		{ "PouchSlot.Comment", "// - EItemSlotContainerType::BeltPockets\n" },
		{ "PouchSlot.Name", "EItemSlotType::PouchSlot" },
		{ "PouchSlot.ToolTip", "- EItemSlotContainerType::BeltPockets" },
		{ "Storage.Comment", "// - EItemSlotContainerType::Storage\n" },
		{ "Storage.Name", "EItemSlotType::Storage" },
		{ "Storage.ToolTip", "- EItemSlotContainerType::Storage" },
		{ "SubWeapon.Name", "EItemSlotType::SubWeapon" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EItemSlotType\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd." },
#endif
		{ "Weapon.Comment", "// -- Single Item Slots\n// - EItemSlotContainerType::Equips\n" },
		{ "Weapon.Name", "EItemSlotType::Weapon" },
		{ "Weapon.ToolTip", "-- Single Item Slots\n- EItemSlotContainerType::Equips" },
		{ "WeaponCase.Name", "EItemSlotType::WeaponCase" },
		{ "WeaponSlot.Comment", "// -- Grid Item Slots\n// - EItemSlotContainerType::WeaponSockets\n" },
		{ "WeaponSlot.Name", "EItemSlotType::WeaponSlot" },
		{ "WeaponSlot.ToolTip", "-- Grid Item Slots\n- EItemSlotContainerType::WeaponSockets" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemSlotType::None", (int64)EItemSlotType::None },
		{ "EItemSlotType::Weapon", (int64)EItemSlotType::Weapon },
		{ "EItemSlotType::SubWeapon", (int64)EItemSlotType::SubWeapon },
		{ "EItemSlotType::Helmet", (int64)EItemSlotType::Helmet },
		{ "EItemSlotType::Chest", (int64)EItemSlotType::Chest },
		{ "EItemSlotType::Bag", (int64)EItemSlotType::Bag },
		{ "EItemSlotType::Pouch", (int64)EItemSlotType::Pouch },
		{ "EItemSlotType::ChestSlot", (int64)EItemSlotType::ChestSlot },
		{ "EItemSlotType::WeaponSlot", (int64)EItemSlotType::WeaponSlot },
		{ "EItemSlotType::PouchSlot", (int64)EItemSlotType::PouchSlot },
		{ "EItemSlotType::BagSlot", (int64)EItemSlotType::BagSlot },
		{ "EItemSlotType::Storage", (int64)EItemSlotType::Storage },
		{ "EItemSlotType::LootContainer", (int64)EItemSlotType::LootContainer },
		{ "EItemSlotType::BulletCase", (int64)EItemSlotType::BulletCase },
		{ "EItemSlotType::MultiCase", (int64)EItemSlotType::MultiCase },
		{ "EItemSlotType::MedicineCase", (int64)EItemSlotType::MedicineCase },
		{ "EItemSlotType::WeaponCase", (int64)EItemSlotType::WeaponCase },
		{ "EItemSlotType::ChestCase", (int64)EItemSlotType::ChestCase },
		{ "EItemSlotType::MoneyCase", (int64)EItemSlotType::MoneyCase },
		{ "EItemSlotType::Max", (int64)EItemSlotType::Max },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EItemSlotType",
	"EItemSlotType",
	Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotType()
{
	if (!Z_Registration_Info_UEnum_EItemSlotType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemSlotType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemSlotType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemSlotType.InnerSingleton;
}
// End Enum EItemSlotType

// Begin ScriptStruct FInventorySearchOrder
static_assert(std::is_polymorphic<FInventorySearchOrder>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FInventorySearchOrder cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InventorySearchOrder;
class UScriptStruct* FInventorySearchOrder::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySearchOrder.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InventorySearchOrder.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInventorySearchOrder, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("InventorySearchOrder"));
	}
	return Z_Registration_Info_UScriptStruct_InventorySearchOrder.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FInventorySearchOrder>()
{
	return FInventorySearchOrder::StaticStruct();
}
struct Z_Construct_UScriptStruct_FInventorySearchOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* FInventorySearchOrder\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xb2(Pickup, AutoMove \xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xca\xb8\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FInventorySearchOrder\n* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xb2(Pickup, AutoMove \xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xca\xb8\xef\xbf\xbd \xc5\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchOrder_MetaData[] = {
		{ "Category", "InventorySearchOrder" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_SearchOrder_Inner_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SearchOrder_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SearchOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInventorySearchOrder>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder_Inner = { "SearchOrder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(0, nullptr) }; // 3642467615
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder = { "SearchOrder", nullptr, (EPropertyFlags)0x0010000000010005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FInventorySearchOrder, SearchOrder), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchOrder_MetaData), NewProp_SearchOrder_MetaData) }; // 3642467615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder_Inner_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewProp_SearchOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"InventorySearchOrder",
	Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::PropPointers),
	sizeof(FInventorySearchOrder),
	alignof(FInventorySearchOrder),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FInventorySearchOrder()
{
	if (!Z_Registration_Info_UScriptStruct_InventorySearchOrder.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InventorySearchOrder.InnerSingleton, Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_InventorySearchOrder.InnerSingleton;
}
// End ScriptStruct FInventorySearchOrder

// Begin ScriptStruct FItemStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemStruct;
class UScriptStruct* FItemStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemStruct, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemStruct"));
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemStruct>()
{
	return FItemStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* struct FItemStruct\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct FItemStruct\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemUID_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[] = {
		{ "Category", "ItemStruct" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemUID = { "ItemUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemUID_MetaData), NewProp_ItemUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemStruct, ItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCount_MetaData), NewProp_ItemCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemStruct_Statics::NewProp_ItemCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ItemStruct",
	Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::PropPointers),
	sizeof(FItemStruct),
	alignof(FItemStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton, Z_Construct_UScriptStruct_FItemStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemStruct.InnerSingleton;
}
// End ScriptStruct FItemStruct

// Begin Enum EItemVariableType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemVariableType;
static UEnum* EItemVariableType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemVariableType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemVariableType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemVariableType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemVariableType"));
	}
	return Z_Registration_Info_UEnum_EItemVariableType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemVariableType>()
{
	return EItemVariableType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EItemVariableType\n ItemObject\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd.\n \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe9\xb8\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. (UID, ID\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb4\xc2\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.)\n*/" },
#endif
		{ "Count.Name", "EItemVariableType::Count" },
		{ "CurDurability.Name", "EItemVariableType::CurDurability" },
		{ "CurMaxDurability.Name", "EItemVariableType::CurMaxDurability" },
		{ "CurWeight.Name", "EItemVariableType::CurWeight" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
		{ "None.Name", "EItemVariableType::None" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EItemVariableType\nItemObject\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb8\xef\xbf\xbd\xef\xbf\xbd.\n\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xe9\xb8\xb8 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. (UID, ID\xef\xbf\xbd\xcd\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xb4\xc2\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.)" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemVariableType::None", (int64)EItemVariableType::None },
		{ "EItemVariableType::Count", (int64)EItemVariableType::Count },
		{ "EItemVariableType::CurWeight", (int64)EItemVariableType::CurWeight },
		{ "EItemVariableType::CurDurability", (int64)EItemVariableType::CurDurability },
		{ "EItemVariableType::CurMaxDurability", (int64)EItemVariableType::CurMaxDurability },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EItemVariableType",
	"EItemVariableType",
	Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EItemVariableType()
{
	if (!Z_Registration_Info_UEnum_EItemVariableType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemVariableType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemVariableType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemVariableType.InnerSingleton;
}
// End Enum EItemVariableType

// Begin Enum EItemMessageType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemMessageType;
static UEnum* EItemMessageType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemMessageType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemMessageType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemMessageType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemMessageType"));
	}
	return Z_Registration_Info_UEnum_EItemMessageType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemMessageType>()
{
	return EItemMessageType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModifyItemSlot.Name", "EItemMessageType::ModifyItemSlot" },
		{ "ModifyItemVariable.Name", "EItemMessageType::ModifyItemVariable" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
		{ "MoveItem.Name", "EItemMessageType::MoveItem" },
		{ "None.Name", "EItemMessageType::None" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemMessageType::None", (int64)EItemMessageType::None },
		{ "EItemMessageType::ModifyItemSlot", (int64)EItemMessageType::ModifyItemSlot },
		{ "EItemMessageType::ModifyItemVariable", (int64)EItemMessageType::ModifyItemVariable },
		{ "EItemMessageType::MoveItem", (int64)EItemMessageType::MoveItem },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EItemMessageType",
	"EItemMessageType",
	Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EItemMessageType()
{
	if (!Z_Registration_Info_UEnum_EItemMessageType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemMessageType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemMessageType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemMessageType.InnerSingleton;
}
// End Enum EItemMessageType

// Begin Enum EItemModifyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EItemModifyType;
static UEnum* EItemModifyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EItemModifyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EItemModifyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_InventorySystem_EItemModifyType, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("EItemModifyType"));
	}
	return Z_Registration_Info_UEnum_EItemModifyType.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemModifyType>()
{
	return EItemModifyType_StaticEnum();
}
struct Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* EItemModifyType\n Description\n */" },
#endif
		{ "Drop.Name", "EItemModifyType::Drop" },
		{ "General.Name", "EItemModifyType::General" },
		{ "Merge.Name", "EItemModifyType::Merge" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
		{ "Move.Name", "EItemModifyType::Move" },
		{ "None.Name", "EItemModifyType::None" },
		{ "Split.Name", "EItemModifyType::Split" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "EItemModifyType\nDescription" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EItemModifyType::None", (int64)EItemModifyType::None },
		{ "EItemModifyType::General", (int64)EItemModifyType::General },
		{ "EItemModifyType::Move", (int64)EItemModifyType::Move },
		{ "EItemModifyType::Split", (int64)EItemModifyType::Split },
		{ "EItemModifyType::Merge", (int64)EItemModifyType::Merge },
		{ "EItemModifyType::Drop", (int64)EItemModifyType::Drop },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	"EItemModifyType",
	"EItemModifyType",
	Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_InventorySystem_EItemModifyType()
{
	if (!Z_Registration_Info_UEnum_EItemModifyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EItemModifyType.InnerSingleton, Z_Construct_UEnum_InventorySystem_EItemModifyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EItemModifyType.InnerSingleton;
}
// End Enum EItemModifyType

// Begin ScriptStruct FModifyItemData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyItemData;
class UScriptStruct* FModifyItemData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyItemData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyItemData, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ModifyItemData"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemData.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FModifyItemData>()
{
	return FModifyItemData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyItemData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* struct FModifyItemStruct\nModify\xef\xbf\xbd\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct FModifyItemStruct\nModify\xef\xbf\xbd\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemStruct_MetaData[] = {
		{ "Category", "ModifyItemData" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemStruct;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyItemData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyItemData_Statics::NewProp_ItemStruct = { "ItemStruct", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemData, ItemStruct), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemStruct_MetaData), NewProp_ItemStruct_MetaData) }; // 3679274376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemData_Statics::NewProp_ItemStruct,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyItemData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ModifyItemData",
	Z_Construct_UScriptStruct_FModifyItemData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemData_Statics::PropPointers),
	sizeof(FModifyItemData),
	alignof(FModifyItemData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyItemData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyItemData()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyItemData.InnerSingleton, Z_Construct_UScriptStruct_FModifyItemData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemData.InnerSingleton;
}
// End ScriptStruct FModifyItemData

// Begin ScriptStruct FItemSlotInfo
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemSlotInfo;
class UScriptStruct* FItemSlotInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemSlotInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemSlotInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemSlotInfo, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemSlotInfo"));
	}
	return Z_Registration_Info_UScriptStruct_ItemSlotInfo.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemSlotInfo>()
{
	return FItemSlotInfo::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemSlotInfo_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* FSlotInfo\n \xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd-\xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "FSlotInfo\n\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd-\xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContainerComponent_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TopContainerType_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentItemUID_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* ParentItemUID\n\x09 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd Item\xef\xbf\xbd\xef\xbf\xbd UID. \xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb0\xef\xbf\xbd\xef\xbf\xbd(Owner\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd), 0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ParentItemUID\n       \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd Item\xef\xbf\xbd\xef\xbf\xbd UID. \xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb0\xef\xbf\xbd\xef\xbf\xbd(Owner\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd), 0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa1 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "Category", "ItemSlotInfo" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerComponent;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TopContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_TopContainerType;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ParentItemUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemSlotInfo>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_ContainerComponent = { "ContainerComponent", nullptr, (EPropertyFlags)0x011400000008000c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSlotInfo, ContainerComponent), Z_Construct_UClass_UItemSlotContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContainerComponent_MetaData), NewProp_ContainerComponent_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_TopContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_TopContainerType = { "TopContainerType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSlotInfo, TopContainerType), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TopContainerType_MetaData), NewProp_TopContainerType_MetaData) }; // 3642467615
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_ParentItemUID = { "ParentItemUID", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSlotInfo, ParentItemUID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentItemUID_MetaData), NewProp_ParentItemUID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FItemSlotInfo, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_ContainerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_TopContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_TopContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_ParentItemUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewProp_SlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemSlotInfo_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ItemSlotInfo",
	Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::PropPointers),
	sizeof(FItemSlotInfo),
	alignof(FItemSlotInfo),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemSlotInfo_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemSlotInfo_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo()
{
	if (!Z_Registration_Info_UScriptStruct_ItemSlotInfo.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemSlotInfo.InnerSingleton, Z_Construct_UScriptStruct_FItemSlotInfo_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemSlotInfo.InnerSingleton;
}
// End ScriptStruct FItemSlotInfo

// Begin ScriptStruct FModifyItemSlotMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage;
class UScriptStruct* FModifyItemSlotMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyItemSlotMessage, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ModifyItemSlotMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FModifyItemSlotMessage>()
{
	return FModifyItemSlotMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemModifyType_MetaData[] = {
		{ "Category", "ModifyItemSlotMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotInfo_MetaData[] = {
		{ "Category", "ModifyItemSlotMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ModifyItemData_MetaData[] = {
		{ "Category", "ModifyItemSlotMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemModifyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemModifyType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlotInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ModifyItemData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyItemSlotMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemModifyType = { "ItemModifyType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemSlotMessage, ItemModifyType), Z_Construct_UEnum_InventorySystem_EItemModifyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemModifyType_MetaData), NewProp_ItemModifyType_MetaData) }; // 2704755389
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemSlotInfo = { "ItemSlotInfo", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemSlotMessage, ItemSlotInfo), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotInfo_MetaData), NewProp_ItemSlotInfo_MetaData) }; // 643725478
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ModifyItemData = { "ModifyItemData", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemSlotMessage, ModifyItemData), Z_Construct_UScriptStruct_FModifyItemData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ModifyItemData_MetaData), NewProp_ModifyItemData_MetaData) }; // 1359201092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemModifyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemModifyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ItemSlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewProp_ModifyItemData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ModifyItemSlotMessage",
	Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::PropPointers),
	sizeof(FModifyItemSlotMessage),
	alignof(FModifyItemSlotMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyItemSlotMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.InnerSingleton, Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage.InnerSingleton;
}
// End ScriptStruct FModifyItemSlotMessage

// Begin ScriptStruct FModifyItemVariableMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage;
class UScriptStruct* FModifyItemVariableMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FModifyItemVariableMessage, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ModifyItemVariableMessage"));
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FModifyItemVariableMessage>()
{
	return FModifyItemVariableMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotInfo_MetaData[] = {
		{ "Category", "ModifyItemVariableMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableType_MetaData[] = {
		{ "Category", "ModifyItemVariableMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VariableValue_MetaData[] = {
		{ "Category", "ModifyItemVariableMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemSlotInfo;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VariableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VariableType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VariableValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FModifyItemVariableMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_ItemSlotInfo = { "ItemSlotInfo", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemVariableMessage, ItemSlotInfo), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotInfo_MetaData), NewProp_ItemSlotInfo_MetaData) }; // 643725478
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemVariableMessage, VariableType), Z_Construct_UEnum_InventorySystem_EItemVariableType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableType_MetaData), NewProp_VariableType_MetaData) }; // 3302272687
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableValue = { "VariableValue", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FModifyItemVariableMessage, VariableValue), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VariableValue_MetaData), NewProp_VariableValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_ItemSlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewProp_VariableValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ModifyItemVariableMessage",
	Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::PropPointers),
	sizeof(FModifyItemVariableMessage),
	alignof(FModifyItemVariableMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FModifyItemVariableMessage()
{
	if (!Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.InnerSingleton, Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage.InnerSingleton;
}
// End ScriptStruct FModifyItemVariableMessage

// Begin ScriptStruct FMoveItemMessage
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MoveItemMessage;
class UScriptStruct* FMoveItemMessage::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MoveItemMessage.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MoveItemMessage.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMoveItemMessage, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("MoveItemMessage"));
	}
	return Z_Registration_Info_UScriptStruct_MoveItemMessage.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FMoveItemMessage>()
{
	return FMoveItemMessage::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMoveItemMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromItemSlotInfo_MetaData[] = {
		{ "Category", "MoveItemMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ToItemSlotInfo_MetaData[] = {
		{ "Category", "MoveItemMessage" },
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FromItemSlotInfo;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ToItemSlotInfo;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMoveItemMessage>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveItemMessage_Statics::NewProp_FromItemSlotInfo = { "FromItemSlotInfo", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveItemMessage, FromItemSlotInfo), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromItemSlotInfo_MetaData), NewProp_FromItemSlotInfo_MetaData) }; // 643725478
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMoveItemMessage_Statics::NewProp_ToItemSlotInfo = { "ToItemSlotInfo", nullptr, (EPropertyFlags)0x0010008000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMoveItemMessage, ToItemSlotInfo), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ToItemSlotInfo_MetaData), NewProp_ToItemSlotInfo_MetaData) }; // 643725478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMoveItemMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveItemMessage_Statics::NewProp_FromItemSlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMoveItemMessage_Statics::NewProp_ToItemSlotInfo,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveItemMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMoveItemMessage_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"MoveItemMessage",
	Z_Construct_UScriptStruct_FMoveItemMessage_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveItemMessage_Statics::PropPointers),
	sizeof(FMoveItemMessage),
	alignof(FMoveItemMessage),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMoveItemMessage_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMoveItemMessage_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMoveItemMessage()
{
	if (!Z_Registration_Info_UScriptStruct_MoveItemMessage.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MoveItemMessage.InnerSingleton, Z_Construct_UScriptStruct_FMoveItemMessage_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MoveItemMessage.InnerSingleton;
}
// End ScriptStruct FMoveItemMessage

// Begin ScriptStruct FItemMessageBase
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ItemMessageBase;
class UScriptStruct* FItemMessageBase::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ItemMessageBase.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ItemMessageBase.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FItemMessageBase, (UObject*)Z_Construct_UPackage__Script_InventorySystem(), TEXT("ItemMessageBase"));
	}
	return Z_Registration_Info_UScriptStruct_ItemMessageBase.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<FItemMessageBase>()
{
	return FItemMessageBase::StaticStruct();
}
struct Z_Construct_UScriptStruct_FItemMessageBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* struct FItemMssageBase\n S->C \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Message\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc.\n \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Modify / MoveItem \xef\xbf\xbd\xef\xbf\xbd Message\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryEnums.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "struct FItemMssageBase\nS->C \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd Message\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc.\n\xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Modify / MoveItem \xef\xbf\xbd\xef\xbf\xbd Message\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xde\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FItemMessageBase>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FItemMessageBase_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
	nullptr,
	&NewStructOps,
	"ItemMessageBase",
	nullptr,
	0,
	sizeof(FItemMessageBase),
	alignof(FItemMessageBase),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FItemMessageBase_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FItemMessageBase_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FItemMessageBase()
{
	if (!Z_Registration_Info_UScriptStruct_ItemMessageBase.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ItemMessageBase.InnerSingleton, Z_Construct_UScriptStruct_FItemMessageBase_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_ItemMessageBase.InnerSingleton;
}
// End ScriptStruct FItemMessageBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EItemSlotContainerType_StaticEnum, TEXT("EItemSlotContainerType"), &Z_Registration_Info_UEnum_EItemSlotContainerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3642467615U) },
		{ EItemSlotType_StaticEnum, TEXT("EItemSlotType"), &Z_Registration_Info_UEnum_EItemSlotType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2549424163U) },
		{ EItemVariableType_StaticEnum, TEXT("EItemVariableType"), &Z_Registration_Info_UEnum_EItemVariableType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3302272687U) },
		{ EItemMessageType_StaticEnum, TEXT("EItemMessageType"), &Z_Registration_Info_UEnum_EItemMessageType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3098296689U) },
		{ EItemModifyType_StaticEnum, TEXT("EItemModifyType"), &Z_Registration_Info_UEnum_EItemModifyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2704755389U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FItemData::StaticStruct, Z_Construct_UScriptStruct_FItemData_Statics::NewStructOps, TEXT("ItemData"), &Z_Registration_Info_UScriptStruct_ItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemData), 4066276676U) },
		{ FInventorySearchOrder::StaticStruct, Z_Construct_UScriptStruct_FInventorySearchOrder_Statics::NewStructOps, TEXT("InventorySearchOrder"), &Z_Registration_Info_UScriptStruct_InventorySearchOrder, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInventorySearchOrder), 2619305971U) },
		{ FItemStruct::StaticStruct, Z_Construct_UScriptStruct_FItemStruct_Statics::NewStructOps, TEXT("ItemStruct"), &Z_Registration_Info_UScriptStruct_ItemStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemStruct), 3679274376U) },
		{ FModifyItemData::StaticStruct, Z_Construct_UScriptStruct_FModifyItemData_Statics::NewStructOps, TEXT("ModifyItemData"), &Z_Registration_Info_UScriptStruct_ModifyItemData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyItemData), 1359201092U) },
		{ FItemSlotInfo::StaticStruct, Z_Construct_UScriptStruct_FItemSlotInfo_Statics::NewStructOps, TEXT("ItemSlotInfo"), &Z_Registration_Info_UScriptStruct_ItemSlotInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemSlotInfo), 643725478U) },
		{ FModifyItemSlotMessage::StaticStruct, Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics::NewStructOps, TEXT("ModifyItemSlotMessage"), &Z_Registration_Info_UScriptStruct_ModifyItemSlotMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyItemSlotMessage), 3267337964U) },
		{ FModifyItemVariableMessage::StaticStruct, Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics::NewStructOps, TEXT("ModifyItemVariableMessage"), &Z_Registration_Info_UScriptStruct_ModifyItemVariableMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FModifyItemVariableMessage), 1746086115U) },
		{ FMoveItemMessage::StaticStruct, Z_Construct_UScriptStruct_FMoveItemMessage_Statics::NewStructOps, TEXT("MoveItemMessage"), &Z_Registration_Info_UScriptStruct_MoveItemMessage, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMoveItemMessage), 1752974337U) },
		{ FItemMessageBase::StaticStruct, Z_Construct_UScriptStruct_FItemMessageBase_Statics::NewStructOps, TEXT("ItemMessageBase"), &Z_Registration_Info_UScriptStruct_ItemMessageBase, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FItemMessageBase), 2183607090U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_11016957(TEXT("/Script/InventorySystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
