#pragma once
class AActor;

class UComponent
{
public:
	class AActor* Owner;

	class AActor* GetOwner()
	{
		return Owner;
	}
};

