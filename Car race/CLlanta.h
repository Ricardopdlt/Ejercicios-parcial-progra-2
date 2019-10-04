#pragma once

using namespace System;
using namespace std;

class CLlanta
{
public:
	CLlanta();
	CLlanta(int x, int y, int color);
	~CLlanta();

	int Get_x();
	int Get_y();
	int Get_color();
	char Get_forma();

	void Set_x(int x);
	void Set_y(int y);
	void Set_color(int color);
	void Set_forma(char forma);

	void DibujarLlanta();
	void BorrarLlanta();

private:
	int x;
	int y;
	int color;
	char forma;
};

CLlanta::CLlanta()
{
}

CLlanta::CLlanta(int x, int y, int color)
{
	this->x = x;
	this->y = y;
	this->color = color;
	this->forma = char(219);
}

CLlanta::~CLlanta()
{
}

int CLlanta::Get_x() { return this->x; }
int CLlanta::Get_y() { return this->y; }
int CLlanta::Get_color() { return this->color; }
char CLlanta::Get_forma() { return this->forma; }


void CLlanta::Set_x(int x) { this->x = x; }
void CLlanta::Set_y(int y) { this->y = y; }
void CLlanta::Set_color(int color) { this->color = color; }
void CLlanta::Set_forma(char forma) { this->forma = forma; }

void CLlanta::DibujarLlanta()
{
	Console::ForegroundColor = ConsoleColor(color);
	Console::SetCursorPosition(x, y);
	cout << forma;
}

void CLlanta::BorrarLlanta()
{
	Console::SetCursorPosition(x, y);
	cout << " ";
}
