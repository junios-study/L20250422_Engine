#include "Engine.h"

#include <iostream>
#include <Windows.h>

int Add(int A, int B)
{
	return A + B;
}

int Sub(int A, int B)
{
	return A - B;
}


int main()
{
	//int (*FP)(int, int);

	//FP = Add;
	//FP = Sub;

	//void (*FP2)();

	//int (*FP)(int, int) = [](int A, int B) {
	//	return A * B;
	//};

	//FP = Add;

	//std::cout << FP(2, 2) << std::endl;

	//std::cout << Add << std::endl;
	//std::cout << Sub << std::endl;

	//std::cout << FP << std::endl;

	//OS Buffer

	HANDLE ScreenHandles[2];

	ScreenHandles[0] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);
	ScreenHandles[1] = CreateConsoleScreenBuffer(GENERIC_READ | GENERIC_WRITE,
		0, NULL, CONSOLE_TEXTMODE_BUFFER, NULL);

	int ScreenIndex = 0;

	while (true)
	{
		SetConsoleCursorPosition(ScreenHandles[ScreenIndex], COORD{ 10, 10 });

		WriteConsole(ScreenHandles[ScreenIndex], "P", 1, NULL, NULL);

		SetConsoleActiveScreenBuffer(ScreenHandles[ScreenIndex]);

		ScreenIndex++;
		ScreenIndex %= 2;
	}


	//GEngine->Initiailze();
	//GEngine->Run();

	return 0;
}