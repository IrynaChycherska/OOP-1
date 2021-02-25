//Rectangle.cpp
#include "Rectangle.h"
#include<iostream>
#include<sstream>
#include<cmath>

using namespace std;
void Rectangle::Init(double a, double b)
{
	setA(a);
	setB(b);
}
void Rectangle::Display()
{
	cout << endl;
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}
void  Rectangle::Read()
{
	double n;
	double m;
	cout << endl;
	cout << "b = ? "; cin >> n;
	cout << "a = ? "; cin >> m;
	Init(n, m);
}


void Rectangle::Pair::Read()
{
	double c, d;
	cout << endl;
	cout << "a = ? "; cin >> c;
	cout << "b = ? "; cin >> d;
	Init(c, d);
}
void Rectangle::Pair::Display()
{
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;
}