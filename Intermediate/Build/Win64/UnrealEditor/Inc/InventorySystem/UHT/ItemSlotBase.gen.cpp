// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemSlotBase.h"
#include "InventorySystem/Public/InventoryEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSlotBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotContainerType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemVariableType();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature();
INVENTORYSYSTEM_API UFunction* Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemSlotInfo();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FModifyItemData();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Delegate FDelegate_OnItemObjectChanged
struct Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics
{
	struct ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms
	{
		UItemSlotBase* ChangedItemSlot;
		UItemObject* PrevItemObject;
		UItemObject* NextItemObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevItemObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextItemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_ChangedItemSlot = { "ChangedItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms, ChangedItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_PrevItemObject = { "PrevItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms, PrevItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_NextItemObject = { "NextItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms, NextItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_ChangedItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_PrevItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::NewProp_NextItemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "Delegate_OnItemObjectChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemSlotBase::FDelegate_OnItemObjectChanged_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnItemObjectChanged, UItemSlotBase* ChangedItemSlot, UItemObject* PrevItemObject, UItemObject* NextItemObject)
{
	struct ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms
	{
		UItemSlotBase* ChangedItemSlot;
		UItemObject* PrevItemObject;
		UItemObject* NextItemObject;
	};
	ItemSlotBase_eventDelegate_OnItemObjectChanged_Parms Parms;
	Parms.ChangedItemSlot=ChangedItemSlot;
	Parms.PrevItemObject=PrevItemObject;
	Parms.NextItemObject=NextItemObject;
	Delegate_OnItemObjectChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDelegate_OnItemObjectChanged

// Begin Delegate FDelegate_OnItemVariableChanged
struct Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics
{
	struct ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms
	{
		UItemSlotBase* SelfItemSlot;
		UItemObject* ChangedItemObject;
		EItemVariableType VariableType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedItemObject;
	static const UECodeGen_Private::FBytePropertyParams NewProp_VariableType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_VariableType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_SelfItemSlot = { "SelfItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms, SelfItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_ChangedItemObject = { "ChangedItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms, ChangedItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_VariableType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_VariableType = { "VariableType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms, VariableType), Z_Construct_UEnum_InventorySystem_EItemVariableType, METADATA_PARAMS(0, nullptr) }; // 3302272687
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_SelfItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_ChangedItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_VariableType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::NewProp_VariableType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "Delegate_OnItemVariableChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void UItemSlotBase::FDelegate_OnItemVariableChanged_DelegateWrapper(const FMulticastScriptDelegate& Delegate_OnItemVariableChanged, UItemSlotBase* SelfItemSlot, UItemObject* ChangedItemObject, EItemVariableType VariableType)
{
	struct ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms
	{
		UItemSlotBase* SelfItemSlot;
		UItemObject* ChangedItemObject;
		EItemVariableType VariableType;
	};
	ItemSlotBase_eventDelegate_OnItemVariableChanged_Parms Parms;
	Parms.SelfItemSlot=SelfItemSlot;
	Parms.ChangedItemObject=ChangedItemObject;
	Parms.VariableType=VariableType;
	Delegate_OnItemVariableChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDelegate_OnItemVariableChanged

// Begin Class UItemSlotBase Function ExtractItemSlotInfo
struct Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics
{
	struct ItemSlotBase_eventExtractItemSlotInfo_Parms
	{
		FItemSlotInfo ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemObject|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventExtractItemSlotInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemSlotInfo, METADATA_PARAMS(0, nullptr) }; // 643725478
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "ExtractItemSlotInfo", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::ItemSlotBase_eventExtractItemSlotInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::ItemSlotBase_eventExtractItemSlotInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execExtractItemSlotInfo)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemSlotInfo*)Z_Param__Result=P_THIS->ExtractItemSlotInfo();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function ExtractItemSlotInfo

// Begin Class UItemSlotBase Function GetItemObject
struct Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics
{
	struct ItemSlotBase_eventGetItemObject_Parms
	{
		UItemObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventGetItemObject_Parms, ReturnValue), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "GetItemObject", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::ItemSlotBase_eventGetItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::ItemSlotBase_eventGetItemObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_GetItemObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_GetItemObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execGetItemObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemObject**)Z_Param__Result=P_THIS->GetItemObject();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function GetItemObject

// Begin Class UItemSlotBase Function GetItemSlotType
struct Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics
{
	struct ItemSlotBase_eventGetItemSlotType_Parms
	{
		EItemSlotType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventGetItemSlotType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EItemSlotType, METADATA_PARAMS(0, nullptr) }; // 2549424163
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "GetItemSlotType", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::ItemSlotBase_eventGetItemSlotType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::ItemSlotBase_eventGetItemSlotType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_GetItemSlotType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_GetItemSlotType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execGetItemSlotType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EItemSlotType*)Z_Param__Result=P_THIS->GetItemSlotType();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function GetItemSlotType

// Begin Class UItemSlotBase Function GetOwnerComponent
struct Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics
{
	struct ItemSlotBase_eventGetOwnerComponent_Parms
	{
		UItemSlotContainerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Owner ActorComponent(ItemSlotContainerComponent) \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Owner ActorComponent(ItemSlotContainerComponent) \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UItemSlotContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::ItemSlotBase_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::ItemSlotBase_eventGetOwnerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execGetOwnerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotContainerComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function GetOwnerComponent

// Begin Class UItemSlotBase Function GetSlotIndex
struct Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics
{
	struct ItemSlotBase_eventGetSlotIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventGetSlotIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "GetSlotIndex", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::ItemSlotBase_eventGetSlotIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::ItemSlotBase_eventGetSlotIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_GetSlotIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_GetSlotIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execGetSlotIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetSlotIndex();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function GetSlotIndex

// Begin Class UItemSlotBase Function GetTopContainerType
struct Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics
{
	struct ItemSlotBase_eventGetTopContainerType_Parms
	{
		EItemSlotContainerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemObject|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xd6\xbb\xef\xbf\xbd\xef\xbf\xbd Container\xef\xbf\xbd\xef\xbf\xbd Type \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventGetTopContainerType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(0, nullptr) }; // 3642467615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "GetTopContainerType", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::ItemSlotBase_eventGetTopContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::ItemSlotBase_eventGetTopContainerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_GetTopContainerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_GetTopContainerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execGetTopContainerType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EItemSlotContainerType*)Z_Param__Result=P_THIS->GetTopContainerType();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function GetTopContainerType

// Begin Class UItemSlotBase Function Initialize
static const FName NAME_UItemSlotBase_Initialize = FName(TEXT("Initialize"));
void UItemSlotBase::Initialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotBase_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Initialize_Implementation();
	}
}
struct Z_Construct_UFunction_UItemSlotBase_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemSlotBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function Initialize

// Begin Class UItemSlotBase Function IsEmptySlot
struct Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics
{
	struct ItemSlotBase_eventIsEmptySlot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd false \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotBase_eventIsEmptySlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventIsEmptySlot_Parms), &Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "IsEmptySlot", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::ItemSlotBase_eventIsEmptySlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::ItemSlotBase_eventIsEmptySlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_IsEmptySlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_IsEmptySlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execIsEmptySlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsEmptySlot();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function IsEmptySlot

// Begin Class UItemSlotBase Function IsMoveAvailable
struct Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics
{
	struct ItemSlotBase_eventIsMoveAvailable_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//this\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Move \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Move \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventIsMoveAvailable_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotBase_eventIsMoveAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventIsMoveAvailable_Parms), &Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "IsMoveAvailable", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::ItemSlotBase_eventIsMoveAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::ItemSlotBase_eventIsMoveAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execIsMoveAvailable)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoveAvailable(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function IsMoveAvailable

// Begin Class UItemSlotBase Function IsMoveAvailableByItemID
struct Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics
{
	struct ItemSlotBase_eventIsMoveAvailableByItemID_Parms
	{
		int32 InItemID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//this\xef\xbf\xbd\xef\xbf\xbd InItemID\xef\xbf\xbd\xef\xbf\xbd Move \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this\xef\xbf\xbd\xef\xbf\xbd InItemID\xef\xbf\xbd\xef\xbf\xbd Move \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InItemID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventIsMoveAvailableByItemID_Parms, InItemID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotBase_eventIsMoveAvailableByItemID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventIsMoveAvailableByItemID_Parms), &Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_InItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "IsMoveAvailableByItemID", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::ItemSlotBase_eventIsMoveAvailableByItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::ItemSlotBase_eventIsMoveAvailableByItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execIsMoveAvailableByItemID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsMoveAvailableByItemID(Z_Param_InItemID);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function IsMoveAvailableByItemID

// Begin Class UItemSlotBase Function IsSplitAvailable
struct Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics
{
	struct ItemSlotBase_eventIsSplitAvailable_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//this\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Split \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "this\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Split \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventIsSplitAvailable_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotBase_eventIsSplitAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventIsSplitAvailable_Parms), &Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "IsSplitAvailable", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::ItemSlotBase_eventIsSplitAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::ItemSlotBase_eventIsSplitAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execIsSplitAvailable)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSplitAvailable(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function IsSplitAvailable

// Begin Class UItemSlotBase Function IsTopLeftSlot
struct Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics
{
	struct ItemSlotBase_eventIsTopLeftSlot_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotBase_eventIsTopLeftSlot_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventIsTopLeftSlot_Parms), &Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "IsTopLeftSlot", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::ItemSlotBase_eventIsTopLeftSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::ItemSlotBase_eventIsTopLeftSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execIsTopLeftSlot)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsTopLeftSlot();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function IsTopLeftSlot

// Begin Class UItemSlotBase Function MakeModifyItemData
struct Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics
{
	struct ItemSlotBase_eventMakeModifyItemData_Parms
	{
		AActor* InPlayerActor;
		FModifyItemData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "RPC\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. InPlayerActor\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xc3\xb7\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemStruct\xef\xbf\xbd\xe2\xba\xbb\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InPlayerActor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::NewProp_InPlayerActor = { "InPlayerActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventMakeModifyItemData_Parms, InPlayerActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventMakeModifyItemData_Parms, ReturnValue), Z_Construct_UScriptStruct_FModifyItemData, METADATA_PARAMS(0, nullptr) }; // 1359201092
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::NewProp_InPlayerActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "MakeModifyItemData", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::ItemSlotBase_eventMakeModifyItemData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020405, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::ItemSlotBase_eventMakeModifyItemData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execMakeModifyItemData)
{
	P_GET_OBJECT(AActor,Z_Param_InPlayerActor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FModifyItemData*)Z_Param__Result=P_THIS->MakeModifyItemData(Z_Param_InPlayerActor);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function MakeModifyItemData

// Begin Class UItemSlotBase Function OnItemObjectChangedEvent
struct Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics
{
	struct ItemSlotBase_eventOnItemObjectChangedEvent_Parms
	{
		UItemSlotBase* ChangedItemSlot;
		UItemObject* PrevItemObject;
		UItemObject* NextItemObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChangedItemSlot;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_PrevItemObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NextItemObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_ChangedItemSlot = { "ChangedItemSlot", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventOnItemObjectChangedEvent_Parms, ChangedItemSlot), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_PrevItemObject = { "PrevItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventOnItemObjectChangedEvent_Parms, PrevItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_NextItemObject = { "NextItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventOnItemObjectChangedEvent_Parms, NextItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_ChangedItemSlot,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_PrevItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::NewProp_NextItemObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "OnItemObjectChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::ItemSlotBase_eventOnItemObjectChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::ItemSlotBase_eventOnItemObjectChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execOnItemObjectChangedEvent)
{
	P_GET_OBJECT(UItemSlotBase,Z_Param_ChangedItemSlot);
	P_GET_OBJECT(UItemObject,Z_Param_PrevItemObject);
	P_GET_OBJECT(UItemObject,Z_Param_NextItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnItemObjectChangedEvent(Z_Param_ChangedItemSlot,Z_Param_PrevItemObject,Z_Param_NextItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function OnItemObjectChangedEvent

// Begin Class UItemSlotBase Function ResetItem
struct Z_Construct_UFunction_UItemSlotBase_ResetItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|SetItem" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_ResetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "ResetItem", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_ResetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_ResetItem_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemSlotBase_ResetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_ResetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execResetItem)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetItem();
	P_NATIVE_END;
}
// End Class UItemSlotBase Function ResetItem

// Begin Class UItemSlotBase Function SetData
struct ItemSlotBase_eventSetData_Parms
{
	EItemSlotType InItemSlotType;
	int32 InSlotIndex;
};
static const FName NAME_UItemSlotBase_SetData = FName(TEXT("SetData"));
void UItemSlotBase::SetData(EItemSlotType InItemSlotType, int32 InSlotIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotBase_SetData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotBase_eventSetData_Parms Parms;
		Parms.InItemSlotType=InItemSlotType;
		Parms.InSlotIndex=InSlotIndex;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetData_Implementation(InItemSlotType, InSlotIndex);
	}
}
struct Z_Construct_UFunction_UItemSlotBase_SetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InItemSlotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemSlotType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InSlotIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InItemSlotType = { "InItemSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventSetData_Parms, InItemSlotType), Z_Construct_UEnum_InventorySystem_EItemSlotType, METADATA_PARAMS(0, nullptr) }; // 2549424163
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InSlotIndex = { "InSlotIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventSetData_Parms, InSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InItemSlotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InItemSlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetData_Statics::NewProp_InSlotIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetData_Statics::PropPointers), sizeof(ItemSlotBase_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotBase_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execSetData)
{
	P_GET_ENUM(EItemSlotType,Z_Param_InItemSlotType);
	P_GET_PROPERTY(FIntProperty,Z_Param_InSlotIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData_Implementation(EItemSlotType(Z_Param_InItemSlotType),Z_Param_InSlotIndex);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function SetData

// Begin Class UItemSlotBase Function SetItem
struct Z_Construct_UFunction_UItemSlotBase_SetItem_Statics
{
	struct ItemSlotBase_eventSetItem_Parms
	{
		UItemObject* InItemObject;
		bool InIsTopLeft;
		bool SetOuterFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotBase|SetItem" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* \n\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb2\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd, \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd null \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ResetItem() \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xcf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Outer\xef\xbf\xbd\xef\xbf\xbd this\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09SetOuterFlag : Outer \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\x09*/" },
#endif
		{ "CPP_Default_SetOuterFlag", "true" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb2\xd9\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xce\xb5\xef\xbf\xbd, \xef\xbf\xbd\xca\xb1\xef\xbf\xbd\xc8\xad\xef\xbf\xbd\xef\xbf\xbd\xc5\xb3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd null \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ResetItem() \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xcf\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xda\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd Outer\xef\xbf\xbd\xef\xbf\xbd this\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\nSetOuterFlag : Outer \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_InIsTopLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_InIsTopLeft;
	static void NewProp_SetOuterFlag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_SetOuterFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotBase_eventSetItem_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InIsTopLeft_SetBit(void* Obj)
{
	((ItemSlotBase_eventSetItem_Parms*)Obj)->InIsTopLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InIsTopLeft = { "InIsTopLeft", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventSetItem_Parms), &Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InIsTopLeft_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_SetOuterFlag_SetBit(void* Obj)
{
	((ItemSlotBase_eventSetItem_Parms*)Obj)->SetOuterFlag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_SetOuterFlag = { "SetOuterFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotBase_eventSetItem_Parms), &Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_SetOuterFlag_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_InIsTopLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::NewProp_SetOuterFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotBase, nullptr, "SetItem", nullptr, nullptr, Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::ItemSlotBase_eventSetItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::ItemSlotBase_eventSetItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotBase_SetItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotBase_SetItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotBase::execSetItem)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_GET_UBOOL(Z_Param_InIsTopLeft);
	P_GET_UBOOL(Z_Param_SetOuterFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetItem(Z_Param_InItemObject,Z_Param_InIsTopLeft,Z_Param_SetOuterFlag);
	P_NATIVE_END;
}
// End Class UItemSlotBase Function SetItem

// Begin Class UItemSlotBase
void UItemSlotBase::StaticRegisterNativesUItemSlotBase()
{
	UClass* Class = UItemSlotBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ExtractItemSlotInfo", &UItemSlotBase::execExtractItemSlotInfo },
		{ "GetItemObject", &UItemSlotBase::execGetItemObject },
		{ "GetItemSlotType", &UItemSlotBase::execGetItemSlotType },
		{ "GetOwnerComponent", &UItemSlotBase::execGetOwnerComponent },
		{ "GetSlotIndex", &UItemSlotBase::execGetSlotIndex },
		{ "GetTopContainerType", &UItemSlotBase::execGetTopContainerType },
		{ "Initialize", &UItemSlotBase::execInitialize },
		{ "IsEmptySlot", &UItemSlotBase::execIsEmptySlot },
		{ "IsMoveAvailable", &UItemSlotBase::execIsMoveAvailable },
		{ "IsMoveAvailableByItemID", &UItemSlotBase::execIsMoveAvailableByItemID },
		{ "IsSplitAvailable", &UItemSlotBase::execIsSplitAvailable },
		{ "IsTopLeftSlot", &UItemSlotBase::execIsTopLeftSlot },
		{ "MakeModifyItemData", &UItemSlotBase::execMakeModifyItemData },
		{ "OnItemObjectChangedEvent", &UItemSlotBase::execOnItemObjectChangedEvent },
		{ "ResetItem", &UItemSlotBase::execResetItem },
		{ "SetData", &UItemSlotBase::execSetData },
		{ "SetItem", &UItemSlotBase::execSetItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemSlotBase);
UClass* Z_Construct_UClass_UItemSlotBase_NoRegister()
{
	return UItemSlotBase::StaticClass();
}
struct Z_Construct_UClass_UItemSlotBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSlotBase.h" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotType_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotBase" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SlotIndex_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotBase" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb5\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsTopLeft_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotBase" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd TopLeftSlot \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemObject_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotBase" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemObjectChanged_MetaData[] = {
		{ "Category", "ItemSlotBase|Event" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xda\xb7\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc2\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd9\xb2\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnItemVariableChanged_MetaData[] = {
		{ "Category", "ItemSlotBase|Event" },
		{ "ModuleRelativePath", "Public/ItemSlotBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd VariableType\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemSlotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemSlotType;
	static const UECodeGen_Private::FIntPropertyParams NewProp_SlotIndex;
	static void NewProp_IsTopLeft_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsTopLeft;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemObject;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemObjectChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemVariableChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature, "Delegate_OnItemObjectChanged__DelegateSignature" }, // 1498217901
		{ &Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature, "Delegate_OnItemVariableChanged__DelegateSignature" }, // 2933700891
		{ &Z_Construct_UFunction_UItemSlotBase_ExtractItemSlotInfo, "ExtractItemSlotInfo" }, // 1055060883
		{ &Z_Construct_UFunction_UItemSlotBase_GetItemObject, "GetItemObject" }, // 3692658182
		{ &Z_Construct_UFunction_UItemSlotBase_GetItemSlotType, "GetItemSlotType" }, // 2518925579
		{ &Z_Construct_UFunction_UItemSlotBase_GetOwnerComponent, "GetOwnerComponent" }, // 384860957
		{ &Z_Construct_UFunction_UItemSlotBase_GetSlotIndex, "GetSlotIndex" }, // 2094503338
		{ &Z_Construct_UFunction_UItemSlotBase_GetTopContainerType, "GetTopContainerType" }, // 3723800162
		{ &Z_Construct_UFunction_UItemSlotBase_Initialize, "Initialize" }, // 3218877985
		{ &Z_Construct_UFunction_UItemSlotBase_IsEmptySlot, "IsEmptySlot" }, // 1505614176
		{ &Z_Construct_UFunction_UItemSlotBase_IsMoveAvailable, "IsMoveAvailable" }, // 383407966
		{ &Z_Construct_UFunction_UItemSlotBase_IsMoveAvailableByItemID, "IsMoveAvailableByItemID" }, // 1117541666
		{ &Z_Construct_UFunction_UItemSlotBase_IsSplitAvailable, "IsSplitAvailable" }, // 1013486500
		{ &Z_Construct_UFunction_UItemSlotBase_IsTopLeftSlot, "IsTopLeftSlot" }, // 2117972336
		{ &Z_Construct_UFunction_UItemSlotBase_MakeModifyItemData, "MakeModifyItemData" }, // 3983984173
		{ &Z_Construct_UFunction_UItemSlotBase_OnItemObjectChangedEvent, "OnItemObjectChangedEvent" }, // 444563922
		{ &Z_Construct_UFunction_UItemSlotBase_ResetItem, "ResetItem" }, // 1149000897
		{ &Z_Construct_UFunction_UItemSlotBase_SetData, "SetData" }, // 1078821582
		{ &Z_Construct_UFunction_UItemSlotBase_SetItem, "SetItem" }, // 3522537884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSlotBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemSlotType = { "ItemSlotType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotBase, ItemSlotType), Z_Construct_UEnum_InventorySystem_EItemSlotType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotType_MetaData), NewProp_ItemSlotType_MetaData) }; // 2549424163
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_SlotIndex = { "SlotIndex", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotBase, SlotIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SlotIndex_MetaData), NewProp_SlotIndex_MetaData) };
void Z_Construct_UClass_UItemSlotBase_Statics::NewProp_IsTopLeft_SetBit(void* Obj)
{
	((UItemSlotBase*)Obj)->IsTopLeft = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_IsTopLeft = { "IsTopLeft", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UItemSlotBase), &Z_Construct_UClass_UItemSlotBase_Statics::NewProp_IsTopLeft_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsTopLeft_MetaData), NewProp_IsTopLeft_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemObject = { "ItemObject", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotBase, ItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemObject_MetaData), NewProp_ItemObject_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_OnItemObjectChanged = { "OnItemObjectChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotBase, OnItemObjectChanged), Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemObjectChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemObjectChanged_MetaData), NewProp_OnItemObjectChanged_MetaData) }; // 1498217901
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UItemSlotBase_Statics::NewProp_OnItemVariableChanged = { "OnItemVariableChanged", nullptr, (EPropertyFlags)0x0010100010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotBase, OnItemVariableChanged), Z_Construct_UDelegateFunction_UItemSlotBase_Delegate_OnItemVariableChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnItemVariableChanged_MetaData), NewProp_OnItemVariableChanged_MetaData) }; // 2933700891
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSlotBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemSlotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemSlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_SlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_IsTopLeft,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_ItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_OnItemObjectChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotBase_Statics::NewProp_OnItemVariableChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemSlotBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemSlotBase_Statics::ClassParams = {
	&UItemSlotBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemSlotBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotBase_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemSlotBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemSlotBase()
{
	if (!Z_Registration_Info_UClass_UItemSlotBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemSlotBase.OuterSingleton, Z_Construct_UClass_UItemSlotBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemSlotBase.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemSlotBase>()
{
	return UItemSlotBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSlotBase);
UItemSlotBase::~UItemSlotBase() {}
// End Class UItemSlotBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemSlotBase, UItemSlotBase::StaticClass, TEXT("UItemSlotBase"), &Z_Registration_Info_UClass_UItemSlotBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemSlotBase), 745409539U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_2466090803(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
