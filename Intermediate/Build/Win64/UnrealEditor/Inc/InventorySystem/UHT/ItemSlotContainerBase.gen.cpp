// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemSlotContainerBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemSlotContainerBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotContainerType();
INVENTORYSYSTEM_API UEnum* Z_Construct_UEnum_InventorySystem_EItemSlotType();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UItemSlotContainerBase Function AddItem
struct Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics
{
	struct ItemSlotContainerBase_eventAddItem_Parms
	{
		int32 AddedSlotIndex;
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbe\xc6\xbc\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xef\xbf\xbd SlotIndex \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AddItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc3\xa3\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbe\xc6\xbc\xef\xbf\xbd \xef\xbf\xbd\xd6\xbe\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xb5\xef\xbf\xbd SlotIndex \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd AddItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_AddedSlotIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_AddedSlotIndex = { "AddedSlotIndex", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventAddItem_Parms, AddedSlotIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventAddItem_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventAddItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventAddItem_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_AddedSlotIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::ItemSlotContainerBase_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::ItemSlotContainerBase_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execAddItem)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AddedSlotIndex);
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItem(Z_Param_Out_AddedSlotIndex,Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function AddItem

// Begin Class UItemSlotContainerBase Function AddItemToIndex
struct ItemSlotContainerBase_eventAddItemToIndex_Parms
{
	UItemObject* InItemObject;
	int32 InIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemSlotContainerBase_eventAddItemToIndex_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UItemSlotContainerBase_AddItemToIndex = FName(TEXT("AddItemToIndex"));
bool UItemSlotContainerBase::AddItemToIndex(UItemObject* InItemObject, int32 InIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_AddItemToIndex);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotContainerBase_eventAddItemToIndex_Parms Parms;
		Parms.InItemObject=InItemObject;
		Parms.InIndex=InIndex;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return AddItemToIndex_Implementation(InItemObject, InIndex);
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xdf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcf\xb0\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd2\xb0\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventAddItemToIndex_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventAddItemToIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventAddItemToIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventAddItemToIndex_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "AddItemToIndex", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::PropPointers), sizeof(ItemSlotContainerBase_eventAddItemToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotContainerBase_eventAddItemToIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execAddItemToIndex)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddItemToIndex_Implementation(Z_Param_InItemObject,Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function AddItemToIndex

// Begin Class UItemSlotContainerBase Function CheckAddAvailable
struct Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics
{
	struct ItemSlotContainerBase_eventCheckAddAvailable_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventCheckAddAvailable_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventCheckAddAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventCheckAddAvailable_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "CheckAddAvailable", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::ItemSlotContainerBase_eventCheckAddAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::ItemSlotContainerBase_eventCheckAddAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execCheckAddAvailable)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CheckAddAvailable(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function CheckAddAvailable

// Begin Class UItemSlotContainerBase Function GetAllItemObjects
struct Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics
{
	struct ItemSlotContainerBase_eventGetAllItemObjects_Parms
	{
		bool IsIncludeInside;
		TArray<UItemObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "CPP_Default_IsIncludeInside", "false" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_IsIncludeInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIncludeInside;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_IsIncludeInside_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventGetAllItemObjects_Parms*)Obj)->IsIncludeInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_IsIncludeInside = { "IsIncludeInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventGetAllItemObjects_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_IsIncludeInside_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetAllItemObjects_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_IsIncludeInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetAllItemObjects", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::ItemSlotContainerBase_eventGetAllItemObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::ItemSlotContainerBase_eventGetAllItemObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetAllItemObjects)
{
	P_GET_UBOOL(Z_Param_IsIncludeInside);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemObject*>*)Z_Param__Result=P_THIS->GetAllItemObjects(Z_Param_IsIncludeInside);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetAllItemObjects

// Begin Class UItemSlotContainerBase Function GetAllTopLeftItemSlotList
struct Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics
{
	struct ItemSlotContainerBase_eventGetAllTopLeftItemSlotList_Parms
	{
		TArray<UItemSlotBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, TopLeftSlot\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd, TopLeftSlot\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetAllTopLeftItemSlotList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetAllTopLeftItemSlotList", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::ItemSlotContainerBase_eventGetAllTopLeftItemSlotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::ItemSlotContainerBase_eventGetAllTopLeftItemSlotList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetAllTopLeftItemSlotList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemSlotBase*>*)Z_Param__Result=P_THIS->GetAllTopLeftItemSlotList();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetAllTopLeftItemSlotList

// Begin Class UItemSlotContainerBase Function GetFirstMoveAvailableItemSlot
struct Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics
{
	struct ItemSlotContainerBase_eventGetFirstMoveAvailableItemSlot_Parms
	{
		UItemObject* InItemObject;
		UItemSlotBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa5 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa5 \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xc3\xb9\xef\xbf\xbd\xef\xbf\xbd\xc2\xb0 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xdb\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xee\xb0\xa5 \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetFirstMoveAvailableItemSlot_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetFirstMoveAvailableItemSlot_Parms, ReturnValue), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetFirstMoveAvailableItemSlot", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::ItemSlotContainerBase_eventGetFirstMoveAvailableItemSlot_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::ItemSlotContainerBase_eventGetFirstMoveAvailableItemSlot_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetFirstMoveAvailableItemSlot)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotBase**)Z_Param__Result=P_THIS->GetFirstMoveAvailableItemSlot(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetFirstMoveAvailableItemSlot

// Begin Class UItemSlotContainerBase Function GetItemObjectListByItemID
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics
{
	struct ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms
	{
		int32 InItemID;
		bool IsIncludeInside;
		TArray<UItemObject*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// InItemID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemObject \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "CPP_Default_IsIncludeInside", "false" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InItemID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ItemObject \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd, \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InItemID;
	static void NewProp_IsIncludeInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIncludeInside;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms, InItemID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_IsIncludeInside_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms*)Obj)->IsIncludeInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_IsIncludeInside = { "IsIncludeInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_IsIncludeInside_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_InItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_IsIncludeInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemObjectListByItemID", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::ItemSlotContainerBase_eventGetItemObjectListByItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemObjectListByItemID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InItemID);
	P_GET_UBOOL(Z_Param_IsIncludeInside);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemObject*>*)Z_Param__Result=P_THIS->GetItemObjectListByItemID(Z_Param_InItemID,Z_Param_IsIncludeInside);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemObjectListByItemID

// Begin Class UItemSlotContainerBase Function GetItemSlotByIndex
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics
{
	struct ItemSlotContainerBase_eventGetItemSlotByIndex_Parms
	{
		int32 InIndex;
		UItemSlotBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotByIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotByIndex_Parms, ReturnValue), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemSlotByIndex", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::ItemSlotContainerBase_eventGetItemSlotByIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::ItemSlotContainerBase_eventGetItemSlotByIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemSlotByIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotBase**)Z_Param__Result=P_THIS->GetItemSlotByIndex(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemSlotByIndex

// Begin Class UItemSlotContainerBase Function GetItemSlotByItemObject
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics
{
	struct ItemSlotContainerBase_eventGetItemSlotByItemObject_Parms
	{
		UItemObject* InItemObject;
		UItemSlotBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// ItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grid\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb6\xef\xbf\xbd\xef\xbf\xbd TopLeftSlot\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "ItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Grid\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb6\xef\xbf\xbd\xef\xbf\xbd TopLeftSlot\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotByItemObject_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotByItemObject_Parms, ReturnValue), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemSlotByItemObject", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::ItemSlotContainerBase_eventGetItemSlotByItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::ItemSlotContainerBase_eventGetItemSlotByItemObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemSlotByItemObject)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotBase**)Z_Param__Result=P_THIS->GetItemSlotByItemObject(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemSlotByItemObject

// Begin Class UItemSlotContainerBase Function GetItemSlotBySlotType
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics
{
	struct ItemSlotContainerBase_eventGetItemSlotBySlotType_Parms
	{
		EItemSlotType InSlotType;
		UItemSlotBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InSlotType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InSlotType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_InSlotType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_InSlotType = { "InSlotType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotBySlotType_Parms, InSlotType), Z_Construct_UEnum_InventorySystem_EItemSlotType, METADATA_PARAMS(0, nullptr) }; // 2549424163
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotBySlotType_Parms, ReturnValue), Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_InSlotType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_InSlotType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemSlotBySlotType", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::ItemSlotContainerBase_eventGetItemSlotBySlotType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::ItemSlotContainerBase_eventGetItemSlotBySlotType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemSlotBySlotType)
{
	P_GET_ENUM(EItemSlotType,Z_Param_InSlotType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotBase**)Z_Param__Result=P_THIS->GetItemSlotBySlotType(EItemSlotType(Z_Param_InSlotType));
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemSlotBySlotType

// Begin Class UItemSlotContainerBase Function GetItemSlotContainerType
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics
{
	struct ItemSlotContainerBase_eventGetItemSlotContainerType_Parms
	{
		EItemSlotContainerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Getter , Setter\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter , Setter" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotContainerType_Parms, ReturnValue), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(0, nullptr) }; // 3642467615
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemSlotContainerType", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::ItemSlotContainerBase_eventGetItemSlotContainerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::ItemSlotContainerBase_eventGetItemSlotContainerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemSlotContainerType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EItemSlotContainerType*)Z_Param__Result=P_THIS->GetItemSlotContainerType();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemSlotContainerType

// Begin Class UItemSlotContainerBase Function GetItemSlotList
struct Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics
{
	struct ItemSlotContainerBase_eventGetItemSlotList_Parms
	{
		TArray<UItemSlotBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000008000582, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetItemSlotList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetItemSlotList", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::ItemSlotContainerBase_eventGetItemSlotList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::ItemSlotContainerBase_eventGetItemSlotList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetItemSlotList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UItemSlotBase*>*)Z_Param__Result=P_THIS->GetItemSlotList();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetItemSlotList

// Begin Class UItemSlotContainerBase Function GetOwnerComponent
struct Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics
{
	struct ItemSlotContainerBase_eventGetOwnerComponent_Parms
	{
		UItemSlotContainerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Owner ActorComponent(ItemSlotContainerComponent) \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UItemSlotContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::ItemSlotContainerBase_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::ItemSlotContainerBase_eventGetOwnerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetOwnerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotContainerComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetOwnerComponent

// Begin Class UItemSlotContainerBase Function GetSize
struct Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics
{
	struct ItemSlotContainerBase_eventGetSize_Parms
	{
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase|Getter/Setter" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventGetSize_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "GetSize", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::ItemSlotContainerBase_eventGetSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::ItemSlotContainerBase_eventGetSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_GetSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_GetSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execGetSize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=P_THIS->GetSize();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function GetSize

// Begin Class UItemSlotContainerBase Function HasItem
struct Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics
{
	struct ItemSlotContainerBase_eventHasItem_Parms
	{
		UItemObject* InItemObject;
		bool IsIncludeInside;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xca\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xba\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "CPP_Default_IsIncludeInside", "false" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xca\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc7\xba\xef\xbf\xbd. IsIncludeInside == true\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xce\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_IsIncludeInside_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsIncludeInside;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventHasItem_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_IsIncludeInside_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventHasItem_Parms*)Obj)->IsIncludeInside = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_IsIncludeInside = { "IsIncludeInside", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventHasItem_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_IsIncludeInside_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventHasItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventHasItem_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_IsIncludeInside,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "HasItem", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::ItemSlotContainerBase_eventHasItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::ItemSlotContainerBase_eventHasItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_HasItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_HasItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execHasItem)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_GET_UBOOL(Z_Param_IsIncludeInside);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItem(Z_Param_InItemObject,Z_Param_IsIncludeInside);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function HasItem

// Begin Class UItemSlotContainerBase Function Initialize
static const FName NAME_UItemSlotContainerBase_Initialize = FName(TEXT("Initialize"));
void UItemSlotContainerBase::Initialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Initialize_Implementation();
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function Initialize

// Begin Class UItemSlotContainerBase Function IsSlotMoveAvailable
struct ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms
{
	int32 InIndex;
	UItemObject* InItemObject;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UItemSlotContainerBase_IsSlotMoveAvailable = FName(TEXT("IsSlotMoveAvailable"));
bool UItemSlotContainerBase::IsSlotMoveAvailable(int32 InIndex, UItemObject* InItemObject) const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_IsSlotMoveAvailable);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InItemObject=InItemObject;
		const_cast<UItemSlotContainerBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemSlotContainerBase*>(this)->IsSlotMoveAvailable_Implementation(InIndex, InItemObject);
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Index\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "IsSlotMoveAvailable", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::PropPointers), sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execIsSlotMoveAvailable)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlotMoveAvailable_Implementation(Z_Param_InIndex,Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function IsSlotMoveAvailable

// Begin Class UItemSlotContainerBase Function IsSlotMoveAvailableByItemID
struct ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms
{
	int32 InIndex;
	int32 InItemID;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UItemSlotContainerBase_IsSlotMoveAvailableByItemID = FName(TEXT("IsSlotMoveAvailableByItemID"));
bool UItemSlotContainerBase::IsSlotMoveAvailableByItemID(int32 InIndex, int32 InItemID) const
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_IsSlotMoveAvailableByItemID);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms Parms;
		Parms.InIndex=InIndex;
		Parms.InItemID=InItemID;
		const_cast<UItemSlotContainerBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UItemSlotContainerBase*>(this)->IsSlotMoveAvailableByItemID_Implementation(InIndex, InItemID);
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Index\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcb\xbb\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InItemID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms, InItemID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_InItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "IsSlotMoveAvailableByItemID", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::PropPointers), sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotContainerBase_eventIsSlotMoveAvailableByItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execIsSlotMoveAvailableByItemID)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_GET_PROPERTY(FIntProperty,Z_Param_InItemID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsSlotMoveAvailableByItemID_Implementation(Z_Param_InIndex,Z_Param_InItemID);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function IsSlotMoveAvailableByItemID

// Begin Class UItemSlotContainerBase Function RemoveAllItems
struct Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics
{
	struct ItemSlotContainerBase_eventRemoveAllItems_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventRemoveAllItems_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventRemoveAllItems_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "RemoveAllItems", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::ItemSlotContainerBase_eventRemoveAllItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::ItemSlotContainerBase_eventRemoveAllItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execRemoveAllItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveAllItems();
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function RemoveAllItems

// Begin Class UItemSlotContainerBase Function RemoveItem
struct Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics
{
	struct ItemSlotContainerBase_eventRemoveItem_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RemoveItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RemoveItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventRemoveItem_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventRemoveItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventRemoveItem_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "RemoveItem", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::ItemSlotContainerBase_eventRemoveItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::ItemSlotContainerBase_eventRemoveItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execRemoveItem)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItem(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function RemoveItem

// Begin Class UItemSlotContainerBase Function RemoveItemByItemUID
struct Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics
{
	struct ItemSlotContainerBase_eventRemoveItemByItemUID_Parms
	{
		int64 InItemUID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd ItemUID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RemoveItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd ItemUID\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcf\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd RemoveItemToIndex \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InItemUID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_InItemUID = { "InItemUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventRemoveItemByItemUID_Parms, InItemUID), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventRemoveItemByItemUID_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventRemoveItemByItemUID_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_InItemUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "RemoveItemByItemUID", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::ItemSlotContainerBase_eventRemoveItemByItemUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::ItemSlotContainerBase_eventRemoveItemByItemUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execRemoveItemByItemUID)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InItemUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemByItemUID(Z_Param_InItemUID);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function RemoveItemByItemUID

// Begin Class UItemSlotContainerBase Function RemoveItemToIndex
struct ItemSlotContainerBase_eventRemoveItemToIndex_Parms
{
	int32 InIndex;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	ItemSlotContainerBase_eventRemoveItemToIndex_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UItemSlotContainerBase_RemoveItemToIndex = FName(TEXT("RemoveItemToIndex"));
bool UItemSlotContainerBase::RemoveItemToIndex(int32 InIndex)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_RemoveItemToIndex);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotContainerBase_eventRemoveItemToIndex_Parms Parms;
		Parms.InIndex=InIndex;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return RemoveItemToIndex_Implementation(InIndex);
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemSlotContainerBase" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n" },
#endif
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xd8\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd4\xbf\xef\xbf\xbd \xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xd4\xbc\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xba\xef\xbf\xbd\xc6\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc8\xbe\xee\xbc\xad \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc5\xb4\xcf\xb1\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_InIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_InIndex = { "InIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventRemoveItemToIndex_Parms, InIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventRemoveItemToIndex_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventRemoveItemToIndex_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_InIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "RemoveItemToIndex", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::PropPointers), sizeof(ItemSlotContainerBase_eventRemoveItemToIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotContainerBase_eventRemoveItemToIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execRemoveItemToIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_InIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveItemToIndex_Implementation(Z_Param_InIndex);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function RemoveItemToIndex

// Begin Class UItemSlotContainerBase Function SetData
struct ItemSlotContainerBase_eventSetData_Parms
{
	EItemSlotContainerType InItemSlotContainerType;
	FIntPoint InSize;
};
static const FName NAME_UItemSlotContainerBase_SetData = FName(TEXT("SetData"));
void UItemSlotContainerBase::SetData(EItemSlotContainerType InItemSlotContainerType, FIntPoint InSize)
{
	UFunction* Func = FindFunctionChecked(NAME_UItemSlotContainerBase_SetData);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		ItemSlotContainerBase_eventSetData_Parms Parms;
		Parms.InItemSlotContainerType=InItemSlotContainerType;
		Parms.InSize=InSize;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetData_Implementation(InItemSlotContainerType, InSize);
	}
}
struct Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InItemSlotContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InItemSlotContainerType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InItemSlotContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InItemSlotContainerType = { "InItemSlotContainerType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventSetData_Parms, InItemSlotContainerType), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(0, nullptr) }; // 3642467615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InSize = { "InSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventSetData_Parms, InSize), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InItemSlotContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InItemSlotContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::NewProp_InSize,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::PropPointers), sizeof(ItemSlotContainerBase_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C820C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(ItemSlotContainerBase_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execSetData)
{
	P_GET_ENUM(EItemSlotContainerType,Z_Param_InItemSlotContainerType);
	P_GET_STRUCT(FIntPoint,Z_Param_InSize);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData_Implementation(EItemSlotContainerType(Z_Param_InItemSlotContainerType),Z_Param_InSize);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function SetData

// Begin Class UItemSlotContainerBase Function SetOuter
struct Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics
{
	struct ItemSlotContainerBase_eventSetOuter_Parms
	{
		UObject* NewOuter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOuter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_NewOuter = { "NewOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemSlotContainerBase_eventSetOuter_Parms, NewOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemSlotContainerBase_eventSetOuter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemSlotContainerBase_eventSetOuter_Parms), &Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_NewOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemSlotContainerBase, nullptr, "SetOuter", nullptr, nullptr, Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::ItemSlotContainerBase_eventSetOuter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::ItemSlotContainerBase_eventSetOuter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemSlotContainerBase_SetOuter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemSlotContainerBase_SetOuter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemSlotContainerBase::execSetOuter)
{
	P_GET_OBJECT(UObject,Z_Param_NewOuter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOuter(Z_Param_NewOuter);
	P_NATIVE_END;
}
// End Class UItemSlotContainerBase Function SetOuter

// Begin Class UItemSlotContainerBase
void UItemSlotContainerBase::StaticRegisterNativesUItemSlotContainerBase()
{
	UClass* Class = UItemSlotContainerBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &UItemSlotContainerBase::execAddItem },
		{ "AddItemToIndex", &UItemSlotContainerBase::execAddItemToIndex },
		{ "CheckAddAvailable", &UItemSlotContainerBase::execCheckAddAvailable },
		{ "GetAllItemObjects", &UItemSlotContainerBase::execGetAllItemObjects },
		{ "GetAllTopLeftItemSlotList", &UItemSlotContainerBase::execGetAllTopLeftItemSlotList },
		{ "GetFirstMoveAvailableItemSlot", &UItemSlotContainerBase::execGetFirstMoveAvailableItemSlot },
		{ "GetItemObjectListByItemID", &UItemSlotContainerBase::execGetItemObjectListByItemID },
		{ "GetItemSlotByIndex", &UItemSlotContainerBase::execGetItemSlotByIndex },
		{ "GetItemSlotByItemObject", &UItemSlotContainerBase::execGetItemSlotByItemObject },
		{ "GetItemSlotBySlotType", &UItemSlotContainerBase::execGetItemSlotBySlotType },
		{ "GetItemSlotContainerType", &UItemSlotContainerBase::execGetItemSlotContainerType },
		{ "GetItemSlotList", &UItemSlotContainerBase::execGetItemSlotList },
		{ "GetOwnerComponent", &UItemSlotContainerBase::execGetOwnerComponent },
		{ "GetSize", &UItemSlotContainerBase::execGetSize },
		{ "HasItem", &UItemSlotContainerBase::execHasItem },
		{ "Initialize", &UItemSlotContainerBase::execInitialize },
		{ "IsSlotMoveAvailable", &UItemSlotContainerBase::execIsSlotMoveAvailable },
		{ "IsSlotMoveAvailableByItemID", &UItemSlotContainerBase::execIsSlotMoveAvailableByItemID },
		{ "RemoveAllItems", &UItemSlotContainerBase::execRemoveAllItems },
		{ "RemoveItem", &UItemSlotContainerBase::execRemoveItem },
		{ "RemoveItemByItemUID", &UItemSlotContainerBase::execRemoveItemByItemUID },
		{ "RemoveItemToIndex", &UItemSlotContainerBase::execRemoveItemToIndex },
		{ "SetData", &UItemSlotContainerBase::execSetData },
		{ "SetOuter", &UItemSlotContainerBase::execSetOuter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemSlotContainerBase);
UClass* Z_Construct_UClass_UItemSlotContainerBase_NoRegister()
{
	return UItemSlotContainerBase::StaticClass();
}
struct Z_Construct_UClass_UItemSlotContainerBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "ItemSlotContainerBase.h" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotContainerType_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotContainer" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Size_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotContainer" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Container Size" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotList_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemSlotContainer" },
		{ "ModuleRelativePath", "Public/ItemSlotContainerBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc6\xae" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ItemSlotContainerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ItemSlotContainerType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Size;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSlotList_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemSlotList;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemSlotContainerBase_AddItem, "AddItem" }, // 2760643000
		{ &Z_Construct_UFunction_UItemSlotContainerBase_AddItemToIndex, "AddItemToIndex" }, // 1951156928
		{ &Z_Construct_UFunction_UItemSlotContainerBase_CheckAddAvailable, "CheckAddAvailable" }, // 3556624800
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetAllItemObjects, "GetAllItemObjects" }, // 1433007833
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetAllTopLeftItemSlotList, "GetAllTopLeftItemSlotList" }, // 68243784
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetFirstMoveAvailableItemSlot, "GetFirstMoveAvailableItemSlot" }, // 3098395377
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemObjectListByItemID, "GetItemObjectListByItemID" }, // 2124483555
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByIndex, "GetItemSlotByIndex" }, // 828788695
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotByItemObject, "GetItemSlotByItemObject" }, // 1641357421
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotBySlotType, "GetItemSlotBySlotType" }, // 767470304
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotContainerType, "GetItemSlotContainerType" }, // 3370842054
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetItemSlotList, "GetItemSlotList" }, // 838717781
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetOwnerComponent, "GetOwnerComponent" }, // 120523664
		{ &Z_Construct_UFunction_UItemSlotContainerBase_GetSize, "GetSize" }, // 462664136
		{ &Z_Construct_UFunction_UItemSlotContainerBase_HasItem, "HasItem" }, // 3323834260
		{ &Z_Construct_UFunction_UItemSlotContainerBase_Initialize, "Initialize" }, // 1033997918
		{ &Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailable, "IsSlotMoveAvailable" }, // 3857028454
		{ &Z_Construct_UFunction_UItemSlotContainerBase_IsSlotMoveAvailableByItemID, "IsSlotMoveAvailableByItemID" }, // 2943006076
		{ &Z_Construct_UFunction_UItemSlotContainerBase_RemoveAllItems, "RemoveAllItems" }, // 2009698014
		{ &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItem, "RemoveItem" }, // 1178339659
		{ &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemByItemUID, "RemoveItemByItemUID" }, // 4216943381
		{ &Z_Construct_UFunction_UItemSlotContainerBase_RemoveItemToIndex, "RemoveItemToIndex" }, // 2393351528
		{ &Z_Construct_UFunction_UItemSlotContainerBase_SetData, "SetData" }, // 1737840521
		{ &Z_Construct_UFunction_UItemSlotContainerBase_SetOuter, "SetOuter" }, // 2982850045
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemSlotContainerBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotContainerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotContainerType = { "ItemSlotContainerType", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotContainerBase, ItemSlotContainerType), Z_Construct_UEnum_InventorySystem_EItemSlotContainerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotContainerType_MetaData), NewProp_ItemSlotContainerType_MetaData) }; // 3642467615
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_Size = { "Size", nullptr, (EPropertyFlags)0x0020080000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotContainerBase, Size), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Size_MetaData), NewProp_Size_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotList_Inner = { "ItemSlotList", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UItemSlotBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotList = { "ItemSlotList", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemSlotContainerBase, ItemSlotList), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotList_MetaData), NewProp_ItemSlotList_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemSlotContainerBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotContainerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotContainerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_Size,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotList_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemSlotContainerBase_Statics::NewProp_ItemSlotList,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemSlotContainerBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemSlotContainerBase_Statics::ClassParams = {
	&UItemSlotContainerBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemSlotContainerBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerBase_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemSlotContainerBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemSlotContainerBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemSlotContainerBase()
{
	if (!Z_Registration_Info_UClass_UItemSlotContainerBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemSlotContainerBase.OuterSingleton, Z_Construct_UClass_UItemSlotContainerBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemSlotContainerBase.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemSlotContainerBase>()
{
	return UItemSlotContainerBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemSlotContainerBase);
UItemSlotContainerBase::~UItemSlotContainerBase() {}
// End Class UItemSlotContainerBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemSlotContainerBase, UItemSlotContainerBase::StaticClass, TEXT("UItemSlotContainerBase"), &Z_Registration_Info_UClass_UItemSlotContainerBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemSlotContainerBase), 412050008U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_3914065296(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemSlotContainerBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
