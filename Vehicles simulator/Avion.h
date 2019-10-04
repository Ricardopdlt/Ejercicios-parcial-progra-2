#ifndef _AVION_H_
#define _AVION_H_
#include "VeAereo.h"

class Avion :public Aereo
{
private:

public:

	Avion() :Aereo()
	{
		this->alto = 2;
		this->largo = 19;
		this->color = 10;
	}

	~Avion(){}

	void imprimir()
	{
		Console::SetCursorPosition(x, y);
		Console::ForegroundColor = (ConsoleColor)color;
		cout << "       __|__       ";
		Console::SetCursorPosition(x, y + 1);
		cout << "--o--o--(_)--o--o--";
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

#endif // !_AVION_H_