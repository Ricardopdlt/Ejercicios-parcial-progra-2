#ifndef _ALFA_H_
#define _ALFA_H_
#pragma once
#include "Raza.h"

class Alfa :public Raza
{
private:

public:
	Alfa(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->alto = 5;
		this->ancho = 21;
	}
	~Alfa()
	{
	}
	void dibujar()
	{
		Console::SetCursorPosition(x, y);
		cout << "       _.---._" << endl;
		Console::SetCursorPosition(x, y + 1);
		cout << "     .'       '." << endl;
		Console::SetCursorPosition(x, y + 2);
		cout << " _.-~===========~-._" << endl;
		Console::SetCursorPosition(x, y + 3);
		cout << "(___________________)" << endl;
		Console::SetCursorPosition(x, y + 4);
		cout << "     \\_________/" << endl;
	}
	

};
#endif // !_ALFA_H_
