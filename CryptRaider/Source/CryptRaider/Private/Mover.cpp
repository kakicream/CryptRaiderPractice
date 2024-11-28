// Fill out your copyright notice in the Description page of Project Settings.


#include "Mover.h"

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

	// ...
	
}

// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* Owner = GetOwner();// 해당 컴포텉느를 소유한 액터 주소를 저장하는 변수
	// FString Name = (*Owner).GetActorNameOrLabel();
	FString Name = Owner->GetActorNameOrLabel(); // 윗줄과 같은 기능, but much simpler
	FVector OwnerLocation = Owner->GetActorLocation();
	FString OwnerLocationString = OwnerLocation.ToCompactString();
	
	
	UE_LOG(LogTemp, Display, TEXT("Mover Owner: %s"), *Name); // *u : 주소값 *s : string
	UE_LOG(LogTemp, Display, TEXT("Mover Location : %s"), *OwnerLocationString );

	
	// float MyFloat = 5;
	// float* YourFloat = &MyFloat; // MyFloat의 주소를 YourFloat에 저장
	// // float FloatValue = *YourFloat; // Get me the value at this location	
	// UE_LOG(LogTemp, Display, TEXT("YourFloat Value : %f"),*YourFloat);// FloatValue);
	
	
	

	
}

