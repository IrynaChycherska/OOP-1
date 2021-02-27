//Source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include"ModelWindow.h"
#include <iostream>
using namespace std;
int main()
{
	ModelWindow f;
	string pink, red;
	f.Init(1, 2, red, 5);
	f.Read();
	f.Display();
	f.setCoord(3);
	f.setColor(pink);
	f.setSizev(2);
	f.setSizeh(7);
	f.Display();
	return 0;
}