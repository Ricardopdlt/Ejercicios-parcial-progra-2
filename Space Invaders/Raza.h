#ifndef _RAZA_H_
#define _RAZA_H_
#pragma once
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

class Raza
{
protected:
	int x;
	int y;
	int alto;
	int ancho;

public:

	Raza()
	{
	}
	~Raza()
	{
	}
	virtual void dibujar()
	{
	}
	int getX()
	{
		return this->x;
	}
	int getY()
	{
		return this->y;
	}
	void setX(int x)
	{
		this->x = x;
	}
	void setY(int y)
	{
		this->y = y;
	}
	int getAncho()
	{
		return this->ancho;
	}
	int getAlto()
	{
		return this->alto;
	}

};
#endif // !_RAZA_H_

