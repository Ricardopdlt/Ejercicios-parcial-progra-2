#ifndef _TERRESTRE_H_
#define _TERRESTRE_H_

#include "Vehiculo.h"

class Terrestre : public Vehiculo
{
private:

public:
	Terrestre() :Vehiculo()
	{
		this->x = 1;
		this->y = 8;
	}
	~Terrestre() {}
	void mover()
	{
		if (x + dx < 0 || x + dx + largo>79)
		{
			dx = dx*-1;
		}

		x = x + dx;
	}
};
#endif // !_TERRESTRE_H_