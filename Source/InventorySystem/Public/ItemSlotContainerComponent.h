#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"

#include "InventoryEnums.h"

#include "ItemSlotContainerComponent.generated.h"

/*
ItemSlotContainer를 갖고있는 Component. Actor에 부착하면됨.
*/
UCLASS(Blueprintable, ClassGroup=(Inventory), meta=(BlueprintSpawnableComponent) )
class INVENTORYSYSTEM_API UItemSlotContainerComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UItemSlotContainerComponent();

protected:
	virtual void BeginPlay() override;


protected:
	UPROPERTY(BlueprintReadWrite, Category = "ItemSlotContainerComponent", meta = (BlueprintProtected = true))
	TMap<EItemSlotContainerType, TObjectPtr<class UItemSlotContainerBase>> ItemSlotContainerMap;
	
	/* ItemMap
	 동기화를 위해 아이템 찾는 용도. ItemSlotContainerMap에 들어가있는 아이템을 모두 이곳에 저장. 
	 변수는 Native에서만 씁시당~
	*/
	UPROPERTY()
	TMap<int64, TObjectPtr<class UItemObject>> ItemMap;



public:

	FORCEINLINE TMap<int64, TObjectPtr<class UItemObject>> GetItemMap() const { return ItemMap; };

	FORCEINLINE TMap<EItemSlotContainerType, TObjectPtr<class UItemSlotContainerBase>> GetItemSlotContainerMap() const { return ItemSlotContainerMap; };

	class UItemSlotContainerBase* GetItemSlotContainerByType(EItemSlotContainerType InContainerType) const;

	class UItemSlotBase* GetFirstMoveAvailableItemSlot(class UItemObject* InItemObject) const;


	/* AddItemSlotContainer
	해당 컴포넌트에 ItemSlotContainer 추가.
	*/
	void AddItemSlotContainer(class UItemSlotContainerBase* InItemSlotContainer);

	/*
	ItemMap에서 UID로 ItemObject 찾음.
	*/
	bool FindItemInItemMap(class UItemObject*& OutItemObject, const int64& InItemUID) const;

	/* 
	ItemMap에 아이템 추가.
	InItemObject 내부에 아이템이 있다면 그 아이템 또한 ItemMap에 추가됨.
	*/
	void AddItemToItemMap(class UItemObject* InItemObject);

	/*
	ItemMap에서 아이템 제거.
	InItemObject 내부에 아이템이 있다면 그 아이템 또한 ItemMap에서 제거됨.
	*/
	void RemoveItemToItemMap(class UItemObject* InItemObject);

};
