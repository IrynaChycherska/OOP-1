#pragma once
#include<cmath>
class Point
{
private:
	double x;
	double y;
public:
	
	void SetX(double value) { x = value;}
	void SetY(double value) { y = value; }

	double GetX() const { return x; }
	double GetY() const { return y; }

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
	const char* VidstanToNumeral();
	const char* toString();

};

