// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "InventorySystem/Public/Actor/ItemActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeItemActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemActor();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_AItemActor_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemObject_NoRegister();
INVENTORYSYSTEM_API UClass* Z_Construct_UClass_UItemSlotContainerComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_InventorySystem();
// End Cross Module References

// Begin Class AItemActor Function GetItemID
struct Z_Construct_UFunction_AItemActor_GetItemID_Statics
{
	struct ItemActor_eventGetItemID_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AItemActor_GetItemID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventGetItemID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_GetItemID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_GetItemID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_GetItemID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "GetItemID", nullptr, nullptr, Z_Construct_UFunction_AItemActor_GetItemID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemID_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_GetItemID_Statics::ItemActor_eventGetItemID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemID_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_GetItemID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemActor_GetItemID_Statics::ItemActor_eventGetItemID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemActor_GetItemID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_GetItemID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemActor::execGetItemID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetItemID();
	P_NATIVE_END;
}
// End Class AItemActor Function GetItemID

// Begin Class AItemActor Function GetItemObject
struct Z_Construct_UFunction_AItemActor_GetItemObject_Statics
{
	struct ItemActor_eventGetItemObject_Parms
	{
		UItemObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// public Functions\n" },
#endif
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "public Functions" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AItemActor_GetItemObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ItemActor_eventGetItemObject_Parms, ReturnValue), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AItemActor_GetItemObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AItemActor_GetItemObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AItemActor_GetItemObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AItemActor, nullptr, "GetItemObject", nullptr, nullptr, Z_Construct_UFunction_AItemActor_GetItemObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_AItemActor_GetItemObject_Statics::ItemActor_eventGetItemObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AItemActor_GetItemObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_AItemActor_GetItemObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AItemActor_GetItemObject_Statics::ItemActor_eventGetItemObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AItemActor_GetItemObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AItemActor_GetItemObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AItemActor::execGetItemObject)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UItemObject**)Z_Param__Result=P_THIS->GetItemObject();
	P_NATIVE_END;
}
// End Class AItemActor Function GetItemObject

// Begin Class AItemActor
void AItemActor::StaticRegisterNativesAItemActor()
{
	UClass* Class = AItemActor::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetItemID", &AItemActor::execGetItemID },
		{ "GetItemObject", &AItemActor::execGetItemObject },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AItemActor);
UClass* Z_Construct_UClass_AItemActor_NoRegister()
{
	return AItemActor::StaticClass();
}
struct Z_Construct_UClass_AItemActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Actor/ItemActor.h" },
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MeshComponent_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "AItemActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "//Variables\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Variables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemSlotContainerComponent_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "AItemActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemObject_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "AItemActor" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemID_MetaData[] = {
		{ "BlueprintProtected", "TRUE" },
		{ "Category", "AItemActor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Replicate.\n\x09*/" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Actor/ItemActor.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd \xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xd6\xb1\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd\xef\xbf\xbd Replicate." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MeshComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemSlotContainerComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ItemObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ItemID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AItemActor_GetItemID, "GetItemID" }, // 1271627548
		{ &Z_Construct_UFunction_AItemActor_GetItemObject, "GetItemObject" }, // 2263032686
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AItemActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent = { "MeshComponent", nullptr, (EPropertyFlags)0x012408000008001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, MeshComponent), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MeshComponent_MetaData), NewProp_MeshComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemSlotContainerComponent = { "ItemSlotContainerComponent", nullptr, (EPropertyFlags)0x012408000008001c, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemSlotContainerComponent), Z_Construct_UClass_UItemSlotContainerComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemSlotContainerComponent_MetaData), NewProp_ItemSlotContainerComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemObject = { "ItemObject", nullptr, (EPropertyFlags)0x0125080000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemObject), Z_Construct_UClass_UItemObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemObject_MetaData), NewProp_ItemObject_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AItemActor_Statics::NewProp_ItemID = { "ItemID", nullptr, (EPropertyFlags)0x0021080000000034, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AItemActor, ItemID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemID_MetaData), NewProp_ItemID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AItemActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_MeshComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemSlotContainerComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AItemActor_Statics::NewProp_ItemID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AItemActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_InventorySystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AItemActor_Statics::ClassParams = {
	&AItemActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AItemActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AItemActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AItemActor()
{
	if (!Z_Registration_Info_UClass_AItemActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AItemActor.OuterSingleton, Z_Construct_UClass_AItemActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AItemActor.OuterSingleton;
}
template<> INVENTORYSYSTEM_API UClass* StaticClass<AItemActor>()
{
	return AItemActor::StaticClass();
}
void AItemActor::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ItemID(TEXT("ItemID"));
	const bool bIsValid = true
		&& Name_ItemID == ClassReps[(int32)ENetFields_Private::ItemID].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in AItemActor"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AItemActor);
AItemActor::~AItemActor() {}
// End Class AItemActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_Actor_ItemActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AItemActor, AItemActor::StaticClass, TEXT("AItemActor"), &Z_Registration_Info_UClass_AItemActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AItemActor), 3563229971U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_Actor_ItemActor_h_2875124250(TEXT("/Script/InventorySystem"),
	Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_Actor_ItemActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_lyd02_Documents_Unreal_Projects_InventoryPlugin_Plugins_InventorySystem_Source_InventorySystem_Public_Actor_ItemActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
