// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "GameplayTags.h"

#include "ItemObject.generated.h"

/** UItemObject
 * 
 */
UCLASS(BlueprintType)
class INVENTORYSYSTEM_API UItemObject : public UObject
{
	GENERATED_BODY()
	

public:
	UItemObject();
	
	virtual UWorld* GetWorld() const override;
	
	// 이 아이템을 가지고있는 Owner ActorComponent(ItemSlotContainerComponent) 반환.
	UFUNCTION(BlueprintPure)
	class UItemSlotContainerComponent* GetOwnerComponent();

	// 이 아이템을 가지고있는녀석이 누군지 알 필요가 있어서 Outer를 이용했음. 
	// Item이 이동되었을때(슬롯이동 또는 인벤토리에서 드랍) 호출해줘야함.
	UFUNCTION(BlueprintCallable)
	bool SetOuter(UObject* NewOuter);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Initialize();
	virtual void Initialize_Implementation();

	UFUNCTION(BlueprintCallable)
	void SetData(int64 InUID, int32 InItemID, int32 InCount, FGameplayTag InItemType);
	

protected:

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "아이템 고유 ID"))
	int64							UID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "아이템 ID"))
	int32							ItemID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "아이템 개수"))
	int32							ItemCount = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "아이템 타입."))
	FGameplayTag					ItemType;

	UPROPERTY(BlueprintReadWrite, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "아이템 슬롯 컨테이너"))
	TObjectPtr<class UItemSlotContainerBase> ItemSlotContainer;



public:
	UFUNCTION(BlueprintPure)
	FORCEINLINE int64 GetItemUID() { return UID; };

	UFUNCTION(BlueprintPure)
	FORCEINLINE FGameplayTag GetItemType() { return ItemType; };
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE int32 GetItemID() { return ItemID; };
	
	UFUNCTION(BlueprintPure)
	FORCEINLINE int32 GetItemCount() { return ItemCount; };

	UFUNCTION(BlueprintPure)
	FORCEINLINE class UItemSlotContainerBase* GetItemSlotContainer() { return ItemSlotContainer; };



	//이 아이템을 갖고있는 부모 아이템 가져옴. 아이템을 갖고있는게 ItemObject가 아니라면 nullptr 반환.
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter")
	UItemObject* GetParentItemObject() const ;
	
	//InItemObject를 부모로 갖고있는지 확인.
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter")
	bool HasItemObjectAsParent(UItemObject* InItemObject) const ;
	
	UFUNCTION(BlueprintPure, Category = "ItemObject", meta = (Tooltip = "Item 정보들 모아놓은 구조체 한꺼번에 꺼낼라고 만듬."))
	FItemStruct MakeItemStruct() const;
	

};
