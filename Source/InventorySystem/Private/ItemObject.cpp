// Fill out your copyright notice in the Description page of Project Settings.


#include "ItemObject.h"

#include "ItemSlotContainerComponent.h"

#include "ItemSlotBase.h"
#include "ItemSlotContainerBase.h"


UItemObject::UItemObject()
{

}

UWorld* UItemObject::GetWorld() const
{
	if (GIsEditor && !GIsPlayInEditorWorld)	return nullptr;

	if (const UObject* Outer = GetOuter())
	{
		return Outer->GetWorld();
	}
	return nullptr;
}

UItemSlotContainerComponent* UItemObject::GetOwnerComponent()
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

bool UItemObject::SetOuter(UObject* NewOuter)
{
	return Rename(nullptr, NewOuter);
}

void UItemObject::Initialize_Implementation()
{
	if (GIsEditor && !GIsPlayInEditorWorld)	return;

}


void UItemObject::SetData(int64 InUID, int32 InItemID, int32 InItemCount, FGameplayTag InItemType)
{
	UID = InUID;
	ItemID = InItemID;
	ItemCount = InItemCount;
	ItemType = InItemType;
}



UItemObject* UItemObject::GetParentItemObject() const
{
	UItemObject* Result = nullptr;

	UObject* OuterSlot = GetOuter();
	if (OuterSlot && OuterSlot->IsA<UItemSlotBase>())
	{
		UObject* OuterContainer = OuterSlot->GetOuter();
		if (OuterContainer && OuterContainer->IsA<UItemSlotContainerBase>())
		{
			Result = Cast<UItemObject>(OuterContainer->GetOuter());
		}
	}

	return Result;
}

bool UItemObject::HasItemObjectAsParent(UItemObject* InItemObject) const
{
	UItemObject* LocalParentItem = GetParentItemObject();
	while (LocalParentItem)
	{
		if (LocalParentItem == InItemObject)
		{
			return true;
		}
		LocalParentItem = LocalParentItem->GetParentItemObject();
	}
	return false;
}

FItemStruct UItemObject::MakeItemStruct() const 
{ 
	return FItemStruct(
	UID, 
	ItemID, 
	ItemCount
	); 
}