#pragma once
class Time
{
	int first, second;
public:
	bool Init(int hod, int khv);
	void Read();
	void Display();
	int minutes(int h)
	{
		first *= h;
		second = second;
		return h;
	}
	double GetFirst() const { return first; }
	double GetSecond() const { return second; }
};

