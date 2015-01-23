// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/Pawn.h"
#include "Enemy.generated.h"

/**
 * 
 */
UCLASS()
class WHATNOW_API AEnemy : public APawn
{
	GENERATED_BODY()
	
public:
	AEnemy(const class FObjectInitializer& ObjInit);
};
