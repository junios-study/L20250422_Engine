#pragma once
class UWorld
{
public:
	UWorld();
	virtual ~UWorld();

	void Tick();
	void Render();
};

