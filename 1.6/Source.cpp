//Source.cpp
#include<iostream>
#include "Rectangle.h"
using namespace std;
int main()
{
	Rectangle z;
	Rectangle s;
	z.Init(3, 4);
	z.Display();
	z.setA(5);
	z.setB(6);
	z.Display();
	s.Init(3, 4);
	s.Read();
	cout << "p(s) = " << s.p() << endl;
	cout << "s(s) = " << s.s() << endl;
	return 0;
}
