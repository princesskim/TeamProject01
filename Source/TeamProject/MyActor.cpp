// MyActor.cpp


#include "MyActor.h"

AMyActor::AMyActor()
{
	PrimaryActorTick.bCanEverTick = true;

}

void AMyActor::BeginPlay()
{
	Super::BeginPlay();

	UE_LOG(LogTemp, Warning, TEXT("AMyActor has begun play~~~"));

}

void AMyActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	static bool bOnce = false;
	if (false == bOnce)
	{
		UE_LOG(LogTemp, Warning, TEXT("Tick(float DeltaSeconds) has been called."));
		bOnce = true;
	}
}

