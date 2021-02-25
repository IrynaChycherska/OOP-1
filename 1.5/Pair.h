//Pair.h
#pragma once
#include<string>
using namespace std;
class Pair
{
private:
	double a, b;
public:
	double getA() { return a; }
	void setA(double value) { a = value; }
	double getB(){ return b; }
	void setB(double value) { b = value; }

	double dobutok();
	void Init(double a1, double b1)
	{
		a = a1;
		b = b1;
	}
	void Display();
	void Read();
};

