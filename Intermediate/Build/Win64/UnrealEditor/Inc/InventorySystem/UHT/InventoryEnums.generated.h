// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryEnums.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef INVENTORYSYSTEM_InventoryEnums_generated_h
#error "InventoryEnums.generated.h already included, missing '#pragma once' in InventoryEnums.h"
#endif
#define INVENTORYSYSTEM_InventoryEnums_generated_h

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_16_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemData_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FItemData>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_118_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FInventorySearchOrder_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FInventorySearchOrder>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_132_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemStruct_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FItemStruct>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_197_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyItemData_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FModifyItemData>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_217_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemSlotInfo_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FItemSlotInfo>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_245_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyItemSlotMessage_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FModifyItemSlotMessage>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FModifyItemVariableMessage_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FModifyItemVariableMessage>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_272_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMoveItemMessage_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FMoveItemMessage>();

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h_289_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FItemMessageBase_Statics; \
	INVENTORYSYSTEM_API static class UScriptStruct* StaticStruct();


template<> INVENTORYSYSTEM_API UScriptStruct* StaticStruct<struct FItemMessageBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryEnums_h


#define FOREACH_ENUM_EITEMSLOTCONTAINERTYPE(op) \
	op(EItemSlotContainerType::None) \
	op(EItemSlotContainerType::Equips) \
	op(EItemSlotContainerType::WeaponContainer) \
	op(EItemSlotContainerType::ChestContainer) \
	op(EItemSlotContainerType::BagContainer) \
	op(EItemSlotContainerType::PouchContainer) \
	op(EItemSlotContainerType::Storage) \
	op(EItemSlotContainerType::LootContainer) \
	op(EItemSlotContainerType::CaseContainer) \
	op(EItemSlotContainerType::Max) 

enum class EItemSlotContainerType : uint8;
template<> struct TIsUEnumClass<EItemSlotContainerType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemSlotContainerType>();

#define FOREACH_ENUM_EITEMSLOTTYPE(op) \
	op(EItemSlotType::None) \
	op(EItemSlotType::Weapon) \
	op(EItemSlotType::SubWeapon) \
	op(EItemSlotType::Helmet) \
	op(EItemSlotType::Chest) \
	op(EItemSlotType::Bag) \
	op(EItemSlotType::Pouch) \
	op(EItemSlotType::ChestSlot) \
	op(EItemSlotType::WeaponSlot) \
	op(EItemSlotType::PouchSlot) \
	op(EItemSlotType::BagSlot) \
	op(EItemSlotType::Storage) \
	op(EItemSlotType::LootContainer) \
	op(EItemSlotType::BulletCase) \
	op(EItemSlotType::MultiCase) \
	op(EItemSlotType::MedicineCase) \
	op(EItemSlotType::WeaponCase) \
	op(EItemSlotType::ChestCase) \
	op(EItemSlotType::MoneyCase) \
	op(EItemSlotType::Max) 

enum class EItemSlotType : uint8;
template<> struct TIsUEnumClass<EItemSlotType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemSlotType>();

#define FOREACH_ENUM_EITEMVARIABLETYPE(op) \
	op(EItemVariableType::None) \
	op(EItemVariableType::Count) \
	op(EItemVariableType::CurWeight) \
	op(EItemVariableType::CurDurability) \
	op(EItemVariableType::CurMaxDurability) 

enum class EItemVariableType : uint8;
template<> struct TIsUEnumClass<EItemVariableType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemVariableType>();

#define FOREACH_ENUM_EITEMMESSAGETYPE(op) \
	op(EItemMessageType::None) \
	op(EItemMessageType::ModifyItemSlot) \
	op(EItemMessageType::ModifyItemVariable) \
	op(EItemMessageType::MoveItem) 

enum class EItemMessageType : uint8;
template<> struct TIsUEnumClass<EItemMessageType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemMessageType>();

#define FOREACH_ENUM_EITEMMODIFYTYPE(op) \
	op(EItemModifyType::None) \
	op(EItemModifyType::General) \
	op(EItemModifyType::Move) \
	op(EItemModifyType::Split) \
	op(EItemModifyType::Merge) \
	op(EItemModifyType::Drop) 

enum class EItemModifyType : uint8;
template<> struct TIsUEnumClass<EItemModifyType> { enum { Value = true }; };
template<> INVENTORYSYSTEM_API UEnum* StaticEnum<EItemModifyType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
