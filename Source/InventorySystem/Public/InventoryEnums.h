// Fill out your copyright notice in the Description page of Project Settings.

#pragma once


#include "GameplayTags.h"

#include "InventoryEnums.generated.h"


DECLARE_LOG_CATEGORY_EXTERN(InventoryLog, Log, All);

USTRUCT(BlueprintType)
struct FItemData : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int32 ID;
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FGameplayTag Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FString Name;

	// UI�󿡼� ǥ��� ������
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<class UTexture> Icon;
	
	// �ٴڿ� �ѷ��� �����϶� �޽�.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<class UStaticMesh> Mesh;

};

/* EItemSlotContainerType
* ������ ���� �����̳� Ÿ��.
 */
UENUM(BlueprintType)
enum class EItemSlotContainerType : uint8
{
	None,
	
	// Single Item Slot Container
	Equips,
	WeaponContainer,
	ChestContainer,

	// Grid Item Slot Container 
	BagContainer,
	PouchContainer,
	Storage,
	LootContainer,
	CaseContainer,

	Max UMETA(Hidden)
};


/* EItemSlotType
 ������ ���� Ÿ��.
*/
UENUM(BlueprintType)
enum class EItemSlotType : uint8
{
	None,

	// -- Single Item Slots
	// - EItemSlotContainerType::Equips
	Weapon,
	SubWeapon,
	Helmet,
	Chest,
	Bag,
	Pouch,

	// - EItemSlotContainerType::ChestSlots
	ChestSlot,


	// -- Grid Item Slots
	// - EItemSlotContainerType::WeaponSockets
	WeaponSlot,
	
	// - EItemSlotContainerType::BeltPockets
	PouchSlot,
	
	// - EItemSlotContainerType::Baggage
	BagSlot,
	
	// - EItemSlotContainerType::Storage
	Storage,
	
	// - EItemSlotContainerType::LootContainer
	LootContainer,
	
	// - EItemSlotContainerType::CaseContainer
	BulletCase,
	MultiCase,
	MedicineCase,
	WeaponCase,
	ChestCase,
	MoneyCase,
	
	Max UMETA(Hidden)
};



/* FInventorySearchOrder
* ���� ��Ȳ(Pickup, AutoMove ��)���� �κ��丮 ���� �����̳ʸ� Ž���ϴ� ������ �����س��� ����ü.
*/
USTRUCT(BlueprintType)
struct FInventorySearchOrder : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly) TArray<EItemSlotContainerType> SearchOrder;

};


/* struct FItemStruct
������ ���� ����ִ� ����ü.
*/
USTRUCT(BlueprintType)
struct FItemStruct
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite) int64								ItemUID = 0;
	UPROPERTY(BlueprintReadWrite) int32								ItemID = 0;
	UPROPERTY(BlueprintReadWrite) int32								ItemCount = 0;


	FItemStruct() {};
	FItemStruct(int64 InItemUID, int32 InItemID, int32 InItemCount)
	{
		ItemUID = InItemUID;
		ItemID = InItemID;
		ItemCount = InItemCount;
	};

	bool IsEmpty() const { return ItemID == 0; };
};

#pragma region RPC Struct/Enums

/* EItemVariableType
 ItemObject���� ����Ÿ��.
 ���� ������ ��鸸 ����־����. (UID, ID�Ͱ��� ���������ʴ³���� ��������.)
*/
UENUM(BlueprintType)
enum class EItemVariableType : uint8
{
	None,
	Count,
	CurWeight,
	CurDurability,
	CurMaxDurability,
};

UENUM()
enum class EItemMessageType : uint8
{
	None,
	ModifyItemSlot,
	ModifyItemVariable,
	MoveItem,

};

/* EItemModifyType
 Description
 */
UENUM(BlueprintType)
enum class EItemModifyType : uint8
{
	None,
	General,
	Move,
	Split,
	Merge,
	Drop,
};

/* struct FModifyItemStruct
Modify�� RPC�� Ŭ���̾�Ʈ�� �����ϴ� ������ ������ ��� ����ü.
*/
USTRUCT(BlueprintType)
struct FModifyItemData
{
	GENERATED_USTRUCT_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FItemStruct					ItemStruct;
	
	FModifyItemData() {};
	FModifyItemData(const FItemStruct& InItemStruct)
	{
		ItemStruct = InItemStruct;
	};

	bool IsEmpty() const { return ItemStruct.IsEmpty(); };
};

/* FSlotInfo
 �κ��丮 ���� ��û �Ǵ� ����-Ŭ�� ����ȭ�� ���Ǵ� ���� ����.
*/
USTRUCT(BlueprintType)
struct FItemSlotInfo
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite) TObjectPtr<class UItemSlotContainerComponent>					ContainerComponent = nullptr;
	UPROPERTY(BlueprintReadWrite) EItemSlotContainerType								TopContainerType = EItemSlotContainerType::None;

	/* ParentItemUID
	 �� �������� ���� �θ� Item�� UID. �ֻ���ΰ��(Owner�� ���������� ����ִ� ���), 0�� �� ����.
	 */
	UPROPERTY(BlueprintReadWrite) int64								ParentItemUID;

	UPROPERTY(BlueprintReadWrite) int32								SlotIndex = 0;

	FItemSlotInfo() {};
	FItemSlotInfo(class UItemSlotContainerComponent* InContainerComponent, EItemSlotContainerType InTopContainerType, int64 InParentItemUID, int32 InSlotIndex)
	{
		ContainerComponent = InContainerComponent;
		TopContainerType = InTopContainerType;
		ParentItemUID = InParentItemUID;
		SlotIndex = InSlotIndex;
	};
};


// ������ ���� ����� ���.
USTRUCT(BlueprintType)
struct FModifyItemSlotMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) EItemModifyType				ItemModifyType = EItemModifyType::None;

	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ItemSlotInfo;

	UPROPERTY(BlueprintReadWrite) FModifyItemData			ModifyItemData;
};


// �������� ���� ����� ���.
USTRUCT(BlueprintType)
struct FModifyItemVariableMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ItemSlotInfo;
	UPROPERTY(BlueprintReadWrite) EItemVariableType				VariableType;
	UPROPERTY(BlueprintReadWrite) int32							VariableValue = 0;
};

// ������ �̵��� ���.
USTRUCT(BlueprintType)
struct FMoveItemMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				FromItemSlotInfo;
	
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ToItemSlotInfo;
};



/* struct FItemMssageBase
 S->C ����ȭ RPC�� �޾����� �� Message�� �����ϴ� ����ü.
 Ŭ���̾�Ʈ���� Modify / MoveItem �� Message���� �޾����� �������� �� ������� ó���ϱ����� ����. 
*/
USTRUCT(BlueprintType)
struct FItemMessageBase
{
	GENERATED_BODY()

public:
	EItemMessageType MessageType;

	TSharedPtr<FModifyItemSlotMessage> MoidfyItemSlotMessage = nullptr;
	TSharedPtr<FModifyItemVariableMessage> ModifyItemVariableMessage = nullptr;
	TSharedPtr<FMoveItemMessage> MoveItemMessage = nullptr;
	
	FItemMessageBase() {};
	FItemMessageBase(EItemMessageType InMessageType, TSharedPtr<FModifyItemSlotMessage> InModifyItemSlotMessage)
	{
		MessageType = InMessageType;
		MoidfyItemSlotMessage = InModifyItemSlotMessage;
	};
	FItemMessageBase(EItemMessageType InMessageType, TSharedPtr<FModifyItemVariableMessage> InModifyItemVariableMessage)
	{
		MessageType = InMessageType;
		ModifyItemVariableMessage = InModifyItemVariableMessage;
	};
	FItemMessageBase(EItemMessageType InMessageType, TSharedPtr<FMoveItemMessage> InMoveItemMessage)
	{
		MessageType = InMessageType;
		MoveItemMessage = InMoveItemMessage;
	};
};
#pragma endregion RPC Struct/Enums