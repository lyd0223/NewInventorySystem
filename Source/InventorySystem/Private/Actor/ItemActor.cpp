// Fill out your copyright notice in the Description page of Project Settings.


#include "Actor/ItemActor.h"

#include "Net/UnrealNetwork.h"

#include "ItemSlotContainerComponent.h"
#include "ItemSlotContainerBase.h"
#include "ItemObject.h"

// Sets default values
AItemActor::AItemActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	// MeshComponent
	MeshComponent = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	MeshComponent->SetupAttachment(RootComponent);

	// ItemSlotContainerComponent
	ItemSlotContainerComponent = CreateDefaultSubobject<UItemSlotContainerComponent>(TEXT("ItemSlotContainerComponent"));
}

// Called when the game starts or when spawned
void AItemActor::BeginPlay()
{
	Super::BeginPlay();

	if (HasAuthority())	// Dedi
	{
		// 아이템에 컨테이너가 있다면, ItemSlotContainerComponent에 추가.
		if (UItemSlotContainerBase* ItemSlotContainer = ItemObject->GetItemSlotContainer())
		{
			ItemSlotContainerComponent->AddItemSlotContainer(ItemSlotContainer);
		}
	}
	else				// Client
	{
		// 외형 변경 코드 넣자.
		//MeshComponent->SetStaticMesh()
	}
}

// Called every frame
void AItemActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}


void AItemActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(AItemActor, ItemID);
}
