#ifndef _HELICOPTERO_H_
#define _HELICOPTERO_H_

#include "VeAereo.h"

class Helicoptero :public Aereo
{
private:

public:

	Helicoptero() :Aereo()
	{
		this->largo =14;
		this->alto = 3;
		this->color = 5;
	}

	~Helicoptero() {}

	void imprimir()
	{
		Console::SetCursorPosition(x, y);
		Console::ForegroundColor = (ConsoleColor)color;
		cout << "   -----|-----";
		Console::SetCursorPosition(x, y + 1);
		cout << "*>=====[_]L)";
		Console::SetCursorPosition(x, y + 2);
		cout << "     -'-`-";
	}
	void borrar()
	{
		for (int i = 0; i < largo; i++)
			for (int j = 0; j < alto; j++)
			{
				Console::SetCursorPosition(x + i, y + j);
				cout << " ";
			}
	}

};
#endif // !_HELICOPTERO_H_