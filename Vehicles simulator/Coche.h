#ifndef _COCHE_H_
#define _COCHE_H_
#include "VeTerrestre.h"

class Coche : public Terrestre
{
private:

public:

	Coche() :Terrestre()
	{
		this->largo = 14;
		this->alto = 14;
		this->color = 12;
	}

	~Coche() {}

	void imprimir()
	{
		Console::SetCursorPosition(x, y);
		Console::ForegroundColor = (ConsoleColor)color;
		cout << " ______       ";
		Console::SetCursorPosition(x, y + 1);
		cout << "/|_| |_\`.__";
		Console::SetCursorPosition(x, y + 2);
		cout << "( _    _ _\\";
		Console::SetCursorPosition(x, y + 3);
		cout << "=`-(_)--(_)-'";
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

#endif // !_COCHE_H_

