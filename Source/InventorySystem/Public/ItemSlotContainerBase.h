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

	// 이 아이템을 가지고있는 Owner ActorComponent(ItemSlotContainerComponent) 반환.
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
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "아이템 슬롯 컨테이너 타입"))
	EItemSlotContainerType					ItemSlotContainerType = EItemSlotContainerType::None;
	
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "Container Size"))
	FIntPoint								Size = FIntPoint(0,0);

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainer", meta = (BlueprintProtected = true, ToolTip = "아이템 슬롯 리스트"))
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
	
	//InItemObject가 들어갈 수 있는 첫번째 아이템슬롯을 가져옴. 들어갈 슬롯이없으면 nullptr 반환.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetFirstMoveAvailableItemSlot(class UItemObject* InItemObject) const;

	//아이템을 가지고있으며, TopLeftSlot인 아이템슬롯을 전부 가져옴.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	TArray<class UItemSlotBase*> GetAllTopLeftItemSlotList() const;

	// InItemID를 가진 ItemObject 전부 가져옴. IsIncludeInside == true시, 내부의 내부까지 가져옴.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	TArray<class UItemObject*> GetItemObjectListByItemID(int32 InItemID, bool IsIncludeInside = false) const;

	// ItemObject를 가진 슬롯을 가져옴. 만약 Grid슬롯이라면 TopLeftSlot을 반환. 없으면 nullptr 반환.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase|Getter/Setter")
	class UItemSlotBase* GetItemSlotByItemObject(UItemObject* InItemObject) const;

	// 모든 아이템 가져옴. IsIncludeInside == true시, 내부의 내부까지 가져옴.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	TArray<class UItemObject*> GetAllItemObjects(bool IsIncludeInside =false) const;
	
	//이 컨테이너에 InItemObject를 들어있는지 판별. IsIncludeInside == true시 내부의 내부까지 확인.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	bool HasItem(class UItemObject* InItemObject, bool IsIncludeInside = false) const;

	// 삽입 가능한 빈 슬롯이 있는지 확인하는 함수.
	UFUNCTION(BlueprintPure, Category = "ItemSlotContainerBase")
	bool CheckAddAvailable(class UItemObject* InItemObject);

public:
	// 삽입 가능한 빈 슬롯을 찾아 알아서 넣어주는 함수. 성공시 삽입된 SlotIndex 반환. 지정 슬롯에 추가시 AddItemToIndex 사용. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool AddItem(int32& AddedSlotIndex, class UItemObject* InItemObject);
	
	// 모든 슬롯을 돌며 해당 아이템 전부 삭제하는 함수. 지정 슬롯 삭제시 RemoveItemToIndex 사용. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItem(class UItemObject* InItemObject);
	
	// 모든 슬롯을 돌며 해당 ItemUID인 아이템 전부 삭제하는 함수. 지정 슬롯 삭제시 RemoveItemToIndex 사용. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItemByItemUID(int64 InItemUID);
	
	// 강제로 모든 슬롯에 있는 아이템 없애는 함수. 반환값은 이벤트로 만들기 싫어서 넣은거니까 무시. 
	UFUNCTION(BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveAllItems();

	

	// 강제로 해당 슬롯에 아이템 추가하는 함수. 필히 슬롯에 추가 가능한지 검증 하고 사용할것. 반환값은 이벤트로 만들기 싫어서 넣은거니까 무시. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemSlotContainerBase")
	bool AddItemToIndex(class UItemObject* InItemObject, int32 InIndex);
	virtual bool AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex);

	// 강제로 해당 슬롯에 있는 아이템 없애는 함수. 반환값은 이벤트로 만들기 싫어서 넣은거니까 무시. 
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "ItemSlotContainerBase")
	bool RemoveItemToIndex(int32 InIndex);
	virtual bool RemoveItemToIndex_Implementation(int32 InIndex);

	//Index에 해당하는 슬롯에 InItemObject가 이동 가능한지 검사.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "ItemSlotContainerBase")
	bool IsSlotMoveAvailable(int32 InIndex, class UItemObject* InItemObject) const;
	virtual bool IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const;
	
	//Index에 해당하는 슬롯에 InItemObject가 이동 가능한지 검사.
	UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "ItemSlotContainerBase")
	bool IsSlotMoveAvailableByItemID(int32 InIndex, int32 InItemID) const;
	virtual bool IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const;
};
