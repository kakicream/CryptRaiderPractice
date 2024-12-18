// Fill out your copyright notice in the Description page of Project Settings.


#include "Grabber.h"
#include "Engine/World.h"
#include "DrawDebugHelpers.h"

// Sets default values for this component's properties
UGrabber::UGrabber()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UGrabber::BeginPlay()
{
	Super::BeginPlay();

	// ...
}


// Called every frame
void UGrabber::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector Start = GetComponentLocation();
	FVector End = Start + GetForwardVector() * MaxGrabDistance;

	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false);

	float Damage = 0;
	float& DamageRef = Damage; // Getting the reference of Damage variable
	DamageRef = 5;
	UE_LOG(LogTemp, Display, TEXT("DamageRef : %f, Damage : %f"), DamageRef, Damage); // Both Damage and DamageRef are 5


	//	FRotator MyRotation = GetComponentRotation();
	//	FString RotationString = MyRotation.ToCompactString(); // Compact : changes pitch & yaw --> roll is set to 0


	//	UE_LOG(LogTemp, Display, TEXT("Grabber Rotation : %s"), *RotationString);

	// UWorld* World =GetWorld();
	// float Time = GetWorld()->TimeSeconds;
	// UE_LOG(LogTemp, Display, TEXT("Current Time Is : %f"), Time);
}
