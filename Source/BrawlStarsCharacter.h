// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "State.h"
#include "BrawlStarsCharacter.generated.h"


UCLASS()
class BRAWLSTARSTOPVIEW_API ABrawlStarsCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	ABrawlStarsCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
		int DamageQ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
		int DamageW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Damage)
		int DamageE;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hp)
		int MaxHp = 100;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Hp)
		int CurrentHp;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoolTime)
		float GuageQ;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoolTime)
		float CoolTimeW;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = CoolTime)
		float CoolTimeE;

public:
	UPROPERTY(BlueprintReadWrite)
		bool bIsESkill;
	UPROPERTY(BlueprintReadWrite)
		bool bSetVisibility;
	UPROPERTY(BlueprintReadWrite)
		bool bIsEOverlap;
	UPROPERTY(BlueprintReadWrite)
		bool bIsQSkill;
	UPROPERTY(BlueprintReadWrite)
		bool bIsTemporDamage;

	UPROPERTY(EditAnywhere, Category = Montage)
		class UAnimMontage* ESkillMontage;

	UPROPERTY(EditAnywhere, Category = Niagara)
		class UNiagaraSystem* ESkillPostNiagara;
	
	UPROPERTY(BlueprintAssignable, BlueprintCallable)
		FOnMontageStartedMCDelegate CompletedMontage;

public:
	UFUNCTION(BlueprintCallable)
	void ESkill();
	FTimerHandle DelayTimeHandle;
	

public:
	void PlayAnAnimationMontage();
	void FunctionToExecuteOnAnimationEnd();


};
