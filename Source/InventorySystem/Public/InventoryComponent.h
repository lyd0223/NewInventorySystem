// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "InventoryEnums.h"

#include "InventoryComponent.generated.h"

/*
�κ��丮 �ý����� D-C ����ȭ ���.
Character�� �ٿ��� ������.
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
	// Ŭ���̾�Ʈ�� �������� ���� RPC �޽��� ó�������� ť.
	TQueue<TSharedPtr<FItemMessageBase>> MessageQueue;


//Delegates
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDelegate_Noparam);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Inventory ���� UI Refresh �ʿ�� �߻�."))
	FDelegate_Noparam OnInventoryRefreshed;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "InventoryBaseWidget UI Open �� �߻�."))
	FDelegate_Noparam OnInventoryOpened;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "InventoryBaseWidget UI Close �� �߻�."))
	FDelegate_Noparam OnInventoryClosed;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FDelegate_Oneparam, UItemObject*, InItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Item�� ���������� �߻�. ������ ȣ���."))
	FDelegate_Oneparam OnDediItemDropped;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDelegate_OnClientItemModified, EItemModifyType, InItemModifyType , class UItemObject*, InItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "Event", meta = (ToolTip = "Item�� ����ȭ �Ǿ����� �߻�. Ŭ�� ȣ���."))
	FDelegate_OnClientItemModified OnClientItemModified;

public:
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|Getter/Setter")
	class APlayerController* GetOwnerPC() const;

	
	//������ �ݱ�. 
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	bool PickUpItem(class UItemObject* InItemObject);

	//������ �ݱ� �������� üũ.
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|Check")
	bool CheckItemPickUpAvailable(int32 InItemID) const;
	
	// �ش� ������ ���� ����ȭ������. ������ ���α��� �ϴ� ����ȭ.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	void ModifyItemSlot_Inside(EItemModifyType InItemModifyType, class UItemSlotBase* InItemSlot);

	// �ش� �������� ���� �� ����ȭ������.
	// @param Reliable RPC Reliable ����.
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category = "InventoryComponent|Dedi")
	void ModifyItemVariable(class UItemObject* InItemObject, EItemVariableType InItemVariableType, bool Reliable = true);
	

protected:
	// RPC����ų� ����ȭ�� ���� InItemSlotInfo�� �ش��ϴ� ������ ������ ������.
	UFUNCTION(BlueprintPure, Category = "InventoryComponent|GameServer", meta=(BlueprintProtected))
	class UItemSlotBase* GetItemSlotBySlotInfo(const FItemSlotInfo& InItemSlotInfo) const;

	
	/* OnRecievedModifyItemSlotMessage
	 ������ ���� ����ȭ�� ���. �������� ���ŵǴ� ���(������ ���, ��� ��) ModifyItemData ����� ȣ���ϸ��.
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(BlueprintProtected))
	void OnRecievedModifyItemSlotMessage(const FModifyItemSlotMessage& Msg);

	/* OnRecievedModifyItemVariableMessage
	 �������� ���� Variable(Count, Weight, Durability ��)�� ����ȭ��ų�� ���. 
	 OnRecievedModifyItemSlotMessage�� ����ص� ������, ���ʿ��� �����Ͷ��� RPC�� �ѱ�⶧����, �Ѱ��� ���� �����Ű�� ��� �� �Լ��� ���.
	*/
	UFUNCTION(BlueprintCallable, BlueprintCosmetic, meta=(BlueprintProtected))
	void OnRecievedModifyItemVariableMessage(const FModifyItemVariableMessage& Msg);

	/* OnRecievedMoveItemMessage
	* ������ �̵��� ���. 
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
	 ���� ����Ǵ°� ���Ϻ����ϰ� RPC�� �����°�찡 �־, Unreliable���� �ϳ� ����.
	 ���������δ� SendModifyItemVariableMessage�� ���� ������.
	 �ٸ�, Unreliable�̱⿡ Ŭ���̾�Ʈ ���� ���δ� ������������.
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
	//���� Drop ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_DropItem(class UItemSlotBase* DropItemSlot);

	//���� Swap ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_MoveItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);

	//���� Split ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_SplitItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot, int32 InSplitCount);
	
	//���� Merge ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_MergeItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);
	
	//���� PutIn ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_PutInItem(class UItemSlotBase* FromItemSlot, class UItemSlotBase* ToItemSlot);

	//���� Equip ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_EquipItem(class UItemSlotBase* InItemSlot);

	//���� UnEquip ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_UnEquipItem(class UItemSlotBase* InItemSlot);

	//���� ItemUse ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_UseItem(class UItemSlotBase* InItemSlot);
	
	//���� AutoMoveItem(�ڵ����� �󽽷����� �̵�) ��û.
	UFUNCTION(BlueprintCallable, Category = "InventoryComponent|Request")
	void Request_AutoMoveItem(class UItemSlotBase* InItemSlot);

#pragma endregion

};
