#ifndef _BICICLETA_H_
#define _BICICLETA_H_

#include "Terrestre.h"

class Bicicleta :public Terrestre
{
private:

public:

	Bicicleta(int x, int y, int dx) :Terrestre()
	{
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->alto = 2;
		this->largo = 8;
	}
	~Bicicleta() {}

	void dibujar()
	{
		Console::ForegroundColor = ConsoleColor::White;

		if (dx == 1 || dx == 2)
		{
			Console::SetCursorPosition(x, y);
			cout << "  .._\  ";
			Console::SetCursorPosition(x, y + 1);
			cout << " (o)(o) ";
		}
		if (dx == -1 || dx == -2)
		{
			Console::SetCursorPosition(x, y);
			cout << "  /_..  ";
			Console::SetCursorPosition(x, y + 1);
			cout << " (o)(o) ";
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
		if (persona->getX() >= this->x && persona->getX() <= this->x + largo - 1 && persona->getY() >= this->y && persona->getY() <= this->y + alto -1)
		{
			persona->borrar();
			persona->setX();
			persona->setY();
			persona->dibujar();
		}
	}

};
#endif // !_BICICLETA_H_
