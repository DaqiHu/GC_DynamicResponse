// Fill out your copyright notice in the Description page of Project Settings.


#include "TransGeometryCollectionComponent.h"

void UTransGeometryCollectionComponent::SetCollisionResponseToChannel(ECollisionChannel Channel, ECollisionResponse NewResponse)
{
	Super::SetCollisionResponseToChannel(Channel, NewResponse);

	OnActorEnableCollisionChanged();
}
