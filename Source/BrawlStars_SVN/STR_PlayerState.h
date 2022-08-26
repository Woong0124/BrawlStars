// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "STR_PlayerState.generated.h"

UCLASS()
class BRAWLSTARS_SVN_API ASTR_PlayerState : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ASTR_PlayerState();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

USTRUCT(Atomic, BlueprintType)
struct FS_PlayerState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsBlooding;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsToxicating;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsSlowing;
};
																	 
