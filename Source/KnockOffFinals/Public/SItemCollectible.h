// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "SGameplayInterface.h"
#include "SItemCollectible.generated.h"

class UStaticMeshComponent;

UCLASS()
class KNOCKOFFFINALS_API ASItemCollectible : public AActor, public ISGameplayInterface
{
	GENERATED_BODY()
	
	void Interact_Implementation(APawn* InstigatorPawn);

public:	
	// Sets default values for this actor's properties
	ASItemCollectible();

protected:
	
	UPROPERTY(VisibleAnywhere)
	UStaticMeshComponent* BaseMesh;
	
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
