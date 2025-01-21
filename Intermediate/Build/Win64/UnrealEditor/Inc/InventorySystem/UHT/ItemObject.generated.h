// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "ItemObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UItemObject;
class UItemSlotContainerBase;
class UItemSlotContainerComponent;
class UObject;
struct FGameplayTag;
struct FItemStruct;
#ifdef INVENTORYSYSTEM_ItemObject_generated_h
#error "ItemObject.generated.h already included, missing '#pragma once' in ItemObject.h"
#endif
#define INVENTORYSYSTEM_ItemObject_generated_h

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execMakeItemStruct); \
	DECLARE_FUNCTION(execHasItemObjectAsParent); \
	DECLARE_FUNCTION(execGetParentItemObject); \
	DECLARE_FUNCTION(execGetItemSlotContainer); \
	DECLARE_FUNCTION(execGetItemCount); \
	DECLARE_FUNCTION(execGetItemID); \
	DECLARE_FUNCTION(execGetItemType); \
	DECLARE_FUNCTION(execGetItemUID); \
	DECLARE_FUNCTION(execSetData); \
	DECLARE_FUNCTION(execInitialize); \
	DECLARE_FUNCTION(execSetOuter); \
	DECLARE_FUNCTION(execGetOwnerComponent);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_CALLBACK_WRAPPERS
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUItemObject(); \
	friend struct Z_Construct_UClass_UItemObject_Statics; \
public: \
	DECLARE_CLASS(UItemObject, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UItemObject)


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UItemObject(UItemObject&&); \
	UItemObject(const UItemObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UItemObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UItemObject); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UItemObject) \
	NO_API virtual ~UItemObject();


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_15_PROLOG
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_CALLBACK_WRAPPERS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_INCLASS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UItemObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
