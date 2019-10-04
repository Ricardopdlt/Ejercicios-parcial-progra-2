#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "Fecha.h"

using namespace System;
using namespace std;

class Empleado
{

private:

	string nombres;
	string apellidos;
	Fecha* fechaContratacion;
	Fecha* fechaNacimiento;
	   	  

public:

	Empleado();
	Empleado(string apellidos, string nombres, Fecha *contratacion, Fecha *nacimiento);
	string getApellidos();
	void setApellidos(string ap);
	string getNombres();
	void setNombres(string nom);
	void Mostrar_FechaC();
	void Mostrar_FechaN();
	bool Validar_FechaC(int d, int m, int y);
	bool Validar_FechaN(int d, int m, int y);
	void setFechaC(int d, int m, int y);
	void setFechaN(int d, int m, int y);
	int getMesN();
	int getMesC();
	int getYearC();
	Fecha *getFechaC();
	Fecha *getFechaN();
	~Empleado();
	
};
Empleado::Empleado()
{
	this->apellidos = " ";
	this->nombres = " ";
	this->fechaContratacion = new Fecha();
	this->fechaNacimiento = new Fecha();

}
Empleado::Empleado(string apellidos, string nombres, Fecha *contratacion, Fecha *nacimiento)
{
	this->apellidos = apellidos;
	this->nombres = nombres;


	this->fechaContratacion = new Fecha();
	this->fechaContratacion->setDia(contratacion->getDia());
	this->fechaContratacion->setMes(contratacion->getMes());
	this->fechaContratacion->setYear(contratacion->getYear());


	this->fechaNacimiento = new Fecha();
	this->fechaNacimiento->setDia(nacimiento->getDia());
	this->fechaNacimiento->setMes(nacimiento->getMes());
	this->fechaNacimiento->setYear(nacimiento->getYear());
}

Empleado::~Empleado()
{
	delete fechaContratacion;
	delete fechaNacimiento;
}
string Empleado::getApellidos()
{
	return this->apellidos;
}
void Empleado::setApellidos(string ap)
{
	this->apellidos = ap;
}

string Empleado::getNombres()
{
	return this->nombres;
}
void Empleado::setNombres(string nom)
{
	this->nombres = nom;
}
Fecha *Empleado::getFechaC()
{
	return fechaContratacion;
}

Fecha *Empleado::getFechaN()
{
	return fechaNacimiento;
}

void Empleado::Mostrar_FechaC()
{
	fechaContratacion->mostrar();
}

void Empleado::Mostrar_FechaN()
{
	fechaNacimiento->mostrar();
}

bool Empleado::Validar_FechaC(int d, int m, int y)
{
	if (fechaContratacion->validarFecha(d, m, y) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Empleado::Validar_FechaN(int d, int m, int y)
{
	if (fechaNacimiento->validarFecha(d, m, y) == true)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void Empleado::setFechaC(int d, int m, int y)
{
	fechaContratacion->setDia(d);
	fechaContratacion->setMes(m);
	fechaContratacion->setYear(y);

}

void Empleado::setFechaN(int d, int m, int y)
{
	fechaNacimiento->setDia(d);
	fechaNacimiento->setMes(m);
	fechaNacimiento->setYear(y);

}

int Empleado::getMesN()
{
	return fechaNacimiento->getMes();

}

int Empleado::getMesC()
{
	return fechaContratacion->getMes();

}

int Empleado::getYearC()
{
	return fechaContratacion->getYear();

}