// Copyright Epic Games, Inc. All Rights Reserved.

#include "demo1PickUpComponent.h"

Udemo1PickUpComponent::Udemo1PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void Udemo1PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &Udemo1PickUpComponent::OnSphereBeginOverlap);
}

void Udemo1PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	Ademo1Character* Character = Cast<Ademo1Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
