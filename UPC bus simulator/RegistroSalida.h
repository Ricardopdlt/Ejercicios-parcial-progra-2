#ifndef _SALIDA_H_
#define _SALIDA_H_
#pragma once
#include "Bus.h"
#include "Fecha.h"

class RegistroSalida
{
private:

	Bus* bus;
	Fecha* fecha;
	int hora;
	string origen; //campus de origen o salida
	string destino; //campus de destino
	int cant; //cantidad de pasajeros en el bus
	
public:

	RegistroSalida();
	RegistroSalida(int h = 0, string org = " ", string des = " ", int cant = 0);
	RegistroSalida(Bus* bus, int h = 0, string org = " ", string des = " ", int cant = 0);
	~RegistroSalida();
	void setBus(Bus*b);
	Bus* getBus();
	void setFecha(Fecha* f);
	Fecha* getFecha();
	void setHora(int h);
	int getHora();
	void setOrigen(string org);
	string getOrigen();
	void setDestino(string dest);
	string getDestino();
	void setCantidad(int cant);
	int getCantidad();

};
RegistroSalida::RegistroSalida()
{
	this->hora = 0;
	this->origen = " ";
	this->destino = " ";
	this->cant = 0;
}
RegistroSalida::RegistroSalida(int h , string org , string des , int cant )
{
	this->hora = h;
	this->origen = org;
	this->destino = des;
	this->cant = cant;
}
RegistroSalida::RegistroSalida(Bus* bus, int h, string org, string des, int cant)
{
	this->bus = bus;
	this->hora = h;
	this->origen = org;
	this->destino = des;
	this->cant = cant;
}
RegistroSalida::~RegistroSalida()
{
}
void RegistroSalida::setBus(Bus*b)
{
	this->bus = b;
}
Bus* RegistroSalida::getBus()
{
	return this->bus;
}
void RegistroSalida::setFecha(Fecha* f)
{
	this->fecha = f;
}
Fecha* RegistroSalida::getFecha()
{
	return this->fecha;
}
void RegistroSalida::setHora(int h)
{
	this->hora = h;
}
int RegistroSalida::getHora()
{
	return this->hora;
}
void RegistroSalida::setOrigen(string org)
{
	this->origen = org;
}
string RegistroSalida::getOrigen()
{
	return this->origen;
}
void RegistroSalida::setDestino(string dest)
{
	this->destino = dest;
}
string RegistroSalida::getDestino()
{
	return this->destino;
}
void RegistroSalida::setCantidad(int cant)
{
	this->cant = cant;
}
int RegistroSalida::getCantidad()
{
	return this->cant;
}
#endif // !_SALIDA_H_
