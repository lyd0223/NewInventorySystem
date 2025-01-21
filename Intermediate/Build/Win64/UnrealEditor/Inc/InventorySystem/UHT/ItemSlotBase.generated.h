// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemSlotBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UItemObject;
class UItemSlotBase;
class UItemSlotContainerComponent;
enum class EItemSlotContainerType : uint8;
enum class EItemSlotType : uint8;
enum class EItemVariableType : uint8;
struct FItemSlotInfo;
struct FModifyItemData;
#ifdef INVENTORYSYSTEM_ItemSlotBase_generated_h
#error "ItemSlotBase.generated.h already included, missing '#pragma once' in ItemSlotBase.h"
#endif
#define INVENTORYSYSTEM_ItemSlotBase_generated_h

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_108_DELEGATE \
static void FDelegate_OnItemObjectChanged_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnItemObjectChanged, UItemSlotBase* ChangedItemSlot, UItemObject* PrevItemObject, UItemObject* NextItemObject);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_112_DELEGATE \
static void FDelegate_OnItemVariableChanged_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnItemVariableChanged, UItemSlotBase* SelfItemSlot, UItemObject* ChangedItemObject, EItemVariableType VariableType);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnItemObjectChangedEvent); \
	DECLARE_FUNCTION(execIsSplitAvailable); \
	DECLARE_FUNCTION(execIsMoveAvailableByItemID); \
	DECLARE_FUNCTION(execIsMoveAvailable); \
	DECLARE_FUNCTION(execResetItem); \
	DECLARE_FUNCTION(execSetItem); \
	DECLARE_FUNCTION(execIsTopLeftSlot); \
	DECLARE_FUNCTION(execIsEmptySlot); \
	DECLARE_FUNCTION(execGetSlotIndex); \
	DECLARE_FUNCTION(execExtractItemSlotInfo); \
	DECLARE_FUNCTION(execGetTopContainerType); \
	DECLARE_FUNCTION(execMakeModifyItemData); \
	DECLARE_FUNCTION(execGetItemObject); \
	DECLARE_FUNCTION(execGetItemSlotType); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execGetOwnerComponent);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_CALLBACK_WRAPPERS
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemSlotBase(); \
	friend struct Z_Construct_UClass_UItemSlotBase_Statics; \
public: \
	DECLARE_CLASS(UItemSlotBase, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemSlotBase)


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemSlotBase(UItemSlotBase&&); \
	UItemSlotBase(const UItemSlotBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemSlotBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemSlotBase); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemSlotBase) \
	NO_API virtual ~UItemSlotBase();


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_15_PROLOG
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_CALLBACK_WRAPPERS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UItemSlotBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
