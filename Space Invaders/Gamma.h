#ifndef _GAMMA_H_
#define _GAMMA_H_
#pragma once
#include "Raza.h"

class Gamma : public Raza
{
private:

public:
	Gamma(int x , int y)
	{
		this->x = x;
		this->y = y;
		this->alto = 10;
		this->ancho = 24;
	}
	~Gamma()
	{
	}
	void dibujar()
	{
		cout << "                ." << endl;
		Console::SetCursorPosition(x, y + 1);
		cout << "              |" << endl;
		Console::SetCursorPosition(x, y + 2);
		cout << "            .-\"^\"-." << endl;
		Console::SetCursorPosition(x, y + 3);
		cout << "           /_....._\\" << endl;
		Console::SetCursorPosition(x, y + 4);
		cout << "       .-\"`         `\"-." << endl;
		Console::SetCursorPosition(x, y + 5);
		cout << "      (  ooo  ooo  ooo  )" << endl;
		Console::SetCursorPosition(x, y + 6);
		cout << "       '-.,_________,.-'" << endl;
		Console::SetCursorPosition(x, y + 7);
		cout << "            /       \\" << endl;
		Console::SetCursorPosition(x, y + 8);
		cout << "         _/         \\_" << endl;
		Console::SetCursorPosition(x, y + 9);
		cout << "         `\"`         `\"`" << endl;
	}
};
#endif // !_GAMMA_H_

