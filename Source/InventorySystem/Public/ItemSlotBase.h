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
	
	// 이 아이템을 가지고있는 Owner ActorComponent(ItemSlotContainerComponent) 반환.
	UFUNCTION(BlueprintPure)
	class UItemSlotContainerComponent* GetOwnerComponent() const;
	
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Initialize();
	virtual void Initialize_Implementation();

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void SetData(EItemSlotType InItemSlotType, int32 InSlotIndex);
	virtual void SetData_Implementation(EItemSlotType InItemSlotType, int32 InSlotIndex);

protected:
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "아이템 슬롯 타입", BlueprintProtected = true))
	EItemSlotType					ItemSlotType = EItemSlotType::None;

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "아이템 슬롯 인덱스", BlueprintProtected = true))
	int32							SlotIndex = 0;

	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotBase", meta = (ToolTip = "아이템이 있을때 TopLeftSlot 여부.", BlueprintProtected = true))
	bool							IsTopLeft = false;

	UPROPERTY(BlueprintReadwrite, Category = "ItemSlotBase", meta = (ToolTip = "아이템 오브젝트", BlueprintProtected = true))
	TObjectPtr<class UItemObject>	ItemObject = nullptr;
	

public: 
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	EItemSlotType GetItemSlotType() const { return ItemSlotType; };

	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	class UItemObject* GetItemObject() const { return ItemObject; };
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase", BlueprintAuthorityOnly, meta = (ToolTip = "RPC를 쏘기위한 데이터추출. InPlayerActor는 추출하는 플레이어액터. 아이템이 비어있을시 ItemStruct기본값 반환."))
	FModifyItemData MakeModifyItemData(AActor* InPlayerActor) const ;

	
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter", meta = (ToolTip = "최상단 Container의 Type 가져옴."))
	EItemSlotContainerType GetTopContainerType() const;

	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter", meta = (ToolTip = "RPC를 쏘기위한 슬롯정보 추출."))
	FItemSlotInfo ExtractItemSlotInfo() const;
	

	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter")
	int32 GetSlotIndex() const { return SlotIndex; };
	
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase|Getter/Setter", meta = (ToolTip = "아이템이 비어있으면 false 반환."))
	bool IsEmptySlot() const { return ItemObject ? false : true; };
	
	UFUNCTION(BlueprintPure	, Category = "ItemSlotBase|Getter/Setter")
	bool IsTopLeftSlot() { return IsTopLeft; };

	/* 
	슬롯에 들어있는 아이템 바꾸는 함수인데, 초기화시킬땐 이 함수에 null 넣지말고 ResetItem() 이용하세요.
	이 함수를 이용시 자동으로 InItemObject의 Outer를 this로 설정함.
	SetOuterFlag : Outer 변경 여부.
	*/
	UFUNCTION(BlueprintCallable	, Category = "ItemSlotBase|SetItem")
	void SetItem(UItemObject* InItemObject, bool InIsTopLeft, bool SetOuterFlag = true);
	
	UFUNCTION(BlueprintCallable	, Category = "ItemSlotBase|SetItem")
	void ResetItem();

	//this에 InItemObject가 Move 가능한지 검사.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsMoveAvailable(class UItemObject* InItemObject);
	
	//this에 InItemID가 Move 가능한지 검사.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsMoveAvailableByItemID(int32 InItemID);

	//this에 InItemObject가 Split 가능한지 검사.
	UFUNCTION(BlueprintPure, Category = "ItemSlotBase")
	bool IsSplitAvailable(class UItemObject* InItemObject);
	

protected:
	UFUNCTION()
	void OnItemObjectChangedEvent(UItemSlotBase* ChangedItemSlot, UItemObject* PrevItemObject, UItemObject* NextItemObject);


public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegate_OnItemObjectChanged, UItemSlotBase*, ChangedItemSlot, UItemObject*, PrevItemObject, UItemObject*, NextItemObject);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "ItemSlotBase|Event", meta = (ToolTip = "이 슬롯이 가진 아이템이 변경되었을때 발생. 인자로 들어온아이템은 바뀐 아이템."))
	FDelegate_OnItemObjectChanged OnItemObjectChanged;
	
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FDelegate_OnItemVariableChanged, UItemSlotBase*, SelfItemSlot, UItemObject*, ChangedItemObject, EItemVariableType, VariableType);
	UPROPERTY(BlueprintAssignable, BlueprintCallable, Category = "ItemSlotBase|Event", meta = (ToolTip = "이 슬롯이 가진 아이템의 VariableType의 값이 변경되었을때 발생."))
	FDelegate_OnItemVariableChanged OnItemVariableChanged;
};



