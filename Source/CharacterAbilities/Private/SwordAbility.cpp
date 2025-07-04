// Fill out your copyright notice in the Description page of Project Settings.


#include "SwordAbility.h"

// Sets default values for this component's properties
USwordAbility::USwordAbility()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void USwordAbility::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void USwordAbility::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	swordswingtimer += DeltaTime;
	while (swordswingtimer >= currenttimeperswing) {
		swordswingtimer -= currenttimeperswing;
		SwingSword();
	}
	// ...
}

void USwordAbility::SwingSword()
{
}



