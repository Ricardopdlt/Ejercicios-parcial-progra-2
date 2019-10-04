#ifndef _COND_H_
#define _COND_H_
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace System;
using namespace std;

class Conductor
{
private:

	string Nombre;
	string Apellido;
	int edad;
	int year; //años de servicio
	   	 
public:

	Conductor();
	Conductor(string nom = " ", string ap = " ", int e= 0, int y= 0);
	~Conductor();
	void setNombre(string nom);
	string getNombre();
	void setApellido(string ap);
	string getApellido();
	void setEdad(int e);
	int getEdad();
	void setYear(int y);
	int getYear();


};
Conductor::Conductor()
{
	this->Nombre = " ";
	this->Apellido = " ";
	this->edad = 0;
	this->year = 0;
}
Conductor::Conductor(string nom, string ap, int e, int y)
{
	this->Nombre = nom;
	this->Apellido = ap;
	this->edad = e;
	this->year = y;
}
Conductor::~Conductor()
{
}
void Conductor::setNombre(string nom)
{
	this->Nombre = nom;
}
string Conductor::getNombre()
{
	return this->Nombre;
}
void Conductor::setApellido(string ap)
{
	this->Apellido = ap;
}
string Conductor::getApellido()
{
	return this->Apellido;
}
void Conductor::setEdad(int e)
{
	this->edad = e;
}
int Conductor::getEdad()
{
	return this->edad;
}
void Conductor::setYear(int y)
{
	this->year = y;
}
int Conductor::getYear()
{
	return this->year;
}
#endif // !_COND_H_


