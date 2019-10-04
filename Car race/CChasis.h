#pragma once

#include <iostream>

using namespace System;
using namespace std;

class CChasis
{
public:
	CChasis();
	CChasis(int x, int y, int color);
	~CChasis();

	int Get_x();
	int Get_y();
	int Get_color();
	char Get_forma();

	void Set_x(int x);
	void Set_y(int y);
	void Set_color(int color);
	void Set_forma(char forma);

	void DibujarChasis();
	void BorrarChasis();

private:
	int x;
	int y;
	int color;
	char forma;
};

CChasis::CChasis()
{
}

CChasis::CChasis(int x, int y, int color)
{
	this->x = x;
	this->y = y;
	this->color = color;
	this->forma = char(220);
}

CChasis::~CChasis()
{
}

int CChasis::Get_x() { return this->x; }
int CChasis::Get_y() { return this->y; }
int CChasis::Get_color() { return this->color; }
char CChasis::Get_forma() { return this->forma; }


void CChasis::Set_x(int x) { this->x = x; }
void CChasis::Set_y(int y) { this->y = y; }
void CChasis::Set_color(int color) { this->color = color; }
void CChasis::Set_forma(char forma) { this->forma = forma; }

void CChasis::DibujarChasis()
{
	Console::ForegroundColor = ConsoleColor(color);
	for (int i = 0; i < 5; i++) {
		Console::SetCursorPosition(x-i, y);
		cout << forma;
	}
}

void CChasis::BorrarChasis()
{
	for (int i = 0; i < 5; i++) {
		Console::SetCursorPosition(x - i, y);
		cout << " ";
	}
}