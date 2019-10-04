#ifndef _TERRESTRE_H_
#define _TERRESTRE_H_

#include "Persona.h"

class Terrestre
{
protected:

	int x;
	int y;
	int alto;
	int largo;
	int dx;

public:

	Terrestre() : x(0), y(0), alto(0), largo(0), dx(0) {}
	~Terrestre() {}
	virtual void dibujar() = 0;
	virtual void borrar() = 0;
	virtual void Colision(Persona* per) = 0;

	void mover()
	{
		if (x + dx < 0 || x + dx + largo > 80)
		{
			dx = dx * -1;
		}

		x += dx;
	}

	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getLargo()
	{
		return this->largo;
	}
	int getAlto()
	{
		return this->alto;
	}
};

#endif // !_VEHICULO_H_
