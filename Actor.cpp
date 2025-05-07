#include <iostream>
#include "Windows.h"

#include "Actor.h"
#include "Renderer.h"
#include "SDL3/SDL.h"


AActor::AActor()
{
}

AActor::AActor(const FVector2D& InVector)
{

}

AActor::~AActor()
{
}

void AActor::AddActorWorldOffset(FVector2D offset)
{
	Location.X += offset.X;
	Location.Y += offset.Y;
}

void AActor::Tick()
{
}

void AActor::Render()
{

}
