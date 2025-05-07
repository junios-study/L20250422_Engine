#include "PaperFilpbookComponent.h"
#include "Renderer.h"
#include "Actor.h"

UPaperFilpbookComponent::UPaperFilpbookComponent()
{
	ColorKey = { 255, 255, 255, 255 };
	IsSprite = false;
}

UPaperFilpbookComponent::~UPaperFilpbookComponent()
{
	ColorKey = { 255, 255, 255, 255 };
	IsSprite = false;
}

void UPaperFilpbookComponent::Render()
{
	URenderer::GetInstance()->Render(Owner);
}

void UPaperFilpbookComponent::Load()
{
	if (Filename.size() > 0)
	{
		std::string Temp = "./data/" + Filename;
		Surface = SDL_LoadBMP(Temp.c_str()); //RAM
		const SDL_PixelFormatDetails* pixelDetails = SDL_GetPixelFormatDetails(Surface->format);

		SDL_SetSurfaceColorKey(Surface, true,
			SDL_MapRGB(pixelDetails, nullptr, ColorKey.r, ColorKey.g, ColorKey.a));
		//VRAM
		Texture = SDL_CreateTextureFromSurface(URenderer::GetInstance()->Renderer, Surface);
	}
}

bool UPaperFilpbookComponent::CompareByRendeOrder(const AActor* A, const AActor* B)
{
	return true;
	//return (RenderOrder) > (RenderOrder);
}
