// Fill out your copyright notice in the Description page of Project Settings.


#include "Amber.h"
#include "GameFramework/SpringArmComponent.h"
#include "Components/SceneComponent.h"
#include "Components/WidgetComponent.h"
#include "Kismet/KismetMathLibrary.h"

// Sets default values
AAmber::AAmber()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	InitAmber();
}

// Called when the game starts or when spawned
void AAmber::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AAmber::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AAmber::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

void AAmber::TurnActor()
{
	SetActorRelativeRotation(FindRotation);
}

void AAmber::FindActorMouseRotation()
{
	FVector CursorLocation = CursorToWorld->USceneComponent::GetComponentLocation();
	FVector ActorLocation = GetActorLocation();
	FindRotation = UKismetMathLibrary::FindLookAtRotation(ActorLocation, FVector(CursorLocation.X, CursorLocation.Y, ActorLocation.Z));
}

void AAmber::InitAmber()
{
	
	PlayerName = FText::FromString("Admin");
	PlayerStateManager.bIsBlooding = false;
	PlayerStateManager.bIsToxicating = false;
	PlayerStateManager.bIsSlowing = false;
	SumSeconds = 0.0f;
	MaxHP = 0.0f;
	CurrentHP = 0.0f;
	Q_Damage = 0.0f;
	W_Damage = 0.0f;
	E_Damage = 0.0f;
	GaugeQ = 0.0f;
	CoolTimeW = 0.0f;
	CoolTimeE = 0.0f;
	BloodTime = 0.0f;
	FindRotation = FRotator(0.0f, 0.0f, 0.0f);

	CursorToWorld = CreateDefaultSubobject<UDecalComponent>(TEXT("CursorToWorld"));
	CursorToWorld->SetupAttachment(RootComponent);

	SpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArm->SetupAttachment(RootComponent);

	/*Hp_Ui = CreateDefaultSubobject<UWidgetComponent>(TEXT("Hp_Ui"));
	Hp_Ui->SetupAttachment(RootComponent);*/
}

