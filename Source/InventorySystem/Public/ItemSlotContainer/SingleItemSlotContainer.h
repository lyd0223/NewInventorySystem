// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"

#include "ItemSlotContainerBase.h"

#include "SingleItemSlotContainer.generated.h"

/**
 * 
 */
UCLASS(BlueprintType)
class INVENTORYSYSTEM_API USingleItemSlotContainer : public UItemSlotContainerBase
{
	GENERATED_BODY()
	
	
public:
	USingleItemSlotContainer();


public:
	virtual void Initialize_Implementation() override;


public:
	virtual bool AddItemToIndex_Implementation(class UItemObject* InItemObject, int32 InIndex) override;
	
	virtual bool RemoveItemToIndex_Implementation(int32 InIndex) override;

	virtual bool IsSlotMoveAvailable_Implementation(int32 InIndex, class UItemObject* InItemObject) const override;
	
	virtual bool IsSlotMoveAvailableByItemID_Implementation(int32 InIndex, int32 InItemID) const override;

	
};
