//Rectangle.h
#pragma once
#include <string>
using namespace std;
class Rectangle
{
	class Pair
	{
	private:
		double a, b;
	public:
		double getA() { return a; }
		void setA(double value) { a = value; }
		double getB() { return b; }
		void setB(double value) { b = value; }

		void Init(double a1, double b1)
		{
			a = a1;
			b = b1;
		}
		void Display();
		void Read();
	};
private:
	double a, b;
public:
	double getA() const { return a; }
	double getB() const { return b; }
	void setA(double a) { this->a = a; }
	void setB(double b) { this->b = b; }

	double p()
	{
		return 2 * (a + b);
	}
	double s()
	{
		return a * b;
	}
	void Init(double a, double b);
	void Display();
	void Read();

};

