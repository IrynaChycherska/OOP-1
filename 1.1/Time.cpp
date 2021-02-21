#include "Time.h"
#include <iostream>
#include<cmath>
#include <chrono>

using namespace std;
bool Time::Init(int hod, int khv)
{
	if (hod > 0 && khv > 0)
	{
		first = hod;
		second = khv;
		return true;
	}
	else
	{
		return false;
	}
}
void Time::Read()
{
	int hod, khv;
	do
	{
		cout << "first  = ? "; cin >> hod;
		cout << "second = ? "; cin >> khv;
	} while (!Init(hod, khv));
}
void Time::Display()
{
	cout << "first = " << first << endl << "second = " << second << endl;
}
