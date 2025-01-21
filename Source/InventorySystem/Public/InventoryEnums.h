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

	// UI상에서 표기될 아이콘
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<class UTexture> Icon;
	
	// 바닥에 뿌려진 상태일때 메쉬.
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TSoftObjectPtr<class UStaticMesh> Mesh;

};

/* EItemSlotContainerType
* 아이템 슬롯 컨테이너 타입.
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
 아이템 슬롯 타입.
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
* 여러 상황(Pickup, AutoMove 등)에서 인벤토리 안의 컨테이너를 탐색하는 순서를 저장해놓는 구조체.
*/
USTRUCT(BlueprintType)
struct FInventorySearchOrder : public FTableRowBase
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditDefaultsOnly) TArray<EItemSlotContainerType> SearchOrder;

};


/* struct FItemStruct
아이템 정보 담겨있는 구조체.
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
 ItemObject안의 변수타입.
 변동 가능한 놈들만 집어넣어놨음. (UID, ID와같이 변동되지않는놈들은 넣지않음.)
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
Modify시 RPC로 클라이언트에 쏴야하는 아이템 정보를 담는 구조체.
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
 인벤토리 관련 요청 또는 데디-클라 동기화시 사용되는 슬롯 정보.
*/
USTRUCT(BlueprintType)
struct FItemSlotInfo
{
	GENERATED_USTRUCT_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite) TObjectPtr<class UItemSlotContainerComponent>					ContainerComponent = nullptr;
	UPROPERTY(BlueprintReadWrite) EItemSlotContainerType								TopContainerType = EItemSlotContainerType::None;

	/* ParentItemUID
	 이 아이템을 가진 부모 Item의 UID. 최상단인경우(Owner가 직접적으로 들고있는 경우), 0이 들어가 있음.
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


// 아이템 슬롯 변경시 사용.
USTRUCT(BlueprintType)
struct FModifyItemSlotMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) EItemModifyType				ItemModifyType = EItemModifyType::None;

	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ItemSlotInfo;

	UPROPERTY(BlueprintReadWrite) FModifyItemData			ModifyItemData;
};


// 아이템의 변수 변경시 사용.
USTRUCT(BlueprintType)
struct FModifyItemVariableMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ItemSlotInfo;
	UPROPERTY(BlueprintReadWrite) EItemVariableType				VariableType;
	UPROPERTY(BlueprintReadWrite) int32							VariableValue = 0;
};

// 아이템 이동시 사용.
USTRUCT(BlueprintType)
struct FMoveItemMessage
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				FromItemSlotInfo;
	
	UPROPERTY(BlueprintReadWrite) FItemSlotInfo				ToItemSlotInfo;
};



/* struct FItemMssageBase
 S->C 동기화 RPC를 받았을때 온 Message를 저장하는 구조체.
 클라이언트에서 Modify / MoveItem 등 Message들을 받았을때 서버에서 준 순서대로 처리하기위해 만듬. 
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