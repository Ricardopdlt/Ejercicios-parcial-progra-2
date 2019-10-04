#ifndef _CARRO_H_
#define _CARRO_H_

#include "Terrestre.h"

class Carro :public Terrestre
{
private:

public:

	Carro(int x, int y, int dx) :Terrestre()
	{
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->largo = 13;
		this->alto = 3;
	}
	~Carro() {}

	void dibujar()
	{
		Console::ForegroundColor = ConsoleColor::DarkGreen;

		if (dx == 1 || dx == 2)
		{
			Console::SetCursorPosition(x, y);
			cout << " _____|~\_   ";
			Console::SetCursorPosition(x, y + 1);
			cout << " [_____|_|-] ";
			Console::SetCursorPosition(x, y + 2);
			cout << " (_)     (_) ";
		}
		if (dx == -1 || dx == -2)
		{
			Console::SetCursorPosition(x, y);
			cout << "   _/~|_____ ";
			Console::SetCursorPosition(x, y + 1);
			cout << " [-|_|_____] ";
			Console::SetCursorPosition(x, y + 2);
			cout << " (_)     (_) ";
		}
	}

	void borrar()
	{
		for (int i = 0; i < largo; i++)
		{
			for (int j = 0; j < alto; j++)
			{
				Console::SetCursorPosition(x + i, y + j);
				cout << " ";
			}
		}
	}

	void Colision(Persona* persona)
	{
		if (persona->getX() >= this->x && persona->getX() <= this->x + largo - 1 && persona->getY() >= this->y && persona->getY() <= this->y + alto - 1)
		{
			Console::Clear();
			for (int i = 0; i < 6000; i++)
			{
				Console::SetCursorPosition(20, 25);
				cout << " Moriste atropellado por un carro " <<endl;
			}
			exit(0);
		}

	}
};
#endif // !_CARRO_H_
