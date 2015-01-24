// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Character.h"
#include "Engine/TargetPoint.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS(Meta = (ChildCanTick))
class WHATNOW_API AEnemy : public ACharacter
{
	GENERATED_BODY()
	
public:
	AEnemy(const class FObjectInitializer& ObjInit);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	ATargetPoint* FirstTarget;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "AI")
	ATargetPoint* SecondTarget;
};
