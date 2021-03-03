//Point.cpp
#include "Point.h"
#include <string>
#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

void Point::Read()
{
	double a, b;
	cout << "Input complex value:" << endl;
	cout << " x = "; cin >> a;
	cout << " y = "; cin >> b;
	Init(a, b);
}
void Point::Display()
{
	cout << endl;
	cout << "x = " << GetX() << endl;
	cout << "y = " << GetY() << endl;
}
const char* Point::toString()
{
	stringstream sout;
	sout << x << " + i * " << y << endl;
	return sout.str().c_str();
}
double  Point::Vidstan_do_pochatky()
{
	double x1 = 0.0;
	double y1 = 0.0;
	return sqrt((x-x1)* (x-x1) + (y-y1) * (y-y1));
}
const char* Point::VidstanToNumeral()
{
	const char* _centuries[11] = { "", "sto",
	"dvisti", "trysta",
	"chotyrysta", "pjatsot",
	"schistsot", "simsot",
	"visimsot", "devjatsot",
	"tysiacha abo >" };
	const char* _decades[10] = { "", "",
	"dvadciat", "trydciat",
	"sorok", "pjatdesiat",
	"schistdesiat", "simdesiat",
	"visimdesiat", "devjanosto" };
	const char* _digits[20] = { "", "odyn",
	"dva", "try",
	"chotyry", "pjat",
	"schistí", "sim",
	"visim", "devjat",
	"desiat", "odynadciadí",
	"dvanadciad", "trynadciad",
	"chotyrnadciad", "pjatnadciad",
	"schistnadciad", "simnadciad",
	"visimnadciad", "devjatnadciad" };
	if (Vidstan() >= 1000)
		return _centuries[10];
	int vidstan = floor(Vidstan());
	int cen = vidstan / 100;
	vidstan = vidstan % 100;
	int dec = vidstan / 10;
	int dig;
	if (dec == 0 || dec == 1)
		dig = vidstan % 20;
	else
		dig = vidstan % 10;
	char s[100] = "";
	strcat_s(s, _centuries[cen]);
	strcat_s(s, " ");
	strcat_s(s, _decades[dec]);
	strcat_s(s, " ");
	strcat_s(s, _digits[dig]);
	return s;
}
