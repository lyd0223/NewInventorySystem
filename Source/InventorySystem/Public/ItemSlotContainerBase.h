// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "InventoryEnums.h"

#include "ItemSlotContainerBase.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UItemSlotContainerBase : public UObject
{
	GENERATED_BODY()
	
	
public:
	UItemSlotContainerBase();

	virtual UWorld* GetWorld() const override;

	// �� �������� �������ִ� Owner ActorComponent(ItemSlotContainerComponent) ��ȯ.
	UFUNCTION(BlueprintPure)
	class UItemSlotContainerComponent* GetOwnerComponent();

	UFUNCTION(BlueprintCallable)
	bool SetOuter(UObject* NewOuter);
	
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Initialize();
	virtual void Initialize_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetData(EItemSlotContainerType InItemSlotContainerType, FIntPoint InSize);
	virtual void SetData_Implementation(EItemSlotContainerType InItemSlotContainerType, FIntPoint InSize);

protected:
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "������ ���� �����̳� Ÿ��"))
	EItemSlotContainerType					ItemSlotContainerType = EItemSlotContainerType::None;
	
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "Container Size"))
	FIntPoint								Size = FIntPoint(0,0);

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "������ ���� ����Ʈ"))
	TArray<TObjectPtr<class UItemSlotBase>> ItemSlotList;

	

public: //Getter , Setter
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	EItemSlotContainerType GetItemSlotContainerType() const { return ItemSlotContainerType; }

	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	const TArray<class UItemSlotBase*>& GetItemSlotList() const { return ItemSlotList; }
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	FIntPoint GetSize() const { return Size; }
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetItemSlotByIndex(int32 InIndex) const { return ItemSlotList.IsValidIndex(InIndex) ? ItemSlotList[InIndex] : nullptr; }
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetItemSlotBySlotType(EItemSlotType InSlotType) const;
	
	//InItemObject�� �� �� �ִ� ù��° �����۽����� ������. �� �����̾����� nullptr ��ȯ.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetFirstMoveAvailableItemSlot(class UItemObject* InItemObject) const;

	//�������� ������������, TopLeftSlot�� �����۽����� ���� ������.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	TArray<class UItemSlotBase*> GetAllTopLeftItemSlotList() const;

	// InItemID�� ���� ItemObject ���� ������. IsIncludeInside == true��, ������ ���α��� ������.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	TArray<class UItemObject*> GetItemObjectListByItemID(int32 InItemID, bool IsIncludeInside = false) const;

	// ItemObject�� ���� ������ ������. ���� Grid�����̶�� TopLeftSlot�� ��ȯ. ������ nullptr ��ȯ.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetItemSlotByItemObject(UItemObject* InItemObject) const;

	// ��� ������ ������. IsIncludeInside == true��, ������ ���α��� ������.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	TArray<class UItemObject*> GetAllItemObjects(bool IsIncludeInside =false) const;
	
	//�� �����̳ʿ� InItemObject�� ����ִ��� �Ǻ�. IsIncludeInside == true�� ������ ���α��� Ȯ��.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	bool HasItem(class UItemObject* InItemObject, bool IsIncludeInside = false) const;

	// ���� ������ �� ������ �ִ��� Ȯ���ϴ� �Լ�.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	bool CheckAddAvailable(class UItemObject* InItemObject);

public:
	// ���� ������ �� ������ ã�� �˾Ƽ� �־��ִ� �Լ�. ������ ���Ե� SlotIndex ��ȯ. ���� ���Կ� �߰��� AddItemToIndex ���. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool AddItem(int32& AddedSlotIndex, class UItemObject* InItemObject);
	
	// ��� ������ ���� �ش� ������ ���� �����ϴ� �Լ�. ���� ���� ������ RemoveItemToIndex ���. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItem(class UItemObject* InItemObject);
	
	// ��� ������ ���� �ش� ItemUID�� ������ ���� �����ϴ� �Լ�. ���� ���� ������ RemoveItemToIndex ���. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItemByItemUID(int64 InItemUID);
	
	// ������ ��� ���Կ� �ִ� ������ ���ִ� �Լ�. ��ȯ���� �̺�Ʈ�� ����� �Ⱦ �����Ŵϱ� ����. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveAllItems();

	

	// ������ �ش� ���Կ� ������ �߰��ϴ� �Լ�. ���� ���Կ� �߰� �������� ���� �ϰ� ����Ұ�. ��ȯ���� �̺�Ʈ�� ����� �Ⱦ �����Ŵϱ� ����. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemSlotContainerBase")
	bool AddItemToIndex(class UItemObject* InItemObject, int32 InIndex);
	virtual bool AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex);

	// ������ �ش� ���Կ� �ִ� ������ ���ִ� �Լ�. ��ȯ���� �̺�Ʈ�� ����� �Ⱦ �����Ŵϱ� ����. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItemToIndex(int32 InIndex);
	virtual bool RemoveItemToIndex_Implementation(int32 InIndex);

	//Index�� �ش��ϴ� ���Կ� InItemObject�� �̵� �������� �˻�.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "ItemSlotContainerBase")
	bool IsSlotMoveAvailable(int32 InIndex, class UItemObject* InItemObject) const;
	virtual bool IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const;
	
	//Index�� �ش��ϴ� ���Կ� InItemObject�� �̵� �������� �˻�.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "ItemSlotContainerBase")
	bool IsSlotMoveAvailableByItemID(int32 InIndex, int32 InItemID) const;
	virtual bool IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const;
};
