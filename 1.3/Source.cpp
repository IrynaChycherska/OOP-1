//source.cpp
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include "Point.h"
using namespace std;
int main()
{
	Point c;
	c.Init(1,2);
	c.Read();
	c.Display();
	c.SetX(3);
	c.SetY(4);
	c.Display();
	cout << "Vidstan(c) = " << c.Vidstan() << endl << endl;
	char s[100];
	strcpy(s, c.toString());
	cout << s << endl << endl;
	strcpy(s, c.VidstanToNumeral());
	cout << s << endl << endl;
	cin.get();
	return 0;
}