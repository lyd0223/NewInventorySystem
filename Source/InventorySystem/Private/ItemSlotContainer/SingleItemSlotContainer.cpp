
#include "ItemSlotContainer/SingleItemSlotContainer.h"

USingleItemSlotContainer::USingleItemSlotContainer()
{

}

void USingleItemSlotContainer::Initialize_Implementation()
{
	Super::Initialize();
}

bool USingleItemSlotContainer::AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex)
{
	return true;
}
	
bool USingleItemSlotContainer::RemoveItemToIndex_Implementation(int32 InIndex)
{
	return true;
}

bool USingleItemSlotContainer::IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const
{
	return true;
}

bool USingleItemSlotContainer::IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const
{
	return true;
}
