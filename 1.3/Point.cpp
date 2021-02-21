#include "Point.h"
#include <string>
#include<iostream>
#include<sstream>
#include<cmath>
using namespace std;

void Point::Read()
{
	double a,b;
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
const char* Point::VidstanToNumeral()
{
	const char* _centuries[11] = { "", "sto",
	"dvisti", "trysta",
	"chotyrysta", "p’jatsot",
	"schistsot", "simsot",
	"visimsot", "dev’jatsot",
	"tysiacha abo >" };
	const char* _decades[10] = { "", "",
	"dvadciat’", "trydciat’",
	"sorok", "p’jatdesiat",
	"schistdesiat", "simdesiat",
	"visimdesiat", "dev’janosto" };
	const char* _digits[20] = { "", "odyn",
	"dva", "try",
	"chotyry", "p’jat’",
	"schist’", "sim",
	"visim", "dev’jat’",
	"desiat’", "odynadciad’",
	"dvanadciad’", "trynadciad’",
	"chotyrnadciad’", "p’jatnadciad’",
	"schistnadciad’", "simnadciad’",
	"visimnadciad’", "dev’jatnadciad’" };
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
