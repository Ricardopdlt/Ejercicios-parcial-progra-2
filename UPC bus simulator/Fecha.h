#ifndef _FECHA_H_
#define _FECHA_H_
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

class Fecha
{
private:

	int Dia;
	int Mes;
	int Year;

public:

	Fecha();
	Fecha(int d = 0, int m = 0, int y = 0);
	~Fecha();
	void setDia(int d);
	int getDia();
	void setMes(int m);
	int getMes();
	void setYear(int y);
	int getYear();
};

Fecha::Fecha()
{
	this->Dia = 0;
	this->Mes = 0;
	this->Year = 0;
}
Fecha::Fecha(int d, int m, int y)
{
	this->Dia = d;
	this->Mes = m;
	this->Year = y;
}
Fecha::~Fecha()
{
}
void Fecha::setDia(int d)
{
	this->Dia = d;
}
int Fecha::getDia()
{
	return this->Dia;
}
void Fecha::setMes(int m)
{
	this->Mes = m;
}
int Fecha::getMes()
{
	return this->Mes;
}
void Fecha::setYear(int y)
{
	this->Year = y;
}
int Fecha::getYear()
{
	return this->Year;
}
#endif // !_FECHA_H_

