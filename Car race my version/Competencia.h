#ifndef _COMPETENCIA_H_
#define _COMPETENCIA_H_

#include <iostream>
#include "Carro.h"

using namespace std;
using namespace System;

class Competencia
{

private:

	Carro** arrCarro;
	int n;


public:

	Competencia()
	{
		n = 0;
		arrCarro = new Carro*[n];
	}
	~Competencia()
	{
		for (int i = 0; i < n; i++)
			delete arrCarro[i];
		delete[] arrCarro;
	}

	void agregarFigura(Carro *fig)
	{
		Carro **aux = new Carro*[n + 1];
		for (int i = 0; i < n; i++)
			aux[i] = arrCarro[i];

		aux[n] = fig;
		arrCarro = aux;
		n++;
	}
	
	void Dibujar_Figura()
	{
		for (int i = 0; i < n; i++)
			arrCarro[i]->Imprimir_Carro();
	}

	void moverFiguras()
	{
		for (int i = 0; i < n; i++)
			arrCarro[i]->Mover_Carro();
	}


};

#endif
