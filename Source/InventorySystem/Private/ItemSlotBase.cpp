// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSlotBase.h"

#include "ItemSlotContainerComponent.h"

#include "ItemObject.h"
#include "ItemSlotContainerBase.h"

#define _Inventory_ItemSlot_LOG(Verbosity, Format, ...) UE_LOG(Inventory, Verbosity, TEXT("[Inventory ItemSlot] - %s"), *FString::Printf(Format, ##__VA_ARGS__))


UItemSlotBase::UItemSlotBase()
{

}

UWorld* UItemSlotBase::GetWorld() const
{
	if (GIsEditor && !GIsPlayInEditorWorld)	return nullptr;

	if (const UObject* Outer = GetOuter())
	{
		return Outer->GetWorld();
	}
	return nullptr;
}

UItemSlotContainerComponent* UItemSlotBase::GetOwnerComponent() const
{
	UObject* Outer = GetOuter();
	UObject* Result = nullptr;
	while (!Result)
	{
		if (Outer->IsA<UItemSlotContainerComponent>())
			Result = Outer;
		Outer = Outer->GetOuter();
	}

	return Cast<UItemSlotContainerComponent>(Result);
}

void UItemSlotBase::Initialize_Implementation()
{
	// Bind Func
	OnItemObjectChanged.AddDynamic(this, &UItemSlotBase::OnItemObjectChangedEvent);
}

void UItemSlotBase::SetData_Implementation(EItemSlotType InItemSlotType, int32 InSlotIndex)
{
	ItemSlotType = InItemSlotType;
	SlotIndex = InSlotIndex;
}

void UItemSlotBase::SetItem(UItemObject* InItemObject, bool InIsTopLeft, bool SetOuterFlag) 
{
	if(InItemObject == nullptr)
	{ 
		UE_LOG(LogTemp, Warning, TEXT("InItem is Not Valid"));
		return;
	}

	UItemObject* TempItemObject = ItemObject;

	ItemObject = InItemObject; 
	IsTopLeft = InIsTopLeft; 

	// TopLeft슬롯이 Outer가 되도록 설정. 
	if(SetOuterFlag && IsTopLeft)
		ItemObject->SetOuter(this);

	OnItemObjectChanged.Broadcast(this, TempItemObject, ItemObject);
}

void UItemSlotBase::ResetItem() 
{ 
	UItemObject* TempItemObject = ItemObject;

	ItemObject = nullptr; 

	OnItemObjectChanged.Broadcast(this, TempItemObject, ItemObject);

	IsTopLeft = false; 
}

FModifyItemData UItemSlotBase::MakeModifyItemData(AActor* InPlayerActor) const
{
	if(ItemObject)
	{ 
		return FModifyItemData(ItemObject->MakeItemStruct());
	}
	else
		return FModifyItemData();
}

EItemSlotContainerType UItemSlotBase::GetTopContainerType() const
{
	UObject* Outer = GetOuter();
	UItemSlotContainerBase* TopContainer = nullptr;
	while (Outer)
	{
		if (Outer->IsA(UItemSlotContainerBase::StaticClass()))
		{
			TopContainer = Cast<UItemSlotContainerBase>(Outer);
		}
		
		if(Outer->IsA<UItemSlotContainerComponent>())
			return TopContainer->GetItemSlotContainerType();

		Outer = Outer->GetOuter();
	}

	return EItemSlotContainerType::None;
}

FItemSlotInfo UItemSlotBase::ExtractItemSlotInfo() const
{
	FItemSlotInfo Result;
	Result.ContainerComponent = GetOwnerComponent();
	Result.TopContainerType = GetTopContainerType();

	UObject* LocalOuter = GetOuter();
	if (LocalOuter)
	{
		UItemSlotContainerBase* LocalOuterContainer = Cast<UItemSlotContainerBase>(LocalOuter);
		if (!LocalOuterContainer)
		{
			//Inventory_ItemSlot_LOG(Error, TEXT("'%s' - UItemSlotBase Instance must exist in UItemSlotContainer Instance."), TEXT("ExtractItemSlotInfo"));
			return FItemSlotInfo();
		}
		
		// this의 Outer의 Outer. 
		UItemObject* LocalContainerOuterObject = Cast<UItemObject>(LocalOuterContainer->GetOuter());
		if (LocalContainerOuterObject) // UItemObject인 경우, 그 아이템의 ItemUID를 넣어줌.
		{
			Result.ParentItemUID = LocalContainerOuterObject->GetItemUID();
		}
		else						  // 그 외(ContainerComponent)인 경우, 최상단 Item이기때문에, 0을 넣어줌.
		{
			Result.ParentItemUID = 0;
		}
	}
	Result.SlotIndex = GetSlotIndex();

	return Result;
}



bool UItemSlotBase::IsMoveAvailable(class UItemObject* InItemObject)
{
	//if(!InItemObject) return false;

	//// 비활성화된 슬롯이면 Move 불가능.
	//if(!IsActive) return false; 

	//// 안에 템 이미 있으면
	//if(!IsEmptySlot())
	//{
	//	// 같은 아이템이면 이동 가능. 같은 아이템 아니면 이동 불가.
	//	return InItemObject == ItemObject;
	//}

	//// 이 슬롯에 InItemObject의 ItemType을 넣을 수 있는지 체크.
	//bool IsSlotConfigAvailable = UInventoryFunctionLibrary::CheckAvailableItemSlotConfig(InItemObject->GetSubType(), ItemSlotType);
	//
	//return IsSlotConfigAvailable;

	return true;
}

bool UItemSlotBase::IsMoveAvailableByItemID(int32 InItemID)
{
	//UWHTable* WHTable = UWHTable::GetWHTable();
	//if(!WHTable) return false;
	//FWHData_ItemData GameItemData = WHTable->GetGameItemById(InItemID);

	//// 비활성화된 슬롯이면 Move 불가능.
	//if(!IsActive) return false; 

	//// 안에 템 이미 있으면 false.
	//if(!IsEmptySlot()) return false;

	//// 이 슬롯에 InItemObject의 ItemType을 넣을 수 있는지 체크.
	//bool IsSlotConfigAvailable = UInventoryFunctionLibrary::CheckAvailableItemSlotConfig(GameItemData.SubType, ItemSlotType);

	//return IsSlotConfigAvailable;

	return true;
}

bool UItemSlotBase::IsSplitAvailable(class UItemObject* InItemObject)
{
	//if(!InItemObject) return false;
	//
	//// 비활성화된 슬롯이면 Split 불가능.
	//if(!IsActive) return false; 
	//
	//// 안에 템 이미 있으면 false.
	//if(!IsEmptySlot()) return false;

	////Split은 Hometown이 아닐 시 불가.
	//if (GetWorld() && GetWorld()->GetGameInstance())
	//{
	//	if (UUserDataSubsystem* UserDataSubsystem = GetWorld()->GetGameInstance()->GetSubsystem<UUserDataSubsystem>())
	//	{
	//		if(UserDataSubsystem->GetUserMainPosition() != EUserMainPosition::Hometown)
	//		{
	//			return false;
	//		}
	//	}
	//}

	//// 이 슬롯에 넣을 수 있는지 체크.
	//bool IsSlotConfigAvailable = UInventoryFunctionLibrary::CheckAvailableItemSlotConfig(InItemObject->GetSubType(), ItemSlotType);
	//
	//return IsSlotConfigAvailable;

	return true;
}


void UItemSlotBase::OnItemObjectChangedEvent(UItemSlotBase* ChangedItemSlot, UItemObject* PrevItemObject, UItemObject* NextItemObject)
{
	//if (IsTopLeft)
	//{
	//	// 바뀐 무게를 이 슬롯을 소유하고있는 ItemObject에 적용.
	//	int LocalSubtractWeight = 0;
	//	int LocalAddWeight = 0;
	//	if (PrevItemObject)
	//	{
	//		LocalSubtractWeight = PrevItemObject->GetItemCurWeight();
	//	}
	//	if (NextItemObject)
	//	{
	//		LocalAddWeight = NextItemObject->GetItemCurWeight();
	//	}

	//	if (UObject* ItemSlotContainer = GetOuter())
	//	{
	//		if(UItemObject* OuterItemObject =  Cast<UItemObject>(ItemSlotContainer->GetOuter()))
	//		{
	//			// 이 슬롯을 소유하고있는 ItemObject의 무게 변경.
	//			OuterItemObject->UpdateItemCurWeight(LocalSubtractWeight, LocalAddWeight);
	//		}
	//	}
	//}
}