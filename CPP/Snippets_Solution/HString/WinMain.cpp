#include <Windows.h>

#include "..\..\HString\HString.h"

int CALLBACK WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	HString test(L"testertester");

	test.Replace(L"te", L"ss");
}