#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

class COjo
{

private:

	int PosX;
	int PosY;


public:

	COjo(int x, int y);
	~COjo();

	void Ojos_Neutrales();
	void Ojos_Alegres();
	void Ojos_Tristes();


};
COjo::COjo(int x = 0, int y = 0)
{
	this->PosX = x;
	this->PosY = y;
}
COjo::~COjo()
{
}
void COjo::Ojos_Neutrales()
{
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(PosX, PosY);
	cout << char(219);
	Console::SetCursorPosition(PosX+3, PosY);
	cout << char(219);


}
void COjo::Ojos_Alegres()
{
	Console::ForegroundColor = ConsoleColor::DarkGreen;
	Console::SetCursorPosition(PosX, PosY);
	cout << char(219);
	Console::SetCursorPosition(PosX + 3, PosY);
	cout << char(219);


}

void COjo::Ojos_Tristes()
{
	Console::ForegroundColor = ConsoleColor::DarkRed;
	Console::SetCursorPosition(PosX, PosY);
	cout << char(219);
	Console::SetCursorPosition(PosX + 3, PosY);
	cout << char(219);


}