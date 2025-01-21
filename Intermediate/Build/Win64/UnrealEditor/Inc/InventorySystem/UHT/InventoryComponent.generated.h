// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "InventoryComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
class UItemObject;
class UItemSlotBase;
enum class EItemModifyType : uint8;
enum class EItemVariableType : uint8;
struct FItemSlotInfo;
struct FModifyItemSlotMessage;
struct FModifyItemVariableMessage;
struct FMoveItemMessage;
#ifdef INVENTORYSYSTEM_InventoryComponent_generated_h
#error "InventoryComponent.generated.h already included, missing '#pragma once' in InventoryComponent.h"
#endif
#define INVENTORYSYSTEM_InventoryComponent_generated_h

#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_41_DELEGATE \
static void FDelegate_Noparam_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Noparam);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_51_DELEGATE \
static void FDelegate_Oneparam_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Oneparam, UItemObject* InItemObject);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_55_DELEGATE \
static void FDelegate_OnClientItemModified_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnClientItemModified, EItemModifyType InItemModifyType, UItemObject* InItemObject);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequest_AutoMoveItem); \
	DECLARE_FUNCTION(execRequest_UseItem); \
	DECLARE_FUNCTION(execRequest_UnEquipItem); \
	DECLARE_FUNCTION(execRequest_EquipItem); \
	DECLARE_FUNCTION(execRequest_PutInItem); \
	DECLARE_FUNCTION(execRequest_MergeItem); \
	DECLARE_FUNCTION(execRequest_SplitItem); \
	DECLARE_FUNCTION(execRequest_MoveItem); \
	DECLARE_FUNCTION(execRequest_DropItem); \
	DECLARE_FUNCTION(execSendMoveItemMessage); \
	DECLARE_FUNCTION(execSendModifyItemVariableMessage_Unreliable); \
	DECLARE_FUNCTION(execSendModifyItemVariableMessage); \
	DECLARE_FUNCTION(execSendModifyItemSlotMessage); \
	DECLARE_FUNCTION(execOnRecievedMoveItemMessage); \
	DECLARE_FUNCTION(execOnRecievedModifyItemVariableMessage); \
	DECLARE_FUNCTION(execOnRecievedModifyItemSlotMessage); \
	DECLARE_FUNCTION(execGetItemSlotBySlotInfo); \
	DECLARE_FUNCTION(execModifyItemVariable); \
	DECLARE_FUNCTION(execModifyItemSlot_Inside); \
	DECLARE_FUNCTION(execCheckItemPickUpAvailable); \
	DECLARE_FUNCTION(execPickUpItem); \
	DECLARE_FUNCTION(execGetOwnerPC);


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_CALLBACK_WRAPPERS
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUInventoryComponent(); \
	friend struct Z_Construct_UClass_UInventoryComponent_Statics; \
public: \
	DECLARE_CLASS(UInventoryComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/InventorySystem"), NO_API) \
	DECLARE_SERIALIZER(UInventoryComponent)


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UInventoryComponent(UInventoryComponent&&); \
	UInventoryComponent(const UInventoryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UInventoryComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UInventoryComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UInventoryComponent) \
	NO_API virtual ~UInventoryComponent();


#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_16_PROLOG
#define FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_CALLBACK_WRAPPERS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_INCLASS_NO_PURE_DECLS \
	FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> INVENTORYSYSTEM_API UClass* StaticClass<class UInventoryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
