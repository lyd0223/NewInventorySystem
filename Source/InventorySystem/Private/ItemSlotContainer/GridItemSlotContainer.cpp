
#include "ItemSlotContainer/GridItemSlotContainer.h"

UGridItemSlotContainer::UGridItemSlotContainer()
{

}

void UGridItemSlotContainer::Initialize_Implementation()
{
	Super::Initialize();
}

bool UGridItemSlotContainer::AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex)
{
	return true;
}
	
bool UGridItemSlotContainer::RemoveItemToIndex_Implementation(int32 InIndex)
{
	return true;
}

bool UGridItemSlotContainer::IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const
{
	return true;
}

bool UGridItemSlotContainer::IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const
{
	return true;
}
