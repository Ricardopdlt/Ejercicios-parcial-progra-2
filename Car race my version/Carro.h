#ifndef _CARRO_H_
#define _CARRO_H_

#include <iostream>
#include "Llanta.h"
#include "Chasis.h"

using namespace std;
using namespace System;

class Carro
{
private:

	int x;
	int y;
	int dx;
	int color;
	Llanta* arrLlanta = new Llanta();
	Chasis* arrChasis = new Chasis();
	   
public:

	Carro(int x = 0, int y = 0, int dx = 0, int color = 1)
	{
		this->x = x;
		this->y = y;
		this->color = color;
		this->dx = dx;

		arrLlanta = new Llanta(this->x, this->y, this->dx, this->color);
		arrChasis = new Chasis(this->x, this->y, this->dx, this->color);

	}

	~Carro() {}

	void Imprimir_Carro()
	{
	
		arrLlanta->Dibujar();
		arrChasis->Dibujar();

	}

	void Borrar_Carro()
	{

		arrLlanta->Borrar();
		arrChasis->Borrar();

	}

	void Mover_Carro()
	{

		Borrar_Carro();

		arrLlanta->Mover();
		arrChasis->Mover();

		Imprimir_Carro();

	}




};

#endif
