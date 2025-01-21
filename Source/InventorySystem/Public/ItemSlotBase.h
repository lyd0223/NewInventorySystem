// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "InventoryEnums.h"

#include "ItemSlotBase.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UItemSlotBase : public UObject
{
	GENERATED_BODY()

public:
	UItemSlotBase();

	virtual UWorld* GetWorld() const override;
	
	// �� �������� �������ִ� Owner ActorComponent(ItemSlotContainerComponent) ��ȯ.
	UFUNCTION(BlueprintPure)
	class UItemSlotContainerComponent* GetOwnerComponent() const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Initialize();
	virtual void Initialize_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetData(EItemSlotType InItemSlotType, int32 InSlotIndex);
	virtual void SetData_Implementation(EItemSlotType InItemSlotType, int32 InSlotIndex);

protected:
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "������ ���� Ÿ��", BlueprintProtected = true))
	EItemSlotType					ItemSlotType = EItemSlotType::None;

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "������ ���� �ε���", BlueprintProtected = true))
	int32							SlotIndex = 0;

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "�������� ������ TopLeftSlot ����.", BlueprintProtected = true))
	bool							IsTopLeft = false;

	UPROPERTY(BlueprintReadwrite, Category = "ItemSlotBase", meta = (ToolTip = "������ ������Ʈ", BlueprintProtected = true))
	TObjectPtr<class UItemObject>	ItemObject = nullptr;
	

public: 
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	EItemSlotType GetItemSlotType() const { return ItemSlotType; };

	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	class UItemObject* GetItemObject() const { return ItemObject; };
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase", BlueprintAuthorityOnly, meta = (ToolTip = "RPC�� ������� ����������. InPlayerActor�� �����ϴ� �÷��̾����. �������� ��������� ItemStruct�⺻�� ��ȯ."))
	FModifyItemData MakeModifyItemData(AActor* InPlayerActor) const ;

	
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter", meta = (ToolTip = "�ֻ�� Container�� Type ������."))
	EItemSlotContainerType GetTopContainerType() const;

	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter", meta = (ToolTip = "RPC�� ������� �������� ����."))
	FItemSlotInfo ExtractItemSlotInfo() const;
	

	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	int32 GetSlotIndex() const { return SlotIndex; };
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter", meta = (ToolTip = "�������� ��������� false ��ȯ."))
	bool IsEmptySlot() const { return ItemObject ? false : true; };
	
	UFUNCTION(BlueprintPure	, Category = "ItemSlotBase|Getter/Setter")
	bool IsTopLeftSlot() { return IsTopLeft; };

	/* 
	���Կ� ����ִ� ������ �ٲٴ� �Լ��ε�, �ʱ�ȭ��ų�� �� �Լ��� null �������� ResetItem() �̿��ϼ���.
	�� �Լ��� �̿�� �ڵ����� InItemObject�� Outer�� this�� ������.
	SetOuterFlag : Outer ���� ����.
	*/
	UFUNCTION(BlueprintCallable	, Category = "ItemSlotBase|SetItem")
	void SetItem(UItemObject* InItemObject, bool InIsTopLeft, bool SetOuterFlag = true);
	
	UFUNCTION(BlueprintCallable	, Category = "ItemSlotBase|SetItem")
	void ResetItem();

	//this�� InItemObject�� Move �������� �˻�.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsMoveAvailable(class UItemObject* InItemObject);
	
	//this�� InItemID�� Move �������� �˻�.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsMoveAvailableByItemID(int32 InItemID);

	//this�� InItemObject�� Split �������� �˻�.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsSplitAvailable(class UItemObject* InItemObject);
	

protected:
	UFUNCTION()
	void OnItemObjectChangedEvent(UItemSlotBase* ChangedItemSlot, UItemObject* PrevItemObject, UItemObject* NextItemObject);


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegate_OnItemObjectChanged, UItemSlotBase*, ChangedItemSlot, UItemObject*, PrevItemObject, UItemObject*, NextItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "ItemSlotBase|Event", meta = (ToolTip = "�� ������ ���� �������� ����Ǿ����� �߻�. ���ڷ� ���¾������� �ٲ� ������."))
	FDelegate_OnItemObjectChanged OnItemObjectChanged;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegate_OnItemVariableChanged, UItemSlotBase*, SelfItemSlot, UItemObject*, ChangedItemObject, EItemVariableType, VariableType);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "ItemSlotBase|Event", meta = (ToolTip = "�� ������ ���� �������� VariableType�� ���� ����Ǿ����� �߻�."))
	FDelegate_OnItemVariableChanged OnItemVariableChanged;
};



