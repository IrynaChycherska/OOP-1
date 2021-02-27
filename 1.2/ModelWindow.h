//ModelWindow.h
#pragma once
#include<string>
#include<cmath>
using namespace std;

class ModelWindow
{
private:
	string name;
	int coord;
	int sizev;
	int sizeh;
	string color;
	string vudurornevud;
	string zramkorbez;
public:
	string getName() const { return name; }
	int getCoord() { return coord; }
	int getSizev() { return sizev; }
	int getSizeh() { return sizeh; }
	string getColor() { return color; }
	string getVudurornevud() { return vudurornevud; }
	string getZramkorbez() { return zramkorbez; }

	void setName(string);
	bool setCoord(int );
	bool setSizev(int);
	bool setSizeh(int);
	void setColor(string);
	void setVudurornevud(string);
	void setZramkorbez(string);

	bool Init(int value_v, int value_h, string value_c, int value_x)
	{
		sizev = value_v;
		sizeh = value_h;
		color = value_c;
		coord = value_x;
		return value_v && value_h && value_x;
	}
	void Read();
	void Display();
	
};