// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "MyStaticMeshComponent.generated.h"

/**
 * 
 */
UCLASS()
class UNREAL260415_API UMyStaticMeshComponent : public UStaticMeshComponent
{
	GENERATED_BODY()
public:
	UMyStaticMeshComponent();
	
	float RotateSpeed = 1800.0f;

	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
};
