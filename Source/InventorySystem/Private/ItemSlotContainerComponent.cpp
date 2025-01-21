
#include "ItemSlotContainerComponent.h"

//#include "Inventory/InventoryFunctionLibrary.h"
#include "ItemObject.h"
#include "ItemSlotBase.h"
#include "ItemSlotContainerBase.h"


#define INVENTORY_LOG_ItemSlotContainerComponent(Verbosity, Format, ...) UE_LOG(InventoryLog, Verbosity, TEXT("ItemSlotContainerComponent::%hs - %s"), __FUNCTION__, *FString::Printf(Format, ##__VA_ARGS__))


UItemSlotContainerComponent::UItemSlotContainerComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void UItemSlotContainerComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


void UItemSlotContainerComponent::AddItemSlotContainer(class UItemSlotContainerBase* InItemSlotContainer)
{
	// 해당 타입의 ItemSlotContainer가 이미 존재하면 리턴.
	if (ItemSlotContainerMap.Contains(InItemSlotContainer->GetItemSlotContainerType()))
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("There is same ItemSlotContainerType in map already."));
		return;
	}
	
	// ItemSlotContainerMap에 추가.
	ItemSlotContainerMap.Add(InItemSlotContainer->GetItemSlotContainerType(), InItemSlotContainer);

	// 내부 아이템들 ItemMap에 추가.
	const TArray<UItemObject*>& ItemObjectList = InItemSlotContainer->GetAllItemObjects();
	for (UItemObject* ItemObject : ItemObjectList)
	{
		AddItemToItemMap(ItemObject);
	}
}



class UItemSlotContainerBase* UItemSlotContainerComponent::GetItemSlotContainerByType(EItemSlotContainerType InContainerType) const
{
	if (ItemSlotContainerMap.Contains(InContainerType))
	{
		return ItemSlotContainerMap[InContainerType];
	}
	return nullptr; 
}

class UItemSlotBase* UItemSlotContainerComponent::GetFirstMoveAvailableItemSlot(class UItemObject* InItemObject) const
{
	if (!InItemObject)
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject is nullptr."));
		return nullptr;
	}

	//if (!InventorySearchOrderTable)
	//{
	//	INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InventorySearchOrderTable is nullptr."));
	//	return nullptr;
	//}

	//FInventorySearchOrder* SearchOrderStruct = InventorySearchOrderTable->FindRow<FInventorySearchOrder>(FName("AutoMove"),TEXT("InventorySearchOrder"));
	//for (auto& ContainerType : SearchOrderStruct->SearchOrder)
	//{
	//	UItemSlotContainerBase* LocalItemSlotContainer = GetItemSlotContainerByType(ContainerType);
	//	if (LocalItemSlotContainer)
	//	{
	//		UItemSlotBase* LocalItemSlot = LocalItemSlotContainer->GetFirstMoveAvailableItemSlot(InItemObject);
	//		if(LocalItemSlot)
	//			return LocalItemSlot;
	//	}
	//}

	return nullptr;
}

bool UItemSlotContainerComponent::FindItemInItemMap(class UItemObject*& OutItemObject, const int64& InItemUID) const
{
	if (ItemMap.Contains(InItemUID))
	{
		OutItemObject = ItemMap[InItemUID];
		return true;
	}

	return false;
}

void UItemSlotContainerComponent::AddItemToItemMap(class UItemObject* InItemObject)
{
	if (!InItemObject)
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject is nullptr."));
		return;
	}
	if (InItemObject->GetItemUID() == 0)
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject UID is not Valid."));
		return;
	}

	if(ItemMap.Contains(InItemObject->GetItemUID()))
	{ 
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject UID is not Valid."));
		return;
	}

	// ItemMap에 추가.
	ItemMap.Add(InItemObject->GetItemUID(), InItemObject);

	// InItemObject에 컨테이너가 존재한다면 내부 아이템도 추가.
	if (UItemSlotContainerBase* Container = InItemObject->GetItemSlotContainer())
	{
		const TArray<UItemObject*>& ItemList = Container->GetAllItemObjects();
		for (UItemObject* Item : ItemList)
		{
			AddItemToItemMap(Item);
		}
	}
}

void UItemSlotContainerComponent::RemoveItemToItemMap(class UItemObject* InItemObject)
{
	if (!InItemObject)
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject is nullptr."));
		return;
	}
	if (InItemObject->GetItemUID() == 0)
	{
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject UID is not Valid."));
		return;
	}
	if(!ItemMap.Find(InItemObject->GetItemUID()))
	{ 
		INVENTORY_LOG_ItemSlotContainerComponent(Error, TEXT("InItemObject doesn't exist in ItemMap."));
		return;
	}

	// ItemMap에서 제거.
	ItemMap.Remove(InItemObject->GetItemUID());
	
	// InItemObject에 컨테이너가 존재한다면 내부 아이템도 제거.
	if (UItemSlotContainerBase* Container = InItemObject->GetItemSlotContainer())
	{
		const TArray<UItemObject*>& ItemList = Container->GetAllItemObjects();
		for (UItemObject* Item : ItemList)
		{
			RemoveItemToItemMap(Item);
		}
	}
}