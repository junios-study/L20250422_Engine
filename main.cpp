#include "Engine.h"
#include <iostream>

class FColor
{
public:
	//FColor()
	//{
	//	R = 0;
	//	G = 0;
	//	B = 0;
	//	A = 0;
	//}

	FColor(float InR = 0, float InG = 0, float InB = 0, float InA = 0) : R(InR), G(InG), B(InB), A(InA)
	{
		//R = InR;
		//G = InG;
		//B = InB;
		//A = InA;
	}

//private:
	float R;
	float G;
	float B;
	float A;
};

class A
{

};



int main()
{
	FColor TestColor;

	std::cout << TestColor.R << std::endl;



	//UEngine* Engine = new UEngine();

	//Engine->Initiailze();

	//Engine->Run();

	return 0;
}