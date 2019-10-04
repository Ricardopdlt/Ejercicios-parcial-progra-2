#ifndef _CONTROLADOR_H
#define _CONTROLADOR_H_
#include "Coche.h"
#include "Avion.h"
#include "Moto.h"
#include "Helicoptero.h"

class Controlador
{
private:

	Coche* coche;
	Moto* moto;
	Avion* avion;
	Helicoptero* heli;

public:

	Controlador()
	{
		coche = new Coche();
		moto = new Moto();
		avion = new Avion();
		heli = new Helicoptero();
	}
	~Controlador() {}

	void mostrar(char opcion)
	{
		if (toupper(opcion) == 'C')
		{
			coche->imprimir();
		}
		if (toupper(opcion) == 'M')
		{
			moto->imprimir();
		}
		if (toupper(opcion) == 'A')
		{
			avion->imprimir();
		}
		if (toupper(opcion) == 'H')
		{
			heli->imprimir();
		}
	}
	void mover(char opcion)
	{
		if (toupper(opcion) == 'C')
		{
			coche->mover();
		}
		if (toupper(opcion) == 'M')
		{
			moto->mover();
		}
		if (toupper(opcion) == 'A')
		{
			avion->mover();
		}
		if (toupper(opcion) == 'H')
		{
			heli->mover();
		}
	}

	void borrar(char opcion)
	{
		if (toupper(opcion) == 'C')
		{
			coche->borrar();
		}
		if (toupper(opcion) == 'M')
		{
			moto->borrar();
		}
		if (toupper(opcion) == 'A')
		{
			avion->borrar();
		}
		if (toupper(opcion) == 'H')
		{
			heli->borrar();
		}
	}

};
#endif // !_CONTROLADOR_H