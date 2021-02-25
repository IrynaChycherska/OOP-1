//Pair.cpp
#include "Pair.h"
#include<iostream>
#include<sstream>
#include<cmath>

void Pair::Read()
{
	double c,d;
	cout << endl;
	cout << "a = ? "; cin >> c;
	cout << "b = ? "; cin >> d;
	Init(c,d);
}
void Pair::Display() 
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
double Pair::dobutok()
{
	return a * b;
}
