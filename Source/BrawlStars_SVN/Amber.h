// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "Engine.h"
#include "GameFramework/Character.h"
#include "STR_PlayerState.h"
#include "Amber.generated.h"

UCLASS()
class BRAWLSTARS_SVN_API AAmber : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	AAmber();
	
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FText PlayerName;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FS_PlayerState PlayerStateManager;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float SumSeconds;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float MaxHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CurrentHP;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float Q_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float W_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float E_Damage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float GaugeQ;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CoolTimeW;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float CoolTimeE;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		float BloodTime;

	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FRotator FindRotation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UDecalComponent* CursorToWorld;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class USpringArmComponent* SpringArm;

	/*UPROPERTY(VisibleAnywhere, BlueprintReadOnly)
	class UWidgetComponent* Hp_Ui;*/

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	UFUNCTION(BlueprintCallable)
		void TurnActor();

	UFUNCTION(BlueprintCallable)
		void FindActorMouseRotation();

	void InitAmber();

};
