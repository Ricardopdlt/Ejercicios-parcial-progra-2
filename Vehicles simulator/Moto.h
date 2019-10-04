#ifndef _MOTO_H_
#define _MOTO_H_

#include "VeTerrestre.h"

class Moto : public Terrestre
{
private:

public:

	Moto() :Terrestre()
	{
		this->largo = 7;
		this->alto = 5;
		this->color = 4;
	}

	~Moto() {}

	void imprimir()
	{
		Console::SetCursorPosition(x, y);
		Console::ForegroundColor = (ConsoleColor)color;
		cout << "  ._O_. ";
		Console::SetCursorPosition(x, y + 1);
		cout << "//_\o/_\\";
		Console::SetCursorPosition(x, y + 2);
		cout << "  //H\\";
		Console::SetCursorPosition(x, y + 3);
		cout << "  (=O=)";
		Console::SetCursorPosition(x, y + 4);
		cout << "    U   ";
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
#endif // !_MOTO_H_