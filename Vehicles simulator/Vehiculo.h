#ifndef _VEHICULO_H_
#define _VEHICULO_H_
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

class Vehiculo
{
protected:
	int x;
	int y;
	int alto;
	int largo;
	int color;
	int dx;

public:

	Vehiculo() :x(0), y(0), largo(0), alto(0), color(0), dx(1) {}
	~Vehiculo() {}
	virtual void imprimir() = 0;
	virtual void borrar() = 0;

};

#endif // !_VEHICULO_H_