#include "Time.h"
#include <iostream>

using namespace std;
Time makeTime(int hod, int khv)
{
	Time a;
	a.Init(hod, khv);

	return a;
}

int main()
{

	Time a;
	a.Read();
	a.Display();
	int hod, khv;
	cout << "Input complex value:" << endl << endl;
	cout << " first = "; cin >> hod;
	cout << " second = "; cin >> khv;
	a = makeTime(hod, khv);
	a.minutes(60);
	a.Display();
	cin.get();
	return 0;
}