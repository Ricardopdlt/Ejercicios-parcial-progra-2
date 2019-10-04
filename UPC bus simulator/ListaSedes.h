#ifndef _LISTA_SED_H_
#define _LISTA_SED_H_
#include "Sede.h"
#pragma once

class ListaSedes
{
private:

	Sede** ListaSe;
	int *D;

public:

	ListaSedes();
	~ListaSedes();
	Sede* getSede(int pos);
	int getD();
	void AgregarSede(Sede* obj);

};
ListaSedes::ListaSedes()
{
	ListaSe = NULL;
	D = new int;
	*D = 0;
}
ListaSedes::~ListaSedes()
{
	delete[] ListaSe;
	delete D;
}
Sede* ListaSedes::getSede(int pos)
{
	return ListaSe[pos - 1];
}
int ListaSedes::getD()
{
	return *D;
}
void ListaSedes::AgregarSede(Sede* obj)
{
	Sede** aux = new Sede*[*D + 1];

	for (int i = 0; i < *D; i++)
	{
		aux[i] = ListaSe[i];
	}
	aux[*D] = obj;
	*D = *D + 1;

	if (ListaSe != NULL)
	{
		delete ListaSe;
	}

	ListaSe = aux;
}
#endif // !_LISTA_SED_H_
