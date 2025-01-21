// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/InventoryComponent.h"
#include "InventorySystem/Public/InventoryEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeInventoryComponent() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UInventoryComponent_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotBase_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemModifyType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemVariableType();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemSlotMessage();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemVariableMessage();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMoveItemMessage();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Delegate FDelegate_Noparam
struct Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Delegate_Noparam__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInventoryComponent::FDelegate_Noparam_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Noparam)
{
	Delegate_Noparam.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FDelegate_Noparam

// Begin Delegate FDelegate_Oneparam
struct Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics
{
	struct InventoryComponent_eventDelegate_Oneparam_Parms
	{
		UItemObject* InItemObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDelegate_Oneparam_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::NewProp_InItemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Delegate_Oneparam__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::InventoryComponent_eventDelegate_Oneparam_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::InventoryComponent_eventDelegate_Oneparam_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInventoryComponent::FDelegate_Oneparam_DelegateWrapper(const FMulticastScriptDelegate& Delegate_Oneparam, UItemObject* InItemObject)
{
	struct InventoryComponent_eventDelegate_Oneparam_Parms
	{
		UItemObject* InItemObject;
	};
	InventoryComponent_eventDelegate_Oneparam_Parms Parms;
	Parms.InItemObject=InItemObject;
	Delegate_Oneparam.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDelegate_Oneparam

// Begin Delegate FDelegate_OnClientItemModified
struct Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics
{
	struct InventoryComponent_eventDelegate_OnClientItemModified_Parms
	{
		EItemModifyType InItemModifyType;
		UItemObject* InItemObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InItemModifyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemModifyType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemModifyType = { "InItemModifyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDelegate_OnClientItemModified_Parms, InItemModifyType), Z_Construct_UEnum_InventorySystem_EItemModifyType, METADATA_PARAMS(0, nullptr) }; // 2704755389
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventDelegate_OnClientItemModified_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemModifyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemModifyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::NewProp_InItemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Delegate_OnClientItemModified__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::InventoryComponent_eventDelegate_OnClientItemModified_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::InventoryComponent_eventDelegate_OnClientItemModified_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UInventoryComponent::FDelegate_OnClientItemModified_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnClientItemModified, EItemModifyType InItemModifyType, UItemObject* InItemObject)
{
	struct InventoryComponent_eventDelegate_OnClientItemModified_Parms
	{
		EItemModifyType InItemModifyType;
		UItemObject* InItemObject;
	};
	InventoryComponent_eventDelegate_OnClientItemModified_Parms Parms;
	Parms.InItemModifyType=InItemModifyType;
	Parms.InItemObject=InItemObject;
	Delegate_OnClientItemModified.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDelegate_OnClientItemModified

// Begin Class UInventoryComponent Function CheckItemPickUpAvailable
struct Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics
{
	struct InventoryComponent_eventCheckItemPickUpAvailable_Parms
	{
		int32 InItemID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Check" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xbc\xc5\xa9." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InItemID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventCheckItemPickUpAvailable_Parms, InItemID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventCheckItemPickUpAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventCheckItemPickUpAvailable_Parms), &Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_InItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "CheckItemPickUpAvailable", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::InventoryComponent_eventCheckItemPickUpAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::InventoryComponent_eventCheckItemPickUpAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execCheckItemPickUpAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckItemPickUpAvailable(Z_Param_InItemID);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function CheckItemPickUpAvailable

// Begin Class UInventoryComponent Function GetItemSlotBySlotInfo
struct Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics
{
	struct InventoryComponent_eventGetItemSlotBySlotInfo_Parms
	{
		FItemSlotInfo InItemSlotInfo;
		UItemSlotBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "Category", "InventoryComponent|GameServer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// RPC\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd InItemSlotInfo\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd InItemSlotInfo\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InItemSlotInfo_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InItemSlotInfo;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::NewProp_InItemSlotInfo = { "InItemSlotInfo", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemSlotBySlotInfo_Parms, InItemSlotInfo), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InItemSlotInfo_MetaData), NewProp_InItemSlotInfo_MetaData) }; // 643725478
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetItemSlotBySlotInfo_Parms, ReturnValue), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::NewProp_InItemSlotInfo,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetItemSlotBySlotInfo", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::InventoryComponent_eventGetItemSlotBySlotInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::InventoryComponent_eventGetItemSlotBySlotInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetItemSlotBySlotInfo)
{
	P_GET_STRUCT_REF(FItemSlotInfo,Z_Param_Out_InItemSlotInfo);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotBase**)Z_Param__Result=P_THIS->GetItemSlotBySlotInfo(Z_Param_Out_InItemSlotInfo);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetItemSlotBySlotInfo

// Begin Class UInventoryComponent Function GetOwnerPC
struct Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics
{
	struct InventoryComponent_eventGetOwnerPC_Parms
	{
		APlayerController* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Getter/Setter" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventGetOwnerPC_Parms, ReturnValue), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "GetOwnerPC", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::InventoryComponent_eventGetOwnerPC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::InventoryComponent_eventGetOwnerPC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_GetOwnerPC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_GetOwnerPC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execGetOwnerPC)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(APlayerController**)Z_Param__Result=P_THIS->GetOwnerPC();
	P_NATIVE_END;
}
// End Class UInventoryComponent Function GetOwnerPC

// Begin Class UInventoryComponent Function ModifyItemSlot_Inside
struct Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics
{
	struct InventoryComponent_eventModifyItemSlot_Inside_Parms
	{
		EItemModifyType InItemModifyType;
		UItemSlotBase* InItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Dedi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InItemModifyType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemModifyType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemModifyType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemModifyType = { "InItemModifyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventModifyItemSlot_Inside_Parms, InItemModifyType), Z_Construct_UEnum_InventorySystem_EItemModifyType, METADATA_PARAMS(0, nullptr) }; // 2704755389
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemSlot = { "InItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventModifyItemSlot_Inside_Parms, InItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemModifyType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemModifyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::NewProp_InItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ModifyItemSlot_Inside", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::InventoryComponent_eventModifyItemSlot_Inside_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::InventoryComponent_eventModifyItemSlot_Inside_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execModifyItemSlot_Inside)
{
	P_GET_ENUM(EItemModifyType,Z_Param_InItemModifyType);
	P_GET_OBJECT(UItemSlotBase,Z_Param_InItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyItemSlot_Inside(EItemModifyType(Z_Param_InItemModifyType),Z_Param_InItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function ModifyItemSlot_Inside

// Begin Class UInventoryComponent Function ModifyItemVariable
struct Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics
{
	struct InventoryComponent_eventModifyItemVariable_Parms
	{
		UItemObject* InItemObject;
		EItemVariableType InItemVariableType;
		bool Reliable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Dedi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n// @param Reliable RPC Reliable \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "CPP_Default_Reliable", "true" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n@param Reliable RPC Reliable \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InItemVariableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemVariableType;
	static void NewProp_Reliable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Reliable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventModifyItemVariable_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemVariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemVariableType = { "InItemVariableType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventModifyItemVariable_Parms, InItemVariableType), Z_Construct_UEnum_InventorySystem_EItemVariableType, METADATA_PARAMS(0, nullptr) }; // 3302272687
void Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_Reliable_SetBit(void* Obj)
{
	((InventoryComponent_eventModifyItemVariable_Parms*)Obj)->Reliable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_Reliable = { "Reliable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventModifyItemVariable_Parms), &Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_Reliable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemVariableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_InItemVariableType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::NewProp_Reliable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "ModifyItemVariable", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::InventoryComponent_eventModifyItemVariable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::InventoryComponent_eventModifyItemVariable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execModifyItemVariable)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_GET_ENUM(EItemVariableType,Z_Param_InItemVariableType);
	P_GET_UBOOL(Z_Param_Reliable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ModifyItemVariable(Z_Param_InItemObject,EItemVariableType(Z_Param_InItemVariableType),Z_Param_Reliable);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function ModifyItemVariable

// Begin Class UInventoryComponent Function OnRecievedModifyItemSlotMessage
struct Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics
{
	struct InventoryComponent_eventOnRecievedModifyItemSlotMessage_Parms
	{
		FModifyItemSlotMessage Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* OnRecievedModifyItemSlotMessage\n\x09 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb5\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd) ModifyItemData \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnRecievedModifyItemSlotMessage\n       \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb5\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd) ModifyItemData \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb8\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnRecievedModifyItemSlotMessage_Parms, Msg), Z_Construct_UScriptStruct_FModifyItemSlotMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 3267337964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRecievedModifyItemSlotMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::InventoryComponent_eventOnRecievedModifyItemSlotMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::InventoryComponent_eventOnRecievedModifyItemSlotMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRecievedModifyItemSlotMessage)
{
	P_GET_STRUCT_REF(FModifyItemSlotMessage,Z_Param_Out_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecievedModifyItemSlotMessage(Z_Param_Out_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function OnRecievedModifyItemSlotMessage

// Begin Class UInventoryComponent Function OnRecievedModifyItemVariableMessage
struct Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics
{
	struct InventoryComponent_eventOnRecievedModifyItemVariableMessage_Parms
	{
		FModifyItemVariableMessage Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* OnRecievedModifyItemVariableMessage\n\x09 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Variable(Count, Weight, Durability \xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n\x09 OnRecievedModifyItemSlotMessage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb1\xef\xbf\xbd\xe2\xb6\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnRecievedModifyItemVariableMessage\n       \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Variable(Count, Weight, Durability \xef\xbf\xbd\xef\xbf\xbd)\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n       OnRecievedModifyItemSlotMessage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd8\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcd\xb6\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd1\xb1\xef\xbf\xbd\xe2\xb6\xa7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xd1\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb0\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnRecievedModifyItemVariableMessage_Parms, Msg), Z_Construct_UScriptStruct_FModifyItemVariableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 1746086115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRecievedModifyItemVariableMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::InventoryComponent_eventOnRecievedModifyItemVariableMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::InventoryComponent_eventOnRecievedModifyItemVariableMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRecievedModifyItemVariableMessage)
{
	P_GET_STRUCT_REF(FModifyItemVariableMessage,Z_Param_Out_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecievedModifyItemVariableMessage(Z_Param_Out_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function OnRecievedModifyItemVariableMessage

// Begin Class UInventoryComponent Function OnRecievedMoveItemMessage
struct Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics
{
	struct InventoryComponent_eventOnRecievedMoveItemMessage_Parms
	{
		FMoveItemMessage Msg;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* OnRecievedMoveItemMessage\n\x09* \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "OnRecievedMoveItemMessage\n      * \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventOnRecievedMoveItemMessage_Parms, Msg), Z_Construct_UScriptStruct_FMoveItemMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 1752974337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "OnRecievedMoveItemMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::InventoryComponent_eventOnRecievedMoveItemMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04480409, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::InventoryComponent_eventOnRecievedMoveItemMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execOnRecievedMoveItemMessage)
{
	P_GET_STRUCT_REF(FMoveItemMessage,Z_Param_Out_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRecievedMoveItemMessage(Z_Param_Out_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function OnRecievedMoveItemMessage

// Begin Class UInventoryComponent Function PickUpItem
struct Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics
{
	struct InventoryComponent_eventPickUpItem_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Dedi" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdd\xb1\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventPickUpItem_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((InventoryComponent_eventPickUpItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(InventoryComponent_eventPickUpItem_Parms), &Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "PickUpItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::InventoryComponent_eventPickUpItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::InventoryComponent_eventPickUpItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_PickUpItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_PickUpItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execPickUpItem)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->PickUpItem(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function PickUpItem

// Begin Class UInventoryComponent Function Request_AutoMoveItem
struct Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics
{
	struct InventoryComponent_eventRequest_AutoMoveItem_Parms
	{
		UItemSlotBase* InItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AutoMoveItem(\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xf3\xbd\xbd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AutoMoveItem(\xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xf3\xbd\xbd\xb7\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd) \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::NewProp_InItemSlot = { "InItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_AutoMoveItem_Parms, InItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::NewProp_InItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_AutoMoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::InventoryComponent_eventRequest_AutoMoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::InventoryComponent_eventRequest_AutoMoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_AutoMoveItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_InItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_AutoMoveItem(Z_Param_InItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_AutoMoveItem

// Begin Class UInventoryComponent Function Request_DropItem
struct Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics
{
	struct InventoryComponent_eventRequest_DropItem_Parms
	{
		UItemSlotBase* DropItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Drop \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Drop \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DropItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::NewProp_DropItemSlot = { "DropItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_DropItem_Parms, DropItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::NewProp_DropItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_DropItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::InventoryComponent_eventRequest_DropItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::InventoryComponent_eventRequest_DropItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_DropItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_DropItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_DropItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_DropItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_DropItem(Z_Param_DropItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_DropItem

// Begin Class UInventoryComponent Function Request_EquipItem
struct Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics
{
	struct InventoryComponent_eventRequest_EquipItem_Parms
	{
		UItemSlotBase* InItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Equip \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Equip \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::NewProp_InItemSlot = { "InItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_EquipItem_Parms, InItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::NewProp_InItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_EquipItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::InventoryComponent_eventRequest_EquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::InventoryComponent_eventRequest_EquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_EquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_EquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_EquipItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_InItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_EquipItem(Z_Param_InItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_EquipItem

// Begin Class UInventoryComponent Function Request_MergeItem
struct Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics
{
	struct InventoryComponent_eventRequest_MergeItem_Parms
	{
		UItemSlotBase* FromItemSlot;
		UItemSlotBase* ToItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Merge \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Merge \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::NewProp_FromItemSlot = { "FromItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_MergeItem_Parms, FromItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::NewProp_ToItemSlot = { "ToItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_MergeItem_Parms, ToItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::NewProp_FromItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::NewProp_ToItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_MergeItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::InventoryComponent_eventRequest_MergeItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::InventoryComponent_eventRequest_MergeItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_MergeItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_MergeItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_MergeItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_FromItemSlot);
	P_GET_OBJECT(UItemSlotBase,Z_Param_ToItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_MergeItem(Z_Param_FromItemSlot,Z_Param_ToItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_MergeItem

// Begin Class UInventoryComponent Function Request_MoveItem
struct Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics
{
	struct InventoryComponent_eventRequest_MoveItem_Parms
	{
		UItemSlotBase* FromItemSlot;
		UItemSlotBase* ToItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Swap \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Swap \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::NewProp_FromItemSlot = { "FromItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_MoveItem_Parms, FromItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::NewProp_ToItemSlot = { "ToItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_MoveItem_Parms, ToItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::NewProp_FromItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::NewProp_ToItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_MoveItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::InventoryComponent_eventRequest_MoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::InventoryComponent_eventRequest_MoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_MoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_MoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_MoveItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_FromItemSlot);
	P_GET_OBJECT(UItemSlotBase,Z_Param_ToItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_MoveItem(Z_Param_FromItemSlot,Z_Param_ToItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_MoveItem

// Begin Class UInventoryComponent Function Request_PutInItem
struct Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics
{
	struct InventoryComponent_eventRequest_PutInItem_Parms
	{
		UItemSlotBase* FromItemSlot;
		UItemSlotBase* ToItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd PutIn \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd PutIn \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::NewProp_FromItemSlot = { "FromItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_PutInItem_Parms, FromItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::NewProp_ToItemSlot = { "ToItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_PutInItem_Parms, ToItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::NewProp_FromItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::NewProp_ToItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_PutInItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::InventoryComponent_eventRequest_PutInItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::InventoryComponent_eventRequest_PutInItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_PutInItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_PutInItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_PutInItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_FromItemSlot);
	P_GET_OBJECT(UItemSlotBase,Z_Param_ToItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_PutInItem(Z_Param_FromItemSlot,Z_Param_ToItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_PutInItem

// Begin Class UInventoryComponent Function Request_SplitItem
struct Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics
{
	struct InventoryComponent_eventRequest_SplitItem_Parms
	{
		UItemSlotBase* FromItemSlot;
		UItemSlotBase* ToItemSlot;
		int32 InSplitCount;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Split \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Split \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ToItemSlot;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSplitCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_FromItemSlot = { "FromItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_SplitItem_Parms, FromItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_ToItemSlot = { "ToItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_SplitItem_Parms, ToItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_InSplitCount = { "InSplitCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_SplitItem_Parms, InSplitCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_FromItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_ToItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::NewProp_InSplitCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_SplitItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::InventoryComponent_eventRequest_SplitItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::InventoryComponent_eventRequest_SplitItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_SplitItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_SplitItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_SplitItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_FromItemSlot);
	P_GET_OBJECT(UItemSlotBase,Z_Param_ToItemSlot);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSplitCount);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_SplitItem(Z_Param_FromItemSlot,Z_Param_ToItemSlot,Z_Param_InSplitCount);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_SplitItem

// Begin Class UInventoryComponent Function Request_UnEquipItem
struct Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics
{
	struct InventoryComponent_eventRequest_UnEquipItem_Parms
	{
		UItemSlotBase* InItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UnEquip \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UnEquip \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::NewProp_InItemSlot = { "InItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_UnEquipItem_Parms, InItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::NewProp_InItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_UnEquipItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::InventoryComponent_eventRequest_UnEquipItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::InventoryComponent_eventRequest_UnEquipItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_UnEquipItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_InItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_UnEquipItem(Z_Param_InItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_UnEquipItem

// Begin Class UInventoryComponent Function Request_UseItem
struct Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics
{
	struct InventoryComponent_eventRequest_UseItem_Parms
	{
		UItemSlotBase* InItemSlot;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "InventoryComponent|Request" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemUse \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb.\n" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemUse \xef\xbf\xbd\xef\xbf\xbd\xc3\xbb." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemSlot;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::NewProp_InItemSlot = { "InItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventRequest_UseItem_Parms, InItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::NewProp_InItemSlot,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "Request_UseItem", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::InventoryComponent_eventRequest_UseItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::InventoryComponent_eventRequest_UseItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_Request_UseItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_Request_UseItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execRequest_UseItem)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_InItemSlot);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Request_UseItem(Z_Param_InItemSlot);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function Request_UseItem

// Begin Class UInventoryComponent Function SendModifyItemSlotMessage
struct InventoryComponent_eventSendModifyItemSlotMessage_Parms
{
	FModifyItemSlotMessage Msg;
};
static const FName NAME_UInventoryComponent_SendModifyItemSlotMessage = FName(TEXT("SendModifyItemSlotMessage"));
void UInventoryComponent::SendModifyItemSlotMessage(FModifyItemSlotMessage const& Msg)
{
	InventoryComponent_eventSendModifyItemSlotMessage_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_SendModifyItemSlotMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSendModifyItemSlotMessage_Parms, Msg), Z_Construct_UScriptStruct_FModifyItemSlotMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 3267337964
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SendModifyItemSlotMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::PropPointers), sizeof(InventoryComponent_eventSendModifyItemSlotMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventSendModifyItemSlotMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSendModifyItemSlotMessage)
{
	P_GET_STRUCT(FModifyItemSlotMessage,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendModifyItemSlotMessage_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SendModifyItemSlotMessage

// Begin Class UInventoryComponent Function SendModifyItemVariableMessage
struct InventoryComponent_eventSendModifyItemVariableMessage_Parms
{
	FModifyItemVariableMessage Msg;
};
static const FName NAME_UInventoryComponent_SendModifyItemVariableMessage = FName(TEXT("SendModifyItemVariableMessage"));
void UInventoryComponent::SendModifyItemVariableMessage(FModifyItemVariableMessage const& Msg)
{
	InventoryComponent_eventSendModifyItemVariableMessage_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_SendModifyItemVariableMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSendModifyItemVariableMessage_Parms, Msg), Z_Construct_UScriptStruct_FModifyItemVariableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 1746086115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SendModifyItemVariableMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::PropPointers), sizeof(InventoryComponent_eventSendModifyItemVariableMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventSendModifyItemVariableMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSendModifyItemVariableMessage)
{
	P_GET_STRUCT(FModifyItemVariableMessage,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendModifyItemVariableMessage_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SendModifyItemVariableMessage

// Begin Class UInventoryComponent Function SendModifyItemVariableMessage_Unreliable
struct InventoryComponent_eventSendModifyItemVariableMessage_Unreliable_Parms
{
	FModifyItemVariableMessage Msg;
};
static const FName NAME_UInventoryComponent_SendModifyItemVariableMessage_Unreliable = FName(TEXT("SendModifyItemVariableMessage_Unreliable"));
void UInventoryComponent::SendModifyItemVariableMessage_Unreliable(FModifyItemVariableMessage const& Msg)
{
	InventoryComponent_eventSendModifyItemVariableMessage_Unreliable_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_SendModifyItemVariableMessage_Unreliable);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* SendModifyItemVariableMessage_Unreliable\n\x09 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd\xec\xb0\xa1 \xef\xbf\xbd\xd6\xbe\xee\xbc\xad, Unreliable\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd SendModifyItemVariableMessage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09 \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd, Unreliable\xef\xbf\xbd\xcc\xb1\xe2\xbf\xa1 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "SendModifyItemVariableMessage_Unreliable\n       \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xb4\xc2\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xba\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb0\xef\xbf\xbd RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0\xef\xbf\xbd\xec\xb0\xa1 \xef\xbf\xbd\xd6\xbe\xee\xbc\xad, Unreliable\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb3\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n       \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd SendModifyItemVariableMessage\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n       \xef\xbf\xbd\xd9\xb8\xef\xbf\xbd, Unreliable\xef\xbf\xbd\xcc\xb1\xe2\xbf\xa1 \xc5\xac\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xc6\xae \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSendModifyItemVariableMessage_Unreliable_Parms, Msg), Z_Construct_UScriptStruct_FModifyItemVariableMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 1746086115
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SendModifyItemVariableMessage_Unreliable", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::PropPointers), sizeof(InventoryComponent_eventSendModifyItemVariableMessage_Unreliable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080C40, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventSendModifyItemVariableMessage_Unreliable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSendModifyItemVariableMessage_Unreliable)
{
	P_GET_STRUCT(FModifyItemVariableMessage,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendModifyItemVariableMessage_Unreliable_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SendModifyItemVariableMessage_Unreliable

// Begin Class UInventoryComponent Function SendMoveItemMessage
struct InventoryComponent_eventSendMoveItemMessage_Parms
{
	FMoveItemMessage Msg;
};
static const FName NAME_UInventoryComponent_SendMoveItemMessage = FName(TEXT("SendMoveItemMessage"));
void UInventoryComponent::SendMoveItemMessage(FMoveItemMessage const& Msg)
{
	InventoryComponent_eventSendMoveItemMessage_Parms Parms;
	Parms.Msg=Msg;
	UFunction* Func = FindFunctionChecked(NAME_UInventoryComponent_SendMoveItemMessage);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintProtected", "" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010008008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(InventoryComponent_eventSendMoveItemMessage_Parms, Msg), Z_Construct_UScriptStruct_FMoveItemMessage, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) }; // 1752974337
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::NewProp_Msg,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UInventoryComponent, nullptr, "SendMoveItemMessage", nullptr, nullptr, Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::PropPointers), sizeof(InventoryComponent_eventSendMoveItemMessage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x05080CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::Function_MetaDataParams), Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::Function_MetaDataParams) };
static_assert(sizeof(InventoryComponent_eventSendMoveItemMessage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UInventoryComponent::execSendMoveItemMessage)
{
	P_GET_STRUCT(FMoveItemMessage,Z_Param_Msg);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SendMoveItemMessage_Implementation(Z_Param_Msg);
	P_NATIVE_END;
}
// End Class UInventoryComponent Function SendMoveItemMessage

// Begin Class UInventoryComponent
void UInventoryComponent::StaticRegisterNativesUInventoryComponent()
{
	UClass* Class = UInventoryComponent::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CheckItemPickUpAvailable", &UInventoryComponent::execCheckItemPickUpAvailable },
		{ "GetItemSlotBySlotInfo", &UInventoryComponent::execGetItemSlotBySlotInfo },
		{ "GetOwnerPC", &UInventoryComponent::execGetOwnerPC },
		{ "ModifyItemSlot_Inside", &UInventoryComponent::execModifyItemSlot_Inside },
		{ "ModifyItemVariable", &UInventoryComponent::execModifyItemVariable },
		{ "OnRecievedModifyItemSlotMessage", &UInventoryComponent::execOnRecievedModifyItemSlotMessage },
		{ "OnRecievedModifyItemVariableMessage", &UInventoryComponent::execOnRecievedModifyItemVariableMessage },
		{ "OnRecievedMoveItemMessage", &UInventoryComponent::execOnRecievedMoveItemMessage },
		{ "PickUpItem", &UInventoryComponent::execPickUpItem },
		{ "Request_AutoMoveItem", &UInventoryComponent::execRequest_AutoMoveItem },
		{ "Request_DropItem", &UInventoryComponent::execRequest_DropItem },
		{ "Request_EquipItem", &UInventoryComponent::execRequest_EquipItem },
		{ "Request_MergeItem", &UInventoryComponent::execRequest_MergeItem },
		{ "Request_MoveItem", &UInventoryComponent::execRequest_MoveItem },
		{ "Request_PutInItem", &UInventoryComponent::execRequest_PutInItem },
		{ "Request_SplitItem", &UInventoryComponent::execRequest_SplitItem },
		{ "Request_UnEquipItem", &UInventoryComponent::execRequest_UnEquipItem },
		{ "Request_UseItem", &UInventoryComponent::execRequest_UseItem },
		{ "SendModifyItemSlotMessage", &UInventoryComponent::execSendModifyItemSlotMessage },
		{ "SendModifyItemVariableMessage", &UInventoryComponent::execSendModifyItemVariableMessage },
		{ "SendModifyItemVariableMessage_Unreliable", &UInventoryComponent::execSendModifyItemVariableMessage_Unreliable },
		{ "SendMoveItemMessage", &UInventoryComponent::execSendMoveItemMessage },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UInventoryComponent);
UClass* Z_Construct_UClass_UInventoryComponent_NoRegister()
{
	return UInventoryComponent::StaticClass();
}
struct Z_Construct_UClass_UInventoryComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd D-C \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\nCharacter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n*/" },
#endif
		{ "IncludePath", "InventoryComponent.h" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae \xef\xbf\xbd\xc3\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd D-C \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\nCharacter\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryRefreshed_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Inventory \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd UI Refresh \xef\xbf\xbd\xca\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryOpened_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InventoryBaseWidget UI Open \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnInventoryClosed_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InventoryBaseWidget UI Close \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDediItemDropped_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnClientItemModified_MetaData[] = {
		{ "Category", "Event" },
		{ "ModuleRelativePath", "Public/InventoryComponent.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Item\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc8\xad \xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd. \xc5\xac\xef\xbf\xbd\xef\xbf\xbd \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryRefreshed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryOpened;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnInventoryClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDediItemDropped;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnClientItemModified;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UInventoryComponent_CheckItemPickUpAvailable, "CheckItemPickUpAvailable" }, // 3585633380
		{ &Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature, "Delegate_Noparam__DelegateSignature" }, // 3811203653
		{ &Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature, "Delegate_OnClientItemModified__DelegateSignature" }, // 1588040543
		{ &Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature, "Delegate_Oneparam__DelegateSignature" }, // 2093867143
		{ &Z_Construct_UFunction_UInventoryComponent_GetItemSlotBySlotInfo, "GetItemSlotBySlotInfo" }, // 4253921027
		{ &Z_Construct_UFunction_UInventoryComponent_GetOwnerPC, "GetOwnerPC" }, // 145598178
		{ &Z_Construct_UFunction_UInventoryComponent_ModifyItemSlot_Inside, "ModifyItemSlot_Inside" }, // 479126485
		{ &Z_Construct_UFunction_UInventoryComponent_ModifyItemVariable, "ModifyItemVariable" }, // 862045834
		{ &Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemSlotMessage, "OnRecievedModifyItemSlotMessage" }, // 3983741150
		{ &Z_Construct_UFunction_UInventoryComponent_OnRecievedModifyItemVariableMessage, "OnRecievedModifyItemVariableMessage" }, // 3154429376
		{ &Z_Construct_UFunction_UInventoryComponent_OnRecievedMoveItemMessage, "OnRecievedMoveItemMessage" }, // 2856579207
		{ &Z_Construct_UFunction_UInventoryComponent_PickUpItem, "PickUpItem" }, // 660515566
		{ &Z_Construct_UFunction_UInventoryComponent_Request_AutoMoveItem, "Request_AutoMoveItem" }, // 2143899195
		{ &Z_Construct_UFunction_UInventoryComponent_Request_DropItem, "Request_DropItem" }, // 3544808418
		{ &Z_Construct_UFunction_UInventoryComponent_Request_EquipItem, "Request_EquipItem" }, // 985859932
		{ &Z_Construct_UFunction_UInventoryComponent_Request_MergeItem, "Request_MergeItem" }, // 3996636046
		{ &Z_Construct_UFunction_UInventoryComponent_Request_MoveItem, "Request_MoveItem" }, // 1561338141
		{ &Z_Construct_UFunction_UInventoryComponent_Request_PutInItem, "Request_PutInItem" }, // 1734114475
		{ &Z_Construct_UFunction_UInventoryComponent_Request_SplitItem, "Request_SplitItem" }, // 2588010230
		{ &Z_Construct_UFunction_UInventoryComponent_Request_UnEquipItem, "Request_UnEquipItem" }, // 2591057459
		{ &Z_Construct_UFunction_UInventoryComponent_Request_UseItem, "Request_UseItem" }, // 261246840
		{ &Z_Construct_UFunction_UInventoryComponent_SendModifyItemSlotMessage, "SendModifyItemSlotMessage" }, // 2888360333
		{ &Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage, "SendModifyItemVariableMessage" }, // 1396902382
		{ &Z_Construct_UFunction_UInventoryComponent_SendModifyItemVariableMessage_Unreliable, "SendModifyItemVariableMessage_Unreliable" }, // 2039733753
		{ &Z_Construct_UFunction_UInventoryComponent_SendMoveItemMessage, "SendMoveItemMessage" }, // 3755636867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UInventoryComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryRefreshed = { "OnInventoryRefreshed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryRefreshed), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryRefreshed_MetaData), NewProp_OnInventoryRefreshed_MetaData) }; // 3811203653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryOpened = { "OnInventoryOpened", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryOpened), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryOpened_MetaData), NewProp_OnInventoryOpened_MetaData) }; // 3811203653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryClosed = { "OnInventoryClosed", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnInventoryClosed), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Noparam__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnInventoryClosed_MetaData), NewProp_OnInventoryClosed_MetaData) }; // 3811203653
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnDediItemDropped = { "OnDediItemDropped", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnDediItemDropped), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_Oneparam__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDediItemDropped_MetaData), NewProp_OnDediItemDropped_MetaData) }; // 2093867143
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnClientItemModified = { "OnClientItemModified", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UInventoryComponent, OnClientItemModified), Z_Construct_UDelegateFunction_UInventoryComponent_Delegate_OnClientItemModified__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnClientItemModified_MetaData), NewProp_OnClientItemModified_MetaData) }; // 1588040543
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UInventoryComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryRefreshed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryOpened,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnInventoryClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnDediItemDropped,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UInventoryComponent_Statics::NewProp_OnClientItemModified,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UInventoryComponent_Statics::ClassParams = {
	&UInventoryComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UInventoryComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UInventoryComponent_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UInventoryComponent()
{
	if (!Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton, Z_Construct_UClass_UInventoryComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UInventoryComponent.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UInventoryComponent>()
{
	return UInventoryComponent::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UInventoryComponent);
UInventoryComponent::~UInventoryComponent() {}
// End Class UInventoryComponent

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UInventoryComponent, UInventoryComponent::StaticClass, TEXT("UInventoryComponent"), &Z_Registration_Info_UClass_UInventoryComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UInventoryComponent), 137554598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_559760741(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_InventoryComponent_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
