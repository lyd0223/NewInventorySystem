// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemSlotContainerBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemObject;
class UItemSlotBase;
class UItemSlotContainerComponent;
class UObject;
enum class EItemSlotContainerType : uint8;
enum class EItemSlotType : uint8;
#ifdef INVENTORYSYSTEM_ItemSlotContainerBase_generated_h
#error "ItemSlotContainerBase.generated.h already included, missing '#pragma once' in ItemSlotContainerBase.h"
#endif
#define INVENTORYSYSTEM_ItemSlotContainerBase_generated_h

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execIsSlotMoveAvailableByItemID); \
	DECLARE_FUNCTION(execIsSlotMoveAvailable); \
	DECLARE_FUNCTION(execRemoveItemToIndex); \
	DECLARE_FUNCTION(execAddItemToIndex); \
	DECLARE_FUNCTION(execRemoveAllItems); \
	DECLARE_FUNCTION(execRemoveItemByItemUID); \
	DECLARE_FUNCTION(execRemoveItem); \
	DECLARE_FUNCTION(execAddItem); \
	DECLARE_FUNCTION(execCheckAddAvailable); \
	DECLARE_FUNCTION(execHasItem); \
	DECLARE_FUNCTION(execGetAllItemObjects); \
	DECLARE_FUNCTION(execGetItemSlotByItemObject); \
	DECLARE_FUNCTION(execGetItemObjectListByItemID); \
	DECLARE_FUNCTION(execGetAllTopLeftItemSlotList); \
	DECLARE_FUNCTION(execGetFirstMoveAvailableItemSlot); \
	DECLARE_FUNCTION(execGetItemSlotBySlotType); \
	DECLARE_FUNCTION(execGetItemSlotByIndex); \
	DECLARE_FUNCTION(execGetSize); \
	DECLARE_FUNCTION(execGetItemSlotList); \
	DECLARE_FUNCTION(execGetItemSlotContainerType); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetOuter); \
	DECLARE_FUNCTION(execGetOwnerComponent);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_CALLBACK_WRAPPERS
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemSlotContainerBase(); \
	friend struct Z_Construct_UClass_UItemSlotContainerBase_Statics; \
public: \
	DECLARE_CLASS(UItemSlotContainerBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemSlotContainerBase)


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemSlotContainerBase(UItemSlotContainerBase&&); \
	UItemSlotContainerBase(const UItemSlotContainerBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemSlotContainerBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemSlotContainerBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemSlotContainerBase) \
	NO_API virtual ~UItemSlotContainerBase();


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_15_PROLOG
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_CALLBACK_WRAPPERS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UItemSlotContainerBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
