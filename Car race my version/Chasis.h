#ifndef _CHASIS_H_
#define _CHASIS_H_

#include <iostream>
#include <conio.h>

using namespace std;
using namespace System;

class Chasis
{
private:

	int x;
	int y;
	int dx;
	int color;

public:

	Chasis(int x = 0, int y = 0, int dx = 0, int color = 1)
	{
		this->x = x;
		this->y = y;
		this->color = color;
		this->dx = dx;
	}
	~Chasis() {}

	void Dibujar()
	{
		Console::ForegroundColor = (ConsoleColor)color;

		for (int i = 0; i < 4; i++)
		{
			Console::SetCursorPosition(this->x + i, this->y +1);
			cout << (char)220;
		}
		

	}

	void Borrar()
	{
		
		for (int i = 0; i < 4; i++)
		{
			Console::SetCursorPosition(this->x + i, this->y + 1);
			cout << " ";
		}

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
