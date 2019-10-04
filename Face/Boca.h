#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace System;
using namespace std;

class CBoca
{

private:

	int PosX;
	int PosY;

public:

	CBoca(int x, int y);
	~CBoca();

	void Boca_Neutral();
	void Boca_Alegre();
	void Boca_Triste();


};
CBoca::CBoca(int x = 0, int y = 0)
{
	this->PosX = x;
	this->PosY = y;
}
CBoca::~CBoca()
{
}
void CBoca::Boca_Neutral()
{
	Console::ForegroundColor = ConsoleColor::White;

	for (int i = 0; i < 6; i++)
	{
		Console::SetCursorPosition(PosX + i, PosY);
		cout << char(220);
	}
	
}
void CBoca::Boca_Alegre()
{
	Console::ForegroundColor = ConsoleColor::White;

	Console::SetCursorPosition(PosX -1, PosY);
	cout << char(223);
	Console::SetCursorPosition(PosX + 4, PosY);
	cout << char(223);

	for (int i = 0; i < 4; i++)
	{
		Console::SetCursorPosition(PosX + i, PosY);
		cout << char(220);
	}

}
void CBoca::Boca_Triste()
{
	Console::ForegroundColor = ConsoleColor::White;

	Console::SetCursorPosition(PosX - 1, PosY);
	cout << char(220);
	Console::SetCursorPosition(PosX + 4, PosY);
	cout << char(220);

	for (int i = 0; i < 4; i++)
	{
		Console::SetCursorPosition(PosX + i, PosY);
		cout << char(223);
	}

}