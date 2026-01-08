// Fill out your copyright notice in the Description page of Project Settings.


#include "SItemCollectible.h"
#include "Components/StaticMeshComponent.h"


// Sets default values
ASItemCollectible::ASItemCollectible()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BaseMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BaseMesh"));
	RootComponent = BaseMesh;

}

void ASItemCollectible::Interact_Implementation(APawn* InstigatorPawn)
{


}

// Called when the game starts or when spawned
void ASItemCollectible::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ASItemCollectible::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

