#include "Engine.h"
#include <iostream>


class A
{
public:
	A() 
	{
		Count++;
	}

	~A()
	{
		Count--;
	}

	//int Count;
	static int Count;

	static void Add()
	{
		Count++;
	}
};

int A::Count = 0;



int main()
{
	A::Add();
	//smart pointer, 레퍼런스 카운팅
	//A* a = new A();
	//A* b = new A();

	//A* t = a;
	//
	//delete a;
	//delete b;

	//std::cout << A::Count << std::endl;


	//UEngine* Engine = new UEngine();
	//Engine->Initiailze();
	//Engine->Run();

	return 0;
}