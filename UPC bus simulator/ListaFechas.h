#ifndef _LISTAF_H_
#define _LISTAF_H_
#include "Fecha.h"

class ListaFechas
{
private:

	Fecha** ListaF;
	int* F;

public:

	ListaFechas();
	~ListaFechas();
	Fecha* getFecha(int pos);
	int getF();
	void AgregarFecha(Fecha* obj);

};

ListaFechas::ListaFechas()
{
	ListaF = NULL;
	F = new int;
	*F = 0;
}

ListaFechas::~ListaFechas()
{
	delete[] ListaF;
	delete F;
}

Fecha* ListaFechas::getFecha(int pos)
{
	return ListaF[pos];
}

int ListaFechas::getF()
{
	return *F;
}

void ListaFechas::AgregarFecha(Fecha* obj)
{
	Fecha** aux = new Fecha*[*F + 1];

	for (int i = 0; i < *F; i++)
	{
		aux[i] = ListaF[i];
	}
	aux[*F] = obj;
	*F = *F + 1;
	if (ListaF != NULL)
	{
		delete ListaF;
	}
	ListaF = aux;
}

#endif // !_LISTAF_H_

