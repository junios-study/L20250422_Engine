#include "Engine.h"
#include <iostream>
#include "Vector2D.h"


class Singleton
{
private:
	Singleton()
	{
		Instance = nullptr;
	}

	static Singleton* Instance;

public:
	~Singleton()
	{
	}

	static Singleton* GetInstance()
	{
		if (!Instance)
		{
			Instance = new Singleton();
		}

		return Instance;
	}

	//int Count;
	static int Count;

	static void Add()
	{
		Count++;
	}
};




int main()
{
	FVector2D A;
	FVector2D B;
	FVector2D C = A.operator+(B);
	//FVector2D C = A + B;

	//Singleton* S = Singleton::GetInstance();
//	Singleton* S2 = new Singleton();

	//smart pointer, 레퍼런스 카운팅
	//A* a = new A();
	//A* b = new A();

	//A* t = a;
	//
	//delete a;
	//delete b;

	std::cout << (1) << std::endl;

	//SubSystem -> 
	//UEngine* Engine = UEngine::GetInstance();
//	UEngine* Engine2 = new UEngine();

	GEngine->Initiailze();
	GEngine->Run();

	return 0;
}