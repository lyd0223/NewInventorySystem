// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/ItemObject.h"
#include "InventorySystem/Public/InventoryEnums.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerBase_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
INVENTORYSYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FItemStruct();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class UItemObject Function GetItemCount
struct Z_Construct_UFunction_UItemObject_GetItemCount_Statics
{
	struct ItemObject_eventGetItemCount_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemObject_GetItemCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemCount_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemCount_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemCount_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemCount_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemCount", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemCount_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemCount_Statics::ItemObject_eventGetItemCount_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemCount_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemCount_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemCount_Statics::ItemObject_eventGetItemCount_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetItemCount()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemCount_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetItemCount)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemCount();
	P_NATIVE_END;
}
// End Class UItemObject Function GetItemCount

// Begin Class UItemObject Function GetItemID
struct Z_Construct_UFunction_UItemObject_GetItemID_Statics
{
	struct ItemObject_eventGetItemID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemObject_GetItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemID", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemID_Statics::ItemObject_eventGetItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemID_Statics::ItemObject_eventGetItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetItemID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemID();
	P_NATIVE_END;
}
// End Class UItemObject Function GetItemID

// Begin Class UItemObject Function GetItemSlotContainer
struct Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics
{
	struct ItemObject_eventGetItemSlotContainer_Parms
	{
		UItemSlotContainerBase* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemSlotContainer_Parms, ReturnValue), Z_Construct_UClass_UItemSlotContainerBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemSlotContainer", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::ItemObject_eventGetItemSlotContainer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::ItemObject_eventGetItemSlotContainer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetItemSlotContainer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemSlotContainer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetItemSlotContainer)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotContainerBase**)Z_Param__Result=P_THIS->GetItemSlotContainer();
	P_NATIVE_END;
}
// End Class UItemObject Function GetItemSlotContainer

// Begin Class UItemObject Function GetItemType
struct Z_Construct_UFunction_UItemObject_GetItemType_Statics
{
	struct ItemObject_eventGetItemType_Parms
	{
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_GetItemType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemType_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemType", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemType_Statics::ItemObject_eventGetItemType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemType_Statics::ItemObject_eventGetItemType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetItemType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetItemType)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetItemType();
	P_NATIVE_END;
}
// End Class UItemObject Function GetItemType

// Begin Class UItemObject Function GetItemUID
struct Z_Construct_UFunction_UItemObject_GetItemUID_Statics
{
	struct ItemObject_eventGetItemUID_Parms
	{
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UItemObject_GetItemUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetItemUID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetItemUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetItemUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetItemUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetItemUID", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetItemUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetItemUID_Statics::ItemObject_eventGetItemUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetItemUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetItemUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetItemUID_Statics::ItemObject_eventGetItemUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetItemUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetItemUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetItemUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=P_THIS->GetItemUID();
	P_NATIVE_END;
}
// End Class UItemObject Function GetItemUID

// Begin Class UItemObject Function GetOwnerComponent
struct Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics
{
	struct ItemObject_eventGetOwnerComponent_Parms
	{
		UItemSlotContainerComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd Owner ActorComponent(ItemSlotContainerComponent) \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemObject.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetOwnerComponent_Parms, ReturnValue), Z_Construct_UClass_UItemSlotContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetOwnerComponent", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::ItemObject_eventGetOwnerComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::ItemObject_eventGetOwnerComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetOwnerComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetOwnerComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetOwnerComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemSlotContainerComponent**)Z_Param__Result=P_THIS->GetOwnerComponent();
	P_NATIVE_END;
}
// End Class UItemObject Function GetOwnerComponent

// Begin Class UItemObject Function GetParentItemObject
struct Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics
{
	struct ItemObject_eventGetParentItemObject_Parms
	{
		UItemObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemObject|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb0\xef\xbf\xbd ItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb0\xef\xbf\xbd ItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xc6\xb4\xcf\xb6\xef\xbf\xbd\xef\xbf\xbd nullptr \xef\xbf\xbd\xef\xbf\xbd\xc8\xaf." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventGetParentItemObject_Parms, ReturnValue), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "GetParentItemObject", nullptr, nullptr, Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::ItemObject_eventGetParentItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::ItemObject_eventGetParentItemObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_GetParentItemObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_GetParentItemObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execGetParentItemObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemObject**)Z_Param__Result=P_THIS->GetParentItemObject();
	P_NATIVE_END;
}
// End Class UItemObject Function GetParentItemObject

// Begin Class UItemObject Function HasItemObjectAsParent
struct Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics
{
	struct ItemObject_eventHasItemObjectAsParent_Parms
	{
		UItemObject* InItemObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemObject|Getter/Setter" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "InItemObject\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xce\xb8\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc8\xae\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InItemObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_InItemObject = { "InItemObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventHasItemObjectAsParent_Parms, InItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemObject_eventHasItemObjectAsParent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemObject_eventHasItemObjectAsParent_Parms), &Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_InItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "HasItemObjectAsParent", nullptr, nullptr, Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::ItemObject_eventHasItemObjectAsParent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::ItemObject_eventHasItemObjectAsParent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_HasItemObjectAsParent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_HasItemObjectAsParent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execHasItemObjectAsParent)
{
	P_GET_OBJECT(UItemObject,Z_Param_InItemObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->HasItemObjectAsParent(Z_Param_InItemObject);
	P_NATIVE_END;
}
// End Class UItemObject Function HasItemObjectAsParent

// Begin Class UItemObject Function Initialize
static const FName NAME_UItemObject_Initialize = FName(TEXT("Initialize"));
void UItemObject::Initialize()
{
	UFunction* Func = FindFunctionChecked(NAME_UItemObject_Initialize);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		Initialize_Implementation();
	}
}
struct Z_Construct_UFunction_UItemObject_Initialize_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "Initialize", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_Initialize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_Initialize_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UItemObject_Initialize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_Initialize_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execInitialize)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Initialize_Implementation();
	P_NATIVE_END;
}
// End Class UItemObject Function Initialize

// Begin Class UItemObject Function MakeItemStruct
struct Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics
{
	struct ItemObject_eventMakeItemStruct_Parms
	{
		FItemStruct ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Item \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xc6\xb3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xc3\xbc \xef\xbf\xbd\xd1\xb2\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventMakeItemStruct_Parms, ReturnValue), Z_Construct_UScriptStruct_FItemStruct, METADATA_PARAMS(0, nullptr) }; // 3679274376
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "MakeItemStruct", nullptr, nullptr, Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::ItemObject_eventMakeItemStruct_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::ItemObject_eventMakeItemStruct_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_MakeItemStruct()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_MakeItemStruct_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execMakeItemStruct)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FItemStruct*)Z_Param__Result=P_THIS->MakeItemStruct();
	P_NATIVE_END;
}
// End Class UItemObject Function MakeItemStruct

// Begin Class UItemObject Function SetData
struct Z_Construct_UFunction_UItemObject_SetData_Statics
{
	struct ItemObject_eventSetData_Parms
	{
		int64 InUID;
		int32 InItemID;
		int32 InCount;
		FGameplayTag InItemType;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ItemObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_InUID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_InCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InItemType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InUID = { "InUID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventSetData_Parms, InUID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InItemID = { "InItemID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventSetData_Parms, InItemID), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InCount = { "InCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventSetData_Parms, InCount), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InItemType = { "InItemType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventSetData_Parms, InItemType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_SetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetData_Statics::NewProp_InItemType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_SetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "SetData", nullptr, nullptr, Z_Construct_UFunction_UItemObject_SetData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_SetData_Statics::ItemObject_eventSetData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_SetData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_SetData_Statics::ItemObject_eventSetData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_SetData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_SetData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execSetData)
{
	P_GET_PROPERTY(FInt64Property,Z_Param_InUID);
	P_GET_PROPERTY(FIntProperty,Z_Param_InItemID);
	P_GET_PROPERTY(FIntProperty,Z_Param_InCount);
	P_GET_STRUCT(FGameplayTag,Z_Param_InItemType);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetData(Z_Param_InUID,Z_Param_InItemID,Z_Param_InCount,Z_Param_InItemType);
	P_NATIVE_END;
}
// End Class UItemObject Function SetData

// Begin Class UItemObject Function SetOuter
struct Z_Construct_UFunction_UItemObject_SetOuter_Statics
{
	struct ItemObject_eventSetOuter_Parms
	{
		UObject* NewOuter;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb3\xe0\xbc\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xe4\xb0\xa1 \xef\xbf\xbd\xd6\xbe\xee\xbc\xad Outer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd. \n// Item\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\n" },
#endif
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb4\xc2\xb3\xe0\xbc\xae\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xca\xbf\xe4\xb0\xa1 \xef\xbf\xbd\xd6\xbe\xee\xbc\xad Outer\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xbf\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd.\nItem\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xcc\xb5\xef\xbf\xbd\xef\xbf\xbd\xc7\xbe\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd(\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb5\xef\xbf\xbd \xef\xbf\xbd\xc7\xb4\xef\xbf\xbd \xef\xbf\xbd\xce\xba\xef\xbf\xbd\xef\xbf\xbd\xe4\xb8\xae\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd) \xc8\xa3\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewOuter;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_NewOuter = { "NewOuter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemObject_eventSetOuter_Parms, NewOuter), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((ItemObject_eventSetOuter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(ItemObject_eventSetOuter_Parms), &Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UItemObject_SetOuter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_NewOuter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UItemObject_SetOuter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetOuter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UItemObject_SetOuter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UItemObject, nullptr, "SetOuter", nullptr, nullptr, Z_Construct_UFunction_UItemObject_SetOuter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetOuter_Statics::PropPointers), sizeof(Z_Construct_UFunction_UItemObject_SetOuter_Statics::ItemObject_eventSetOuter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UItemObject_SetOuter_Statics::Function_MetaDataParams), Z_Construct_UFunction_UItemObject_SetOuter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UItemObject_SetOuter_Statics::ItemObject_eventSetOuter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UItemObject_SetOuter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UItemObject_SetOuter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UItemObject::execSetOuter)
{
	P_GET_OBJECT(UObject,Z_Param_NewOuter);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SetOuter(Z_Param_NewOuter);
	P_NATIVE_END;
}
// End Class UItemObject Function SetOuter

// Begin Class UItemObject
void UItemObject::StaticRegisterNativesUItemObject()
{
	UClass* Class = UItemObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemCount", &UItemObject::execGetItemCount },
		{ "GetItemID", &UItemObject::execGetItemID },
		{ "GetItemSlotContainer", &UItemObject::execGetItemSlotContainer },
		{ "GetItemType", &UItemObject::execGetItemType },
		{ "GetItemUID", &UItemObject::execGetItemUID },
		{ "GetOwnerComponent", &UItemObject::execGetOwnerComponent },
		{ "GetParentItemObject", &UItemObject::execGetParentItemObject },
		{ "HasItemObjectAsParent", &UItemObject::execHasItemObjectAsParent },
		{ "Initialize", &UItemObject::execInitialize },
		{ "MakeItemStruct", &UItemObject::execMakeItemStruct },
		{ "SetData", &UItemObject::execSetData },
		{ "SetOuter", &UItemObject::execSetOuter },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UItemObject);
UClass* Z_Construct_UClass_UItemObject_NoRegister()
{
	return UItemObject::StaticClass();
}
struct Z_Construct_UClass_UItemObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** UItemObject\n * \n */" },
#endif
		{ "IncludePath", "ItemObject.h" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UItemObject" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UID_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd ID" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemCount_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemType_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xc5\xb8\xef\xbf\xbd\xef\xbf\xbd." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotContainer_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "ItemObject" },
		{ "ModuleRelativePath", "Public/ItemObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xcc\xb3\xef\xbf\xbd" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemCount;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ItemType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSlotContainer;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UItemObject_GetItemCount, "GetItemCount" }, // 2632548904
		{ &Z_Construct_UFunction_UItemObject_GetItemID, "GetItemID" }, // 3917628481
		{ &Z_Construct_UFunction_UItemObject_GetItemSlotContainer, "GetItemSlotContainer" }, // 2601762945
		{ &Z_Construct_UFunction_UItemObject_GetItemType, "GetItemType" }, // 2446881670
		{ &Z_Construct_UFunction_UItemObject_GetItemUID, "GetItemUID" }, // 166380386
		{ &Z_Construct_UFunction_UItemObject_GetOwnerComponent, "GetOwnerComponent" }, // 1553865479
		{ &Z_Construct_UFunction_UItemObject_GetParentItemObject, "GetParentItemObject" }, // 1080477883
		{ &Z_Construct_UFunction_UItemObject_HasItemObjectAsParent, "HasItemObjectAsParent" }, // 3100634835
		{ &Z_Construct_UFunction_UItemObject_Initialize, "Initialize" }, // 29293315
		{ &Z_Construct_UFunction_UItemObject_MakeItemStruct, "MakeItemStruct" }, // 4281824120
		{ &Z_Construct_UFunction_UItemObject_SetData, "SetData" }, // 3057287531
		{ &Z_Construct_UFunction_UItemObject_SetOuter, "SetOuter" }, // 27074780
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UItemObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_UID = { "UID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, UID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UID_MetaData), NewProp_UID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemCount = { "ItemCount", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ItemCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemCount_MetaData), NewProp_ItemCount_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemType = { "ItemType", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ItemType), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemType_MetaData), NewProp_ItemType_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UItemObject_Statics::NewProp_ItemSlotContainer = { "ItemSlotContainer", nullptr, (EPropertyFlags)0x0124080000000004, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UItemObject, ItemSlotContainer), Z_Construct_UClass_UItemSlotContainerBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotContainer_MetaData), NewProp_ItemSlotContainer_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_UID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemCount,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UItemObject_Statics::NewProp_ItemSlotContainer,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UItemObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UItemObject_Statics::ClassParams = {
	&UItemObject::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UItemObject_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UItemObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UItemObject()
{
	if (!Z_Registration_Info_UClass_UItemObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UItemObject.OuterSingleton, Z_Construct_UClass_UItemObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UItemObject.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<UItemObject>()
{
	return UItemObject::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UItemObject);
UItemObject::~UItemObject() {}
// End Class UItemObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UItemObject, UItemObject::StaticClass, TEXT("UItemObject"), &Z_Registration_Info_UClass_UItemObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UItemObject), 2858667736U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_4223519577(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_ItemObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
