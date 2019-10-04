#ifndef _AEREO_H_
#define _AEREO_H_

#include "Vehiculo.h"

class Aereo:public Vehiculo
{
protected:
	int dy;

public:
	Aereo():Vehiculo()
	{
		this->x = 20;
		this->y = 8;
		this->dy = 1;
	}
	~Aereo(){}
	void mover()
	{
		if (x + dx < 0 || x + dx + largo>77)
		{
			dx = dx*-1;
		}
		if (y + dy < 8 || y + dy + alto>17)
		{
			dy = dy*-1;
		}

		x = x + dx;
		y = y + dy;
	}
};
#endif // !_AEREO_H_