#ifndef _BETA_H_
#define _BETA_H_
#pragma once
#include "Raza.h"

class Beta : public Raza
{
private:

public:

	Beta(int x, int y)
	{
		this->x = x;
		this->y = y;
		this->alto = 3;
		this->ancho = 13;
	}
	~Beta()
	{
	}
	void dibujar()
	{
		Console::SetCursorPosition(x, y);
		cout << "    .---.";
		Console::SetCursorPosition(x, y + 1);
		cout << "  _/__~0_\\_ ";
		Console::SetCursorPosition(x, y + 2);
		cout << " (_________) ";
	}
};


#endif // !_BETA_H_

