#pragma once
#include "ActorComponent.h"

class USceneComponent : public UActorComponent
{
public:
	USceneComponent() {}
	virtual void Render();

	int RenderOrder = 0;

};

