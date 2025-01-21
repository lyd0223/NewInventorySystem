// Fill out your copyright notice in the Description page of Project Settings.

#include "InventoryComponent.h"

#include "ItemObject.h"
#include "ItemSlotBase.h"
#include "ItemSlotContainerBase.h"

DEFINE_LOG_CATEGORY(InventoryLog);

#define INVENTORY_LOG(Verbosity, Format, ...) UE_LOG(InventoryLog, Verbosity, TEXT("InventoryComponent::%hs - %s"), __FUNCTION__, *FString::Printf(Format, ##__VA_ARGS__))


// TEnumRange<EHARItemSlotContainerType> ����� ���� ��ũ�� ����.
ENUM_RANGE_BY_COUNT(EItemSlotContainerType, EItemSlotContainerType::Max)



// Sets default values for this component's properties
UInventoryComponent::UInventoryComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UInventoryComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}



// Called every frame
void UInventoryComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (HasBegunPlay())
	{
		while (!MessageQueue.IsEmpty())
		{
			TSharedPtr<FItemMessageBase> Msg = *(MessageQueue.Peek());

			switch (Msg->MessageType)
			{
				case EItemMessageType::ModifyItemSlot :
				OnRecievedModifyItemSlotMessage(*(Msg->MoidfyItemSlotMessage.Get()));
				break;

				case EItemMessageType::ModifyItemVariable : 
				OnRecievedModifyItemVariableMessage(*(Msg->ModifyItemVariableMessage.Get()));
				break;

				case EItemMessageType::MoveItem : 
				OnRecievedMoveItemMessage(*(Msg->MoveItemMessage.Get()));
				break;
			}

			MessageQueue.Pop();
		}
	}
}

class APlayerController* UInventoryComponent::GetOwnerPC() const
{
	if (GetOwner())
	{
		 APawn* OwnerPawn = Cast<APawn>(GetOwner());
		 if(OwnerPawn)
		 {
			 return Cast<APlayerController>(OwnerPawn->GetController());
		 }
	}

	return nullptr;
}


bool UInventoryComponent::PickUpItem(class UItemObject* InItemObject)
{	
	if (!GetOwner() && !GetOwner()->HasAuthority())
	{
		INVENTORY_LOG(Error, TEXT("This function is AuthorityOnly. Do not call this function in Remote."));
		return false;
	}
	if (!InItemObject)
	{
		INVENTORY_LOG(Error, TEXT("InItemObject is nullptr."));
		return false;
	}

	//// ����, �κ��丮�� ���� ItemID�� ���� �������� �ִٸ� ��ħ.
	//// �ش� �ڵ�� ���� ���������� StackableItem �����Ǹ� ����ų� �ּ�ó���� ����. - 23.12.29 ���� ������� ���� ���� �Ӽ���
	//const TArray<UItemObject*>& ItemList = GetItemObjectListByItemID(InItemObject->GetItemID_Native(), false);
	//for (UItemObject* Item : ItemList)
	//{
	//	if (Item->CheckMergeAvailable_Native(InItemObject))
	//	{
	//		int32 StackLimit = Item->GetItemData_Native().StackLimit;								// ���� ���� ����
	//		int32 AddedCount = Item->GetItemCount_Native() + InItemObject->GetItemCount_Native();	// ������ ����.

	//		// �ش�˻�� CheckMergeAvailable���� �������ʱ⶧����, �̰����� ���� ����.
	//		if (StackLimit >= AddedCount) // ������ ������ ���� ���� �������� ������.
	//		{
	//			Item->SetItemCount_Native(AddedCount);
	//			UItemSlotBase* LocalSlot = Cast<UItemSlotBase>(Item->GetOuter());
	//			if (!LocalSlot)
	//			{
	//				INVENTORY_LOG(Error, TEXT("Item's OuterSlot is nullptr."));
	//				return false;
	//			}

	//			FModifyItemVariableMessage Msg;
	//			Msg.ItemSlotInfo = LocalSlot->ExtractItemSlotInfo();
	//			Msg.VariableType = EItemVariableType::Count;
	//			Msg.VariableValue = Item->GetItemVariableByType_Native(EItemVariableType::Count);
	//			SendModifyItemVariableMessage(Msg);

	//			return true;
	//		}
	//	}
	//}


	//// �κ��丮�� ����� ã�Ƽ� ����.
	//if (!InventorySearchOrderTable_Native)
	//{
	//	INVENTORY_LOG(Error, TEXT("InventorySearchOrderTable_Native is nullptr."), TEXT("PickUpItem"));
	//	return false;
	//}
	//
	//FInventorySearchOrder* SearchOrderStruct = InventorySearchOrderTable_Native->FindRow<FInventorySearchOrder>(FName("PickUp"),TEXT("InventorySearchOrder"));
	//for (auto& ContainerType : SearchOrderStruct->SearchOrder)
	//{
	//	UItemSlotContainerBase* LocalContainer = GetItemSlotContainerByType_Native(ContainerType);
	//	if (LocalContainer)
	//	{
	//		UItemSlotBase* LocalSlot = LocalContainer->GetFirstMoveAvailableItemSlot(InItemObject);
	//		if (LocalSlot)
	//		{
	//			// �����̳ʿ� ����.
	//			LocalContainer->AddItemToIndex(InItemObject, LocalSlot->GetSlotIndex());
	//			if (this->GetClass()->ImplementsInterface(UContainerOwnerInterface::StaticClass()))
	//			{
	//				IContainerOwnerInterface::Execute_AddItemToItemMap_Interface(this, InItemObject);
	//			}

	//			// �ش� �����ۿ� �ĺ� �÷��̾� �߰�.
	//			InItemObject->AddIdentifiedPlayer_Native(GetOwner());

	//			// ����ȭ.
	//			ModifyItemSlot_Inside(EItemModifyType::General, LocalSlot);
	//			
	//			return true;
	//		}

	//	}
	//}

	return false;
}

bool UInventoryComponent::CheckItemPickUpAvailable(int32 InItemID) const
{
	/*if (!InventorySearchOrderTable_Native)
	{
		INVENTORY_LOG(Error, TEXT("InventorySearchOrderTable_Native is nullptr."));
		return false;
	}

	FInventorySearchOrder* SearchOrderStruct = InventorySearchOrderTable_Native->FindRow<FInventorySearchOrder>(FName("PickUp"), TEXT("InventorySearchOrder"));
	for (auto& ContainerType : SearchOrderStruct->SearchOrder)
	{
		UItemSlotContainerBase* LocalContainer = GetItemSlotContainerByType_Native(ContainerType);
		if (LocalContainer)
		{
			const TArray<UItemSlotBase*>& LocalItemSlotList = LocalContainer->GetItemSlotList_Native();
			for (int i = 0; i < LocalItemSlotList.Num(); ++i)
			{
				if (LocalContainer->IsSlotMoveAvailableByItemID(i, InItemID))
				{
					return true;
				}
			}
		}
	}*/
	return false;
}

void UInventoryComponent::ModifyItemSlot_Inside(EItemModifyType InItemModifyType, class UItemSlotBase* InItemSlot)
{
	//if (!GetOwner() && !GetOwner()->HasAuthority())
	//{
	//	INVENTORY_LOG(Error, TEXT("This function is AuthorityOnly. Do not call this function in Remote."));
	//	return;
	//}
	//
	//if (!InItemSlot)
	//{
	//	INVENTORY_LOG(Error, TEXT("InItemSlot is nullptr."));
	//	return;
	//}
	//
	//if (UKismetSystemLibrary::IsStandalone(GetWorld())) 
	//{
	//	// Standalone�Ͻ� Modify �ʿ���⶧����, UI�� ���Ž�Ű�� ����. Ʃ�丮�󶧹��� �߰���. - 24.07.31 �Ӽ���
	//	OnInventoryRefreshed.Broadcast();
	//	return;
	//}

	//// ����ȭ RPC. ���� �����۱��� ����ȭ��Ŵ.
	//FModifyItemSlotMessage Msg;
	//Msg.ItemModifyType = InItemModifyType;
	//Msg.ItemSlotInfo = InItemSlot->ExtractItemSlotInfo();
	//Msg.ModifyItemData = InItemSlot->MakeModifyItemData_Native(GetOwner());
	//
	//SendModifyItemSlotMessage(Msg);
	//
	//if (UItemObject* LocalItem = InItemSlot->GetItemObject_Native())						
	//{
	//	if (UItemSlotContainerBase* LocalContainer = LocalItem->GetItemSlotContainer_Native())	//�ش罽�Կ� �����ϴ� �������� �����̳ʸ� �������ִٸ�
	//	{
	//		const TArray<UItemSlotBase*>& LocalTopLeftItemSlotList = LocalContainer->GetAllTopLeftItemSlotList(); // �����̳� �ȿ� ������ ��� ����ȭ.
	//		for (UItemSlotBase* ItemSlot : LocalTopLeftItemSlotList)
	//		{
	//			ModifyItemSlot_Inside(InItemModifyType, ItemSlot);
	//		}
	//	}
	//}
}

void UInventoryComponent::ModifyItemVariable(class UItemObject* InItemObject, EItemVariableType InItemVariableType, bool Reliable)
{
	/*if (!GetOwner() && !GetOwner()->HasAuthority())
	{
		INVENTORY_LOG(Error, TEXT("This function is AuthorityOnly. Do not call this function in Remote."));
		return;
	}

	if (!InItemObject)
	{
		INVENTORY_LOG(Error, TEXT("InItemObject is nullptr."));
		return;
	}

	FModifyItemVariableMessage Msg;
	UItemSlotBase* ItemSlot = Cast<UItemSlotBase>(InItemObject->GetOuter());
	if (!ItemSlot)
	{
		INVENTORY_LOG(Error, TEXT("InItemObject's Outer is not ItemSlot."));
		return;
	}
	Msg.ItemSlotInfo = ItemSlot->ExtractItemSlotInfo();
	Msg.VariableType = InItemVariableType;
	Msg.VariableValue = InItemObject->GetItemVariableByType_Native(InItemVariableType);

	if (Reliable)
	{
		SendModifyItemVariableMessage(Msg);
	}
	else
	{
		SendModifyItemVariableMessage_Unreliable(Msg);
	}*/
}


UItemSlotBase* UInventoryComponent::GetItemSlotBySlotInfo(const FItemSlotInfo& InItemSlotInfo) const
{
	//if (!InItemSlotInfo.ContainerComponent)
	//{
	//	INVENTORY_LOG(Error, TEXT("InItemSlotInfo ContainerComponent is nullptr."));
	//	return nullptr;
	//}
	//if (!InItemSlotInfo.ContainerComponent->GetClass()->ImplementsInterface(UContainerOwnerInterface::StaticClass()))
	//{
	//	INVENTORY_LOG(Error, TEXT("InContainerOwner is not implement IContainerOwnerInterface."));
	//	return nullptr;
	//}

	//UItemSlotContainerBase* LocalContainer = nullptr;

	//UItemObject* LocalParentItem = nullptr;
	//IContainerOwnerInterface::Execute_FindItemInItemMap_Interface(InItemSlotInfo.ContainerOwner, LocalParentItem, InItemSlotInfo.ParentItemUID);
	//if (LocalParentItem == nullptr)	// LocalParentItem�� ã�����Ѵٸ�, LocalContainer�� ��ƮContainer�� ����.
	//{
	//	LocalContainer = IContainerOwnerInterface::Execute_GetItemSlotContainerByType_Interface(InItemSlotInfo.ContainerOwner, InItemSlotInfo.TopContainerType);
	//}
	//else
	//{
	//	LocalContainer = LocalParentItem->GetItemSlotContainer_Native();
	//}

	//if (!LocalContainer)
	//{
	//	INVENTORY_LOG(Error, TEXT("LocalContainer is nullptr."));
	//	return nullptr;
	//}

	//return LocalContainer->GetItemSlotByIndex_Native(InItemSlotInfo.SlotIndex);

	return nullptr;
}


void UInventoryComponent::OnRecievedModifyItemSlotMessage(const FModifyItemSlotMessage& Msg)
{
	//UItemSlotBase* TargetSlot = GetItemSlotBySlotInfo(Msg.ItemSlotInfo);

	//if (!TargetSlot)
	//{
	//	INVENTORY_LOG(Error, TEXT("TargetSlot is nullptr."));
	//	return;
	//}

	//UItemSlotContainerBase* TargetSlotContainer = Cast<UItemSlotContainerBase>(TargetSlot->GetOuter());
	//if (!TargetSlotContainer)
	//{
	//	INVENTORY_LOG(Error, TEXT("TargetSlot must exist in ItemSlotContainer."));
	//	return;
	//}

	//// ������ ������� ������.
	//if (!TargetSlot->IsEmptySlot())
	//{
	//	UItemObject* TargetItemObject = TargetSlot->GetItemObject_Native();
	//	if (!TargetItemObject)
	//	{
	//		INVENTORY_LOG(Error, TEXT("TargetSlot is not empty slot, but TargetSlot has null ItemObject."));
	//		return;
	//	}
	//	//ItemCount�� 0�ΰ��, ����.
	//	if (Msg.ModifyItemData.ItemStruct.ItemCount == 0)
	//	{
	//		OnClientItemModified.Broadcast(Msg.ItemModifyType, TargetItemObject);

	//		IContainerOwnerInterface::Execute_RemoveItemToItemMap_Interface(Msg.ItemSlotInfo.ContainerOwner, TargetItemObject);
	//		TargetSlotContainer->RemoveItemToIndex(TargetSlot->GetSlotIndex());

	//		TargetItemObject->DestroyObject();
	//	}
	//	//ItemCount�� 0�� �ƴѰ��, ������ ���� �ٽ�����.
	//	else
	//	{
	//		if(TargetItemObject->GetItemUID_Native() == Msg.ModifyItemData.ItemStruct.ItemUID)
	//		{ 
	//			TargetItemObject->SetData(Msg.ModifyItemData.ItemStruct);

	//			OnClientItemModified.Broadcast(Msg.ItemModifyType, TargetItemObject);
	//		}
	//		else
	//		{
	//			//�����Ͱ� �������̶�� ���� �� ���°����.. ���� �����Ͱ� �߸���.
	//			INVENTORY_LOG(Error, TEXT("ModifyItemData is not valid."));
	//			return;
	//		}
	//	}
	//} 
	//// ������ ���������.
	//else
	//{
	//	// ������ ����.
	//	UItemObject* LocalCreatedItemObject = nullptr;

	//	
	//	AGameStateBase* GameState = GetWorld()->GetGameState();
	//	if (GameState->GetClass()->ImplementsInterface(UGameStateInterface::StaticClass()))
	//	{
	//		LocalCreatedItemObject = IGameStateInterface::Execute_CreateItemObject_Inter(GameState, Msg.ModifyItemData.ItemStruct);
	//		if(!LocalCreatedItemObject)
	//		{
	//			INVENTORY_LOG(Error, TEXT("ItemCreate Failed."));
	//			return;
	//		}
	//		//������ �ĺ� ���� ����.
	//		if(Msg.ModifyItemData.IsIdentifiedItem)
	//		{ 
	//			LocalCreatedItemObject->AddIdentifiedPlayer_Native(GetOwner());
	//		}
	//		//������ �������� �����̳� �������̶�� �����̳� �ĺ����� ����.
	//		if (LocalCreatedItemObject->IsContainerItem() && LocalCreatedItemObject->GetItemSlotContainer_Native() && Msg.ModifyItemData.IsIdentifiedContainer)
	//		{
	//			LocalCreatedItemObject->GetItemSlotContainer_Native()->AddIdentifiedPlayer_Native(GetOwner());
	//		}

	//		//������ ã�� ���Կ� ����.
	//		TargetSlotContainer->AddItemToIndex(LocalCreatedItemObject, TargetSlot->GetSlotIndex());
	//		IContainerOwnerInterface::Execute_AddItemToItemMap_Interface(Msg.ItemSlotInfo.ContainerOwner, LocalCreatedItemObject);
	//	}

	//	OnClientItemModified.Broadcast(Msg.ItemModifyType, TargetSlot->GetItemObject_Native());
	//}
	//

	////���� ����.
	//OnInventoryRefreshed.Broadcast();
}

void UInventoryComponent::OnRecievedModifyItemVariableMessage(const FModifyItemVariableMessage& Msg)
{
	//// ���� ���� ã��,
	//UItemSlotBase* LocalItemSlot = GetItemSlotBySlotInfo(Msg.ItemSlotInfo);

	//// ������ �����ͼ� ī��Ʈ ����.
	//if(!LocalItemSlot)
	//{
	//	INVENTORY_LOG(Error, TEXT("Could not find ItemSlot ."));
	//	return;
	//}
	//UItemObject* LocalItemObject = LocalItemSlot->GetItemObject_Native();
	//if(!LocalItemObject)
	//{
	//	INVENTORY_LOG(Error, TEXT("LocalItemSlot does not have Item."));
	//	return;
	//}
	//LocalItemObject->SetItemVariableByType_Native(Msg.VariableType, Msg.VariableValue);
	//
	////���� ����.
	//OnInventoryRefreshed.Broadcast();
}

void UInventoryComponent::OnRecievedMoveItemMessage(const FMoveItemMessage& Msg)
{
	//// ���� ���� ã��,
	//UItemSlotBase* LocalFromItemSlot = GetItemSlotBySlotInfo(Msg.FromItemSlotInfo);
	//UItemSlotBase* LocalToItemSlot = GetItemSlotBySlotInfo(Msg.ToItemSlotInfo);

	//// �̵��� ������ ������
	//if (!LocalFromItemSlot || !LocalToItemSlot)
	//{
	//	INVENTORY_LOG(Error, TEXT("ItemSlot is nullptr. Could not find ItemSlot."));
	//	return;
	//}
	//UItemObject* LocalMoveItemObject = LocalFromItemSlot->GetItemObject_Native();
	//if (!LocalMoveItemObject)
	//{
	//	INVENTORY_LOG(Error, TEXT("LocalFromItemSlot does not have Item."));
	//	return;
	//}

	//// ItemSlotContainer �����ͼ� FromSlot Remove & To Slot Add.
	//UItemSlotContainerBase* LocalFromItemSlotContainer  = Cast<UItemSlotContainerBase>(LocalFromItemSlot->GetOuter());
	//UItemSlotContainerBase* LocalToItemSlotContainer = Cast<UItemSlotContainerBase>(LocalToItemSlot->GetOuter());
	//if (!LocalFromItemSlotContainer || !LocalToItemSlotContainer)
	//{
	//	INVENTORY_LOG(Error, TEXT("ItemSlot must exist in ItemSlotContainer."));
	//	return;
	//}

	//IContainerOwnerInterface::Execute_RemoveItemToItemMap_Interface(Msg.FromItemSlotInfo.ContainerOwner, LocalFromItemSlot->GetItemObject_Native());
	//LocalFromItemSlotContainer->RemoveItemToIndex(LocalFromItemSlot->GetSlotIndex());
	//
	//if(!LocalToItemSlotContainer) return;
	//LocalToItemSlotContainer->AddItemToIndex(LocalMoveItemObject, LocalToItemSlot->GetSlotIndex());
	//IContainerOwnerInterface::Execute_AddItemToItemMap_Interface(Msg.ToItemSlotInfo.ContainerOwner, LocalMoveItemObject);


	//OnClientItemModified.Broadcast(EItemModifyType::Move, LocalMoveItemObject);

	////���� ����.
	//OnInventoryRefreshed.Broadcast();
}

#pragma endregion 

#pragma region D->C RPC

void UInventoryComponent::SendModifyItemSlotMessage_Implementation(const FModifyItemSlotMessage& Msg)
{
	TSharedPtr<FModifyItemSlotMessage> TempMsg(new FModifyItemSlotMessage(Msg));
	TSharedPtr<FItemMessageBase> MsgBase(new FItemMessageBase(EItemMessageType::ModifyItemSlot, TempMsg));
	MessageQueue.Enqueue(MsgBase);
}

void UInventoryComponent::SendModifyItemVariableMessage_Implementation(const FModifyItemVariableMessage& Msg)
{
	TSharedPtr<FModifyItemVariableMessage> TempMsg(new FModifyItemVariableMessage(Msg));
	TSharedPtr<FItemMessageBase> MsgBase(new FItemMessageBase(EItemMessageType::ModifyItemVariable, TempMsg));
	MessageQueue.Enqueue(MsgBase);
}

void UInventoryComponent::SendModifyItemVariableMessage_Unreliable_Implementation(const FModifyItemVariableMessage& Msg)
{
	TSharedPtr<FModifyItemVariableMessage> TempMsg(new FModifyItemVariableMessage(Msg));
	TSharedPtr<FItemMessageBase> MsgBase(new FItemMessageBase(EItemMessageType::ModifyItemVariable, TempMsg));
	MessageQueue.Enqueue(MsgBase);
}

void UInventoryComponent::SendMoveItemMessage_Implementation(const FMoveItemMessage& Msg)
{
	TSharedPtr<FMoveItemMessage> TempMsg(new FMoveItemMessage(Msg));
	TSharedPtr<FItemMessageBase> MsgBase(new FItemMessageBase(EItemMessageType::MoveItem, TempMsg));
	MessageQueue.Enqueue(MsgBase);
}


#pragma endregion 



#pragma region C -> D
void UInventoryComponent::Request_DropItem(class UItemSlotBase* DropItemSlot)
{

}

void UInventoryComponent::Request_MoveItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot)
{

}

void UInventoryComponent::Request_SplitItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot, int32 InSplitCount)
{

}

void UInventoryComponent::Request_MergeItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot)
{

}

void UInventoryComponent::Request_PutInItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot)
{

}

void UInventoryComponent::Request_EquipItem(class UItemSlotBase* InItemSlot)
{

}

void UInventoryComponent::Request_UnEquipItem(class UItemSlotBase* InItemSlot)
{

}

void UInventoryComponent::Request_UseItem(class UItemSlotBase* InItemSlot)
{

}

void UInventoryComponent::Request_AutoMoveItem(class UItemSlotBase* InItemSlot)
{
	
}

#pragma endregion
