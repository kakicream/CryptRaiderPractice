// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	OriginalLocation = GetOwner()->GetActorLocation();
}

// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
	if (ShouldMove == true)
	{
		FVector CurrentLocation = GetOwner()->GetActorLocation();
		FVector TargetLocation = OriginalLocation + MoveOffset;
		float Speed = FVector::Distance(OriginalLocation, TargetLocation) / MoveTime;

		FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed);
		GetOwner()->SetActorLocation(NewLocation);
	}


	// AActor* Owner = GetOwner();// 해당 컴포텉느를 소유한 액터 주소를 저장하는 변수
	// // FString Name = (*Owner).GetActorNameOrLabel();
	// FString Name = Owner->GetActorNameOrLabel(); // 윗줄과 같은 기능, but much simpler
	// FVector OwnerLocation = Owner->GetActorLocation();
	// FString OwnerLocationString = OwnerLocation.ToCompactString();
	//
	// Speed += DeltaTime;
	// UE_LOG(LogTemp, Display, TEXT("Mover Owner: %s"), *Name); // *u : 주소값 *s : string
	// UE_LOG(LogTemp, Display, TEXT("Mover Location : %s"), *OwnerLocationString );

	// float MyFloat = 5;
	// float* YourFloat = &MyFloat; // MyFloat의 주소를 YourFloat에 저장
	// // float FloatValue = *YourFloat; // Get me the value at this location	
	// UE_LOG(LogTemp, Display, TEXT("YourFloat Value : %f"),*YourFloat);// FloatValue);
}
