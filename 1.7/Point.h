//Point.h
#pragma once
#include<cmath>
class Point
{
private:
	double x;
	double y;
public:
	double GetX()  { return x; }
	double GetY()  { return y; }
	double SetX(double value) { x = value; return value; }
	double SetY(double value) { y = value; return value;}

	void Init(double value_x, double value_y)
	{
		x = value_x;
		y = value_y;
	}
	void Read();
	void Display();
	double Vidstan()
	{
		return sqrt(x * x + y * y);
	}
	double Vidstan_do_pochatky();
	const char* VidstanToNumeral();
	const char* toString();
};

