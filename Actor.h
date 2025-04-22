#pragma once
#include "Vector2D.h"

class AActor
{
public:
	AActor();
	virtual ~AActor();

	void AddActorWorldOffset(FVector2D offset);
	FVector2D Location;
};

//Actor has a Fvector2D
