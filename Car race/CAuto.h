#pragma once

#include "CLlanta.h"
#include "CChasis.h"

class CAuto
{
public:
	CAuto();
	CAuto(int x, int y, int color, int dx);
	~CAuto();

	bool Get_enMeta();
	int Get_color();

	//
	//metodos de acceso
	//
	void Dibujar();
	void Mover(int meta);
	void Borrar();

private:
	CLlanta* llantaSI;
	CLlanta* llantaSD;
	CLlanta* llantaII;
	CLlanta* llantaID;
	CChasis* chasis;
	int dx;
	int x;
	int y;
	int color;
	bool enMeta;
};

CAuto::CAuto()
{
}

CAuto::CAuto(int x, int y, int color, int dx)
{
	Random r;
	this->dx = dx;
	this->x = x;
	this->y = y;
	this->color = color;
	enMeta = false;
	chasis = new CChasis(x, y, color);
	llantaSI = new CLlanta(x - 2, y - 1, color);
	llantaSD = new CLlanta(x - 2, y + 1, color);
	llantaII = new CLlanta(x - 4, y - 1, color);
	llantaID = new CLlanta(x - 4, y + 1, color);

}

CAuto::~CAuto()
{
}

bool CAuto::Get_enMeta() { return this->enMeta; }
int CAuto::Get_color() { return this->color; }

void CAuto::Dibujar()
{
	llantaSI->DibujarLlanta();
	llantaSD->DibujarLlanta();
	chasis->DibujarChasis();
	llantaII->DibujarLlanta();
	llantaID->DibujarLlanta();
}

void CAuto::Mover(int meta)
{
	if (x + dx < meta) {
		x += dx;
	}
	else {
		enMeta = true;
	}

	chasis->Set_x(x);
	llantaSI->Set_x(x-2);
	llantaSD->Set_x(x-2);
	llantaII->Set_x(x-4);
	llantaID->Set_x(x-4);
}

void CAuto::Borrar()
{
	llantaSI->BorrarLlanta();
	llantaSD->BorrarLlanta();
	chasis->BorrarChasis();
	llantaII->BorrarLlanta();
	llantaID->BorrarLlanta();
}