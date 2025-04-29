#include "Player.h"
#include "Input.h"
#include "Engine.h"
#include "SDL3/SDL.h"

APlayer::APlayer()
{
	Shape = 'P';
	RenderOrder = 7;
}

APlayer::APlayer(const FVector2D& InVector)
{
	Shape = 'P';
	Location = InVector;
	RenderOrder = 7;
}

APlayer::~APlayer()
{
}

void APlayer::Tick()
{
	switch (GEngine->Event.key.key)
	{
	case SDLK_W:
	case SDLK_UP:
		AddActorWorldOffset(FVector2D(0, -1));
		break;
	case SDLK_S:
	case SDLK_DOWN:
		AddActorWorldOffset(FVector2D(0, 1));
		break;
	case SDLK_A:
	case SDLK_LEFT:
		AddActorWorldOffset(FVector2D(-1, 0));
		break;
	case SDLK_D:
	case SDLK_RIGHT:
		AddActorWorldOffset(FVector2D(1, 0));
		break;
	}
}
