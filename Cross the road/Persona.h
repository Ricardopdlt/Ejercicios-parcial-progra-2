#ifndef _PERSONA_H_
#define _PERSONA_H_
#include "Configuracion.h"

class Persona
{
private:

	int x;
	int y;

public:

	Persona(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	~Persona() {}

	void dibujar()
	{
		Console::ForegroundColor = ConsoleColor::Green;
		Console::SetCursorPosition(x, y);
		cout << char(254);
	}
	void borrar()
	{
		Console::SetCursorPosition(x, y);
		cout << " ";
	}

	void mover()
	{
		if (_kbhit()) {
			char tecla = _getch();
			borrar();
			if (tecla == IZQ && x > 0) x--;
			if (tecla == DER && x < 79) x++;
			if (tecla == ARRIBA && y > 0) y--;
			if (tecla == ABAJO && y < 50) y++;
			dibujar();
		}
	}

	void setX()
	{
		this->x = Xi;
	}
	void setY()
	{
		this->y = Yi;
	}

	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
};

#endif // !_PERSONA_H_