//ModelWindow.cpp
#include "ModelWindow.h"
#include <iostream>
#include<string>
using namespace std;
void ModelWindow::setName(string value)
{ 
	name = value; 
}
bool ModelWindow::setCoord(int a)
{ 
	coord = a; 
	return a ;
}
bool  ModelWindow::setSizev(int value)
{ 
	sizev = value; 
	return value;
}
bool ModelWindow::setSizeh(int b)
{ 
	sizeh = b;
	return b;
}
void ModelWindow::setColor(string col1)
{
	color = col1; 
	
}
void ModelWindow::setVudurornevud(string value)
{
	vudurornevud = value; 
}
void ModelWindow::setZramkorbez(string value)
{
	zramkorbez = value; 
}
void ModelWindow::Read()
{
	string name;
	int coord;
	int sizev;
	int sizeh;
	string color;
	string vudurornevud;
	string zramkorbez;
	cout << " name = ? "; cin >> name;
	cout << "color = ? "; cin >> color;
	cout << "vudurornevud = ? "; cin >> vudurornevud;
	cout << "zramkorbez = ? "; cin >> zramkorbez;
	cout << " coord = ? "; cin >> coord;
	cout << " sizev = ? "; cin >> sizev;
	cout << " sizeh = ? "; cin >> sizeh;
}
void ModelWindow::Display() 
{
	cout << " name = wind " << name << endl;
	cout << " coord =  " << coord << endl;
	cout << " sizev = " << sizev << endl;
	cout << " sizeh = " << sizeh << endl;
	cout << " color = pink " << color << endl;
	cout << " vudurornevud = yes " << vudurornevud << endl;
	cout << " zramkorbez = no " << zramkorbez << endl;
}
