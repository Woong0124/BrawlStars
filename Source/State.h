// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "State.generated.h"

/**
 *
 */
USTRUCT(BlueprintType)
struct BRAWLSTARSTOPVIEW_API FState
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsBlooding;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsToxicating;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsSlowing;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsDead;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		bool bIsDamaged;


};
