//Source.cpp

#include"Rectangle.h"
#include"Pair.h"
#include<iostream>

using namespace std;
int main()
{
	Pair z;
	z.Init(3, 4);
	z.Display();
	z.setA(5);
	z.setB(6);
	z.Display();
	cout << "dobutok(z) = " << z.dobutok() << endl << endl;
	Rectangle s;
	s.Init(3,4);
	s.Read();
	cout << "p(s) = " << s.p() << endl;
	cout << "s(s) = " << s.s() << endl;
	return 0;
}