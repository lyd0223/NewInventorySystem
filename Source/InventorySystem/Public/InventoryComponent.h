// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "InventoryEnums.h"

#include "InventoryComponent.generated.h"

/*
인벤토리 시스템의 D-C 동기화 담당.
Character에 붙여서 사용권장.
*/
UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UInventoryComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UInventoryComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
private:
	// 클라이언트가 서버에게 받은 RPC 메시지 처리를위한 큐.
	TQueue<TSharedPtr<FItemMessageBase>> MessageQueue;


//Delegates
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_Noparam);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Inventory 관련 UI Refresh 필요시 발생."))
	FDelegate_Noparam OnInventoryRefreshed;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "InventoryBaseWidget UI Open 후 발생."))
	FDelegate_Noparam OnInventoryOpened;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "InventoryBaseWidget UI Close 후 발생."))
	FDelegate_Noparam OnInventoryClosed;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate_Oneparam, UItemObject*, InItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Item이 버려졌을때 발생. 서버만 호출됨."))
	FDelegate_Oneparam OnDediItemDropped;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegate_OnClientItemModified, EItemModifyType, InItemModifyType , class UItemObject*, InItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Item이 동기화 되었을때 발생. 클라만 호출됨."))
	FDelegate_OnClientItemModified OnClientItemModified;

public:
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|Getter/Setter")
	class APlayerController* GetOwnerPC() const;

	
	//아이템 줍기. 
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	bool PickUpItem(class UItemObject* InItemObject);

	//아이템 줍기 가능한지 체크.
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|Check")
	bool CheckItemPickUpAvailable(int32 InItemID) const;
	
	// 해당 아이템 슬롯 동기화시켜줌. 내부의 내부까지 싹다 동기화.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	void ModifyItemSlot_Inside(EItemModifyType InItemModifyType, class UItemSlotBase* InItemSlot);

	// 해당 아이템의 내부 값 동기화시켜줌.
	// @param Reliable RPC Reliable 여부.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	void ModifyItemVariable(class UItemObject* InItemObject, EItemVariableType InItemVariableType, bool Reliable = true);
	

protected:
	// RPC를쏘거나 동기화를 위해 InItemSlotInfo에 해당하는 아이템 슬롯을 가져옴.
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|GameServer", meta=(BlueprintProtected))
	class UItemSlotBase* GetItemSlotBySlotInfo(const FItemSlotInfo& InItemSlotInfo) const;

	
	/* OnRecievedModifyItemSlotMessage
	 아이템 슬롯 동기화시 사용. 아이템이 제거되는 경우(아이템 드랍, 사용 등) ModifyItemData 비워서 호출하면됨.
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(BlueprintProtected))
	void OnRecievedModifyItemSlotMessage(const FModifyItemSlotMessage& Msg);

	/* OnRecievedModifyItemVariableMessage
	 아이템이 가진 Variable(Count, Weight, Durability 등)을 동기화시킬때 사용. 
	 OnRecievedModifyItemSlotMessage를 사용해도 되지만, 불필요한 데이터또한 RPC로 넘기기때문에, 한가지 값을 변경시키는 경우 이 함수를 사용.
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(BlueprintProtected))
	void OnRecievedModifyItemVariableMessage(const FModifyItemVariableMessage& Msg);

	/* OnRecievedMoveItemMessage
	* 아이템 이동시 사용. 
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(BlueprintProtected))
	void OnRecievedMoveItemMessage(const FMoveItemMessage& Msg);

	
#pragma region D->C
	UFUNCTION(BlueprintCallable, Client, Reliable, meta=(BlueprintProtected))
	void SendModifyItemSlotMessage(const FModifyItemSlotMessage& Msg);
	void SendModifyItemSlotMessage_Implementation(const FModifyItemSlotMessage& Msg);
	
	UFUNCTION(BlueprintCallable, Client, Reliable, meta=(BlueprintProtected))
	void SendModifyItemVariableMessage(const FModifyItemVariableMessage& Msg);
	void SendModifyItemVariableMessage_Implementation(const FModifyItemVariableMessage& Msg);
	
	/* SendModifyItemVariableMessage_Unreliable
	 값이 변경되는걸 비일비재하게 RPC를 날리는경우가 있어서, Unreliable또한 하나 만듬.
	 내부적으로는 SendModifyItemVariableMessage와 같은 동작함.
	 다만, Unreliable이기에 클라이언트 수신 여부는 보장하지못함.
	*/
	UFUNCTION(BlueprintCallable, Client, Unreliable, meta=(BlueprintProtected))
	void SendModifyItemVariableMessage_Unreliable(const FModifyItemVariableMessage& Msg);
	void SendModifyItemVariableMessage_Unreliable_Implementation(const FModifyItemVariableMessage& Msg);

	UFUNCTION(BlueprintCallable, Client, Reliable, meta=(BlueprintProtected))
	void SendMoveItemMessage(const FMoveItemMessage& Msg);
	void SendMoveItemMessage_Implementation(const FMoveItemMessage& Msg);
#pragma endregion

public:	

#pragma region C -> D
	//데디에 Drop 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_DropItem(class UItemSlotBase* DropItemSlot);

	//데디에 Swap 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_MoveItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);

	//데디에 Split 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_SplitItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot, int32 InSplitCount);
	
	//데디에 Merge 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_MergeItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);
	
	//데디에 PutIn 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_PutInItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);

	//데디에 Equip 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_EquipItem(class UItemSlotBase* InItemSlot);

	//데디에 UnEquip 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_UnEquipItem(class UItemSlotBase* InItemSlot);

	//데디에 ItemUse 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_UseItem(class UItemSlotBase* InItemSlot);
	
	//데디에 AutoMoveItem(자동으로 빈슬롯으로 이동) 요청.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_AutoMoveItem(class UItemSlotBase* InItemSlot);

#pragma endregion

};
