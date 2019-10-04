#ifndef _AGENT_H_
#define _AGENT_H_
#pragma once
#include "RegistroSalida.h"

class AgenteSeguridad
{
private:

	RegistroSalida** ListaS;
	int *N;
	string Nombre;
	string Apellido;
	long DNI;

public:

	AgenteSeguridad();
	AgenteSeguridad(string nom = " ", string ap = " ", long dni = 0);
	~AgenteSeguridad();
	void setNombre(string nom);
	string getNombre();
	void setApellido(string ap);
	string getApellido();
	void setDNI(long dni);
	long getDNI();
	RegistroSalida* getSalida(int pos);
	int getN();
	void AgregarSalida(RegistroSalida* obj);
	void EliminarSalida(int pos);

};
AgenteSeguridad::AgenteSeguridad()
{
	ListaS = NULL;
	this->Nombre = " ";
	this->Apellido = " ";
	this->DNI = 0;
	N = new int;
	*N = 0;
}
AgenteSeguridad::AgenteSeguridad(string nom, string ap, long dni)
{
	ListaS = NULL;
	this->Nombre = nom;
	this->Apellido = ap;
	this->DNI = dni;
	N = new int;
	*N = 0;
}
AgenteSeguridad::~AgenteSeguridad()
{
	delete[] ListaS;
	delete N;
}
void AgenteSeguridad::setNombre(string nom)
{
	this->Nombre = nom;
}
string AgenteSeguridad::getNombre()
{
	return this->Nombre;
}
void AgenteSeguridad::setApellido(string ap)
{
	this->Apellido = ap;
}
string AgenteSeguridad::getApellido()
{
	return this->Apellido;
}
void AgenteSeguridad::setDNI(long dni)
{
	this->DNI = dni;
}
long AgenteSeguridad::getDNI()
{
	return this->DNI;
}
RegistroSalida* AgenteSeguridad::getSalida(int pos)
{
	return ListaS[pos - 1];
}
int AgenteSeguridad::getN()
{
	return *N;
}
void AgenteSeguridad::AgregarSalida(RegistroSalida* obj)
{
	RegistroSalida** aux = new RegistroSalida*[*N + 1];

	for (int i = 0; i < *N; i++)
	{
		aux[i] = ListaS[i];
	}
	aux[*N] = obj;
	*N = *N + 1;
	if (ListaS != NULL)
	{
		delete ListaS;
	}
	ListaS = aux;
}
void AgenteSeguridad::EliminarSalida(int pos)
{
	RegistroSalida** aux = new RegistroSalida*[*N - 1];

	for (int i = 0; i < pos-1; i++)
	{
		aux[i] = ListaS[i];
	}
	for (int i = pos - 1; i < *N; i++)
	{
		aux[i] = ListaS[i + 1];
	}
	*N = *N - 1;
	if (ListaS != NULL)
	{
		delete ListaS;
	}
	ListaS = aux;
}
#endif // !_AGENT_H_
