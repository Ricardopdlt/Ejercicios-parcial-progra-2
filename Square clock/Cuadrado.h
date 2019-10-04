#ifndef _CUADRADO_H_
#define _CUADRADO_H_
#define LARGO_CONSOLA 100
#define ALTO_CONSOLA 50
#include <iostream>

using namespace std;
using namespace System;

class Cuadrado
{
private:
	int x;
	int y;
	int largo;
	int alto;
	int dx;
	int dy;
	int color;

public:
	Cuadrado(int x = 0, int y = 0, int color = 1)
	{
		this->x = x;
		this->y = y;
		this->largo = 2;
		this->alto = 2;
		this->color = color;
		this->dx = 1;
		this->dy = 0;
	}
	~Cuadrado() {}

	void imprimir()
	{
		Console::ForegroundColor = (ConsoleColor)color;
		Console::SetCursorPosition(this->x, this->y);
		cout << (char)219 << (char)219;
		Console::SetCursorPosition(this->x, this->y + 1);
		cout << (char)219 << (char)219;
	}
	void borrar()
	{
		for (int i = 0; i < largo; i++)
			for (int j = 0; j < alto; j++)
			{
				Console::SetCursorPosition(this->x + i, this->y + j);
				cout << " ";
			}
	}
	void mover()
	{
		bool Dx = true;
		bool Dy = false;

		borrar();
		if ((this->x + this->largo + this->dx) > LARGO_CONSOLA)
		{
			Dx = false;
			Dy = true;
			this->dy = -1;
			this->dy *= -1;
		}
		if ((this->x + this->dx) < 0)
		{
			Dx = false;
			Dy = true;
			this->dy = 1;
			this->dy *= -1;
		}
		if ((this->y + this->alto + this->dy) > ALTO_CONSOLA -1)
		{
			Dx = true;
			Dy = false;
			this->dx = 1;
			this->dx *= -1;
		}
		if ((this->y + this->dy) < 0)
		{
			Dx = true;
			Dy = false;
			this->dx = -1;
			this->dx *= -1;
		}

		if (Dx == true)
		{
			this->x += this->dx;
		}
		if (Dy == true)
		{
			this->y += this->dy;
		}
		//y += dy;
		imprimir();
	}
	int getX() { return this->x; }
	void setX(int x) { this->x = x; }

	int getY() { return this->y; }
	void setY(int y) { this->y = y; }

	int getLargo() { return this->largo; }
	void setLargo(int largo) { this->largo = largo; }

	int getAlto() { return this->alto; }
	void setAlto(int alto) { this->alto = alto; }

	int getDx() { return this->dx; }
	void setDx(int dx) { this->dx = dx; }

	int getDy() { return this->dy; }
	void setDy(int dy) { this->dy = dy; }

	int getColor() { return this->color; }
	void setColor(int color) { this->color = color; }
};
#endif
