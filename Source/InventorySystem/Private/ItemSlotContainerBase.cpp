// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemSlotContainerBase.h"

#include "ItemSlotContainerComponent.h"
#include "ItemSlotBase.h"
#include "ItemObject.h"


UItemSlotContainerBase::UItemSlotContainerBase()
{

}

UWorld* UItemSlotContainerBase::GetWorld() const
{
	if (GIsEditor && !GIsPlayInEditorWorld)	return nullptr;

	if (const UObject* Outer = GetOuter())
	{
		return Outer->GetWorld();
	}
	return nullptr;
}

UItemSlotContainerComponent* UItemSlotContainerBase::GetOwnerComponent()
{
	UObject* Outer = GetOuter();
	UObject* Result = nullptr;
	while (!Result)
	{
		if(Outer->IsA<UItemSlotContainerComponent>())
			Result = Outer;
		Outer = Outer->GetOuter();
	}
	
	return Cast<UItemSlotContainerComponent>(Result);
}


bool UItemSlotContainerBase::SetOuter(UObject* NewOuter)
{
	return Rename(nullptr, NewOuter);
}

void UItemSlotContainerBase::Initialize_Implementation()
{
	
}

void UItemSlotContainerBase::SetData_Implementation(EItemSlotContainerType InItemSlotContainerType, FIntPoint InSize)
{
	ItemSlotContainerType = InItemSlotContainerType;
	Size = InSize;
}

class UItemSlotBase* UItemSlotContainerBase::GetItemSlotBySlotType(EItemSlotType InSlotType) const
{
	UItemSlotBase* Result = nullptr;

	for (auto& ItemSlot : ItemSlotList)
	{
		if( InSlotType == ItemSlot->GetItemSlotType())
			Result = ItemSlot;
	}

	return Result;
}


class UItemSlotBase* UItemSlotContainerBase::GetFirstMoveAvailableItemSlot(UItemObject* InItemObject) const
{
	for (int i = 0; i<ItemSlotList.Num(); ++i)
	{
		if(IsSlotMoveAvailable(i,InItemObject))
			return ItemSlotList[i];
	}

	return nullptr;
}


TArray<class UItemSlotBase*> UItemSlotContainerBase::GetAllTopLeftItemSlotList() const
{
	TArray<UItemSlotBase*> Result;

	for (auto& ItemSlot : ItemSlotList)
	{
		if(ItemSlot->IsTopLeftSlot())
			Result.AddUnique(ItemSlot);
	}
	
	return Result;
}


TArray<class UItemObject*> UItemSlotContainerBase::GetItemObjectListByItemID(int32 InItemID, bool IsIncludeInside) const
{
	TArray<UItemObject*> Result;

	for (auto& ItemSlot : ItemSlotList)
	{
		UItemObject* LocalItemObject = ItemSlot->GetItemObject();
		if (LocalItemObject && ItemSlot->IsTopLeftSlot())
		{
			if (LocalItemObject->GetItemID() == InItemID)
			{
				Result.AddUnique(LocalItemObject);
			}
			if (IsIncludeInside) // 내부의 내부까지 검사.
			{
				if (UItemSlotContainerBase* LocalContainer = LocalItemObject->GetItemSlotContainer())
				{
					const TArray<UItemObject*>& LocalItemList = LocalContainer->GetItemObjectListByItemID(InItemID, IsIncludeInside);
					Result.Append(LocalItemList);
				}
			}
		}
	}
	
	return Result;
}

class UItemSlotBase* UItemSlotContainerBase::GetItemSlotByItemObject(UItemObject* InItemObject) const
{
	for (auto& ItemSlot : ItemSlotList)
	{
		if(ItemSlot->GetItemObject() == InItemObject)
			return ItemSlot;
	}
	
	return nullptr;
}

TArray<class UItemObject*> UItemSlotContainerBase::GetAllItemObjects(bool IsIncludeInside) const
{
	TArray<UItemObject*> Result;

	const TArray<UItemSlotBase*>& LocalTopLeftItemSlotList = GetAllTopLeftItemSlotList();
	for (auto& ItemSlot : LocalTopLeftItemSlotList)
	{
			UItemObject* LocalItem = ItemSlot->GetItemObject();
			Result.AddUnique(LocalItem);

			if(IsIncludeInside)
			{ 
				//컨테이너를 가진 아이템이라면 그 컨테이너 내부에있는 아이템들도 싹다 긁어옴.
				UItemSlotContainerBase* LocalContainer = LocalItem->GetItemSlotContainer();
				if (LocalContainer)
				{
					Result.Append(LocalContainer->GetAllItemObjects(IsIncludeInside));
				}
			}
	}
	
	return Result;
}


bool UItemSlotContainerBase::HasItem(class UItemObject* InItemObject, bool IsIncludeInside) const
{
	//이 컨테이너가 인자로 들어온 아이템을 가지고있는지 판단은 Outer기반으로 진행.
	if(!InItemObject) return false;

	const UObject* LocalOuter = InItemObject->GetOuter();
	while(LocalOuter)
	{
		if(LocalOuter == this)
		 return true;

		LocalOuter = LocalOuter->GetOuter();
	}
	return false;
}


bool UItemSlotContainerBase::CheckAddAvailable(class UItemObject* InItemObject)
{
	UItemSlotBase* LocalItemSlot = GetFirstMoveAvailableItemSlot(InItemObject);

	if (LocalItemSlot)
	{
		return true;
	}

	return false;
}


bool UItemSlotContainerBase::AddItem(int32& AddedSlotIndex, class UItemObject* InItemObject)
{
	UItemSlotBase* LocalItemSlot = GetFirstMoveAvailableItemSlot(InItemObject);

	if (LocalItemSlot)
	{
		AddedSlotIndex = LocalItemSlot->GetSlotIndex();
		AddItemToIndex(InItemObject, AddedSlotIndex);
		return true;
	}

	AddedSlotIndex = -1;
	return false;
}

bool UItemSlotContainerBase::RemoveItem(class UItemObject* InItemObject)
{
	for (UItemSlotBase* ItemSlot : ItemSlotList)
	{
		UItemObject* LocalItemObject = ItemSlot->GetItemObject();
		if (LocalItemObject == InItemObject)
		{
			RemoveItemToIndex(ItemSlot->GetSlotIndex());
			return true;
		}
	}

	// 아이템을 못찾은경우.
	return false;
}

bool UItemSlotContainerBase::RemoveItemByItemUID(int64 InItemUID)
{
	for (UItemSlotBase* Slot : ItemSlotList)
	{
		UItemObject* Item = Slot->GetItemObject();
		if (Item && Item->GetItemUID() == InItemUID)
		{
			RemoveItem(Item);
			return true;
		}
	}

	// 아이템을 못찾은경우.
	return false;
}

bool UItemSlotContainerBase::RemoveAllItems()
{
	for (UItemSlotBase* Slot : ItemSlotList)
	{
		if (!Slot->IsEmptySlot())
		{
			RemoveItemToIndex(Slot->GetSlotIndex());
		}
	}

	return true;
}



bool UItemSlotContainerBase::AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex)
{
	return true;
}

bool UItemSlotContainerBase::RemoveItemToIndex_Implementation(int32 InIndex) 
{
	return true;
}

bool UItemSlotContainerBase::IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const
{
	if (!ItemSlotList.IsValidIndex(InIndex)) return false;
	UItemSlotBase* TargetSlot = ItemSlotList[InIndex];
	if (TargetSlot->GetItemObject() == InItemObject && TargetSlot->IsTopLeftSlot())
	{
		// 아이템이 있던 제자리 그대로일때는 false처리.
		return false;
	}

	UItemObject* OuterItemObject = Cast<UItemObject>(GetOuter());
	if (OuterItemObject)
	{
		// InItemObject를 이 컨테이너의 Outer로 가지고있다면(this가 InItemObject안에 들어있다면) false처리.
		if (GetOuter() == InItemObject || OuterItemObject->HasItemObjectAsParent(InItemObject))
		{
			return false;
		}
	}

	return true;
}

bool UItemSlotContainerBase::IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const
{
	return true;
}

