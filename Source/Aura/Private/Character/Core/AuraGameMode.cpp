// 


#include "Character/Core/AuraGameMode.h"


// Sets default values
AAuraGameMode::AAuraGameMode()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
}

// Called when the game starts or when spawned
void AAuraGameMode::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAuraGameMode::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

