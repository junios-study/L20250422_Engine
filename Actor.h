#pragma once
#include <string>

#include "Vector2D.h"
#include "SDL3/SDL.h"


//Actor 기능이 있고, 컴포넌트 조절 역할,
//Tick 다른 컴포넌트 조절하는 로직
//Tick 
class AActor
{
public:
	AActor();
	AActor(const FVector2D& InVector);
	virtual ~AActor();

	void AddActorWorldOffset(FVector2D offset);
	FVector2D Location;

	virtual void Tick();
	virtual void Render();

	//void Load();


	//char Shape;
	//int RenderOrder = 0;

	//static bool CompareByRendeOrder(const AActor* A, const AActor* B);

	//SDL_Color Color;
	//SDL_Color ColorKey;

	//std::string Filename;
	//SDL_Surface* Surface;
	//SDL_Texture* Texture;

	//bool IsSprite;

	//float ProcessTime = 0.25f;
	//float elapasedTime = 0.0;
};

//functor
class ActorCompareByRenderOrder
{
public:
	bool operator()(const AActor* A, const AActor* B)
	{
		return true;
		//return (A->RenderOrder) > (B->RenderOrder);
	}
};

//Actor has a Fvector2D

