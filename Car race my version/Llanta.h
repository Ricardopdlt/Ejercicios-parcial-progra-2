#ifndef _LLANTA_H_
#define _LLANTA_H_

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class Llanta
{
private:

	int x;
	int y;
	int dx;
	int color;

public:

	Llanta(int x = 0, int y = 0, int dx = 0, int color = 1)
	{
		this->x = x;
		this->y = y;
		this->color = color;
		this->dx = dx;
	}
	~Llanta() {}

	void Dibujar()
	{
		Console::ForegroundColor = (ConsoleColor)color;
		Console::SetCursorPosition(this->x, this->y);
		cout << (char)219;
		Console::SetCursorPosition(this->x + 2, this->y);
		cout << (char)219;
		Console::SetCursorPosition(this->x, this->y + 2);
		cout << (char)220;
		Console::SetCursorPosition(this->x + 2, this->y + 2);
		cout << (char)220;
		Console::SetCursorPosition(this->x, this->y + 3);
		cout << (char)223;
		Console::SetCursorPosition(this->x + 2, this->y + 3);
		cout << (char)223;
		

	}

	void Borrar()
	{

		Console::SetCursorPosition(this->x, this->y);
		cout << " ";
		Console::SetCursorPosition(this->x + 2, this->y);
		cout << " ";
		Console::SetCursorPosition(this->x, this->y + 2);
		cout << " ";
		Console::SetCursorPosition(this->x + 2, this->y + 2);
		cout << " ";
		Console::SetCursorPosition(this->x, this->y + 3);
		cout << " ";
		Console::SetCursorPosition(this->x + 2, this->y + 3);
		cout << " ";

	}

	void Mover()
	{
		Borrar();

		if ((this->x + 4 + this->dx) > 100)
		{
			this->dx = 0;
			Dibujar();
			Console::SetCursorPosition(25, 20);
			cout << " TENEMOS UN GANADOR ";
			_getch();
			exit(0);
		}

		this->x += this->dx;

		Dibujar();

	}


};

#endif