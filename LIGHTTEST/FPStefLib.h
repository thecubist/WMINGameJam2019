// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "FPStefLib.generated.h"

/**
 * 
 */
UCLASS()
class FLASHPOINT_PROTOTYPE_API UFPStefLib : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
	
public:
	UFUNCTION(BlueprintCallable, Category = "Stefan's Stuff")
		static float pythag(FVector vec1, FVector vec2);
};
