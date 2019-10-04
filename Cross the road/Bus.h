#ifndef _BUS_H_
#define _BUS_H_

#include "Terrestre.h"

class Bus :public Terrestre
{
private:

public:

	Bus(int x, int y, int dx) :Terrestre()
	{
		this->x = x;
		this->y = y;
		this->dx = dx;
		this->largo = 18;
		this->alto = 4;
	}
	~Bus() {}

	void dibujar()
	{
		Console::ForegroundColor = ConsoleColor::DarkYellow;

		if (dx == 1 || dx == 2)
		{
			Console::SetCursorPosition(x, y);
			cout << "  ______________  ";
			Console::SetCursorPosition(x, y + 1);
			cout << " |[][][][][]|_\_  ";
			Console::SetCursorPosition(x, y + 2);
			cout << "  |             ) ";
			Console::SetCursorPosition(x, y + 3);
			cout << " =-OO-------OO--= ";
		}
		if (dx == -1 || dx == -2)
		{
			Console::SetCursorPosition(x, y);
			cout << "  ______________  ";
			Console::SetCursorPosition(x, y + 1);
			cout << "  _/_|[][][][][]| ";
			Console::SetCursorPosition(x, y + 2);
			cout << " (             |  ";
			Console::SetCursorPosition(x, y + 3);
			cout << " =--OO-------OO-= ";
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
				cout << " Moriste atropellado por un bus " << endl;
			}

			exit(0);
		}

	}
};
#endif // !_BUS_H_
