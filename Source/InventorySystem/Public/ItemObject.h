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
	
	// �� �������� �������ִ� Owner ActorComponent(ItemSlotContainerComponent) ��ȯ.
	UFUNCTION(BlueprintPure)
	class UItemSlotContainerComponent* GetOwnerComponent();

	// �� �������� �������ִ³༮�� ������ �� �ʿ䰡 �־ Outer�� �̿�����. 
	// Item�� �̵��Ǿ�����(�����̵� �Ǵ� �κ��丮���� ���) ȣ���������.
	UFUNCTION(BlueprintCallable)
	bool SetOuter(UObject* NewOuter);

	UFUNCTION(BlueprintNativeEvent, BlueprintCallable)
	void Initialize();
	virtual void Initialize_Implementation();

	UFUNCTION(BlueprintCallable)
	void SetData(int64 InUID, int32 InItemID, int32 InCount, FGameplayTag InItemType);
	

protected:

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "������ ���� ID"))
	int64							UID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "������ ID"))
	int32							ItemID = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "������ ����"))
	int32							ItemCount = 0;

	UPROPERTY(BlueprintReadOnly, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "������ Ÿ��."))
	FGameplayTag					ItemType;

	UPROPERTY(BlueprintReadWrite, Category = "ItemObject", meta = (BlueprintProtected = true, ToolTip = "������ ���� �����̳�"))
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



	//�� �������� �����ִ� �θ� ������ ������. �������� �����ִ°� ItemObject�� �ƴ϶�� nullptr ��ȯ.
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter")
	UItemObject* GetParentItemObject() const ;
	
	//InItemObject�� �θ�� �����ִ��� Ȯ��.
	UFUNCTION(BlueprintPure, Category = "ItemObject|Getter/Setter")
	bool HasItemObjectAsParent(UItemObject* InItemObject) const ;
	
	UFUNCTION(BlueprintPure, Category = "ItemObject", meta = (Tooltip = "Item ������ ��Ƴ��� ����ü �Ѳ����� ������� ����."))
	FItemStruct MakeItemStruct() const;
	

};
