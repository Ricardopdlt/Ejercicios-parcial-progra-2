#ifndef _SEDE_H_
#define _SEDE_H_
#pragma once
#include "AgenteSeguridad.h"

class Sede
{
private:

	AgenteSeguridad** ListaA;
	int *C;
	string Nombre;

public:

	Sede();
	Sede(string nom = " ");
	~Sede();
	void setNombre(string nom);
	string getNombre();
	AgenteSeguridad* getAgente(int pos);
	int getC();
	void AgregarAgente(AgenteSeguridad* obj);
	void EliminarAgente(int pos);

};
Sede::Sede()
{
	ListaA = NULL;
	C = new int;
	*C = 0;
	this->Nombre = " ";
}
Sede::Sede(string nom)
{
	ListaA = NULL;
	C = new int;
	*C = 0;
	this->Nombre = nom;
}
Sede::~Sede()
{
	delete[] ListaA;
	delete C;
}
void Sede::setNombre(string nom)
{
	this->Nombre = nom;
}
string Sede::getNombre()
{
	return this->Nombre;
}
AgenteSeguridad* Sede::getAgente(int pos)
{
	return ListaA[pos - 1];
}
int Sede::getC()
{
	return *C;
}
void Sede::AgregarAgente(AgenteSeguridad* obj)
{
	AgenteSeguridad** aux = new AgenteSeguridad*[*C + 1];

	for (int i = 0; i < *C; i++)
	{
		aux[i] = ListaA[i];
	}
	aux[*C] = obj;
	*C = *C + 1;
	if (ListaA != NULL)
	{
		delete ListaA;
	}
	ListaA = aux;
}
void Sede::EliminarAgente(int pos)
{
	AgenteSeguridad** aux = new AgenteSeguridad*[*C - 1];

	for (int i = 0; i < pos - 1; i++)
	{
		aux[i] = ListaA[i];
	}
	for (int i = pos - 1; i < *C; i++)
	{
		aux[i] = ListaA[i + 1];
	}
	*C = *C - 1;
	if (ListaA != NULL)
	{
		delete ListaA;
	}
	ListaA = aux;
}
#endif // !_SEDE_H_

