// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ItemActor.generated.h"

UCLASS()
class INVENTORYSYSTEM_API AItemActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AItemActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected: //Variables


	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "AItemActor", meta = (BlueprintProtected = true))
	TObjectPtr<class UStaticMeshComponent>	MeshComponent;

	UPROPERTY(BlueprintReadOnly, Category = "AItemActor", meta = (BlueprintProtected = true))
	TObjectPtr<class UItemSlotContainerComponent>	ItemSlotContainerComponent;


	UPROPERTY(BlueprintReadOnly, Category = "AItemActor", meta = (ExposeOnSpawn = true, BlueprintProtected = true))
	TObjectPtr<class UItemObject>					ItemObject;

	/*
	외형 보여주기위해 Replicate.
	*/
	UPROPERTY(BlueprintReadOnly, Replicated, Category = "AItemActor", meta = (ExposeOnSpawn = true, BlueprintProtected = true))
	int32											ItemID;

	
public: // public Functions
	UFUNCTION(BlueprintPure)
	FORCEINLINE  class UItemObject* GetItemObject() { return ItemObject; }

	UFUNCTION(BlueprintPure)
	FORCEINLINE  int32 GetItemID() const { return ItemID; }

};
