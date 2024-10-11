// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GeometryCollection/GeometryCollectionComponent.h"

#include "TransGeometryCollectionComponent.generated.h"

/**
 * 
 */
UCLASS(BlueprintType, Blueprintable)
class GC_DYNAMICRESPONSE_API UTransGeometryCollectionComponent : public UGeometryCollectionComponent
{
	GENERATED_BODY()

	//~ Begin UPrimitiveComponent Interface
public:
	virtual void SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse) override;
	// End of UPrimitiveComponent Interface

};
