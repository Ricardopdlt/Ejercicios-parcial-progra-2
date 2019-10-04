#ifndef _BUS_H_
#define _BUS_H_
#pragma once
#include "Conductor.h"

class Bus
{
private:

	Conductor* cond;
	string Placa;
	double Km;// kilometraje

public:

	Bus();
	Bus(string placa = " ", double km = 0.00);
	Bus(Conductor* obj, string placa = " ", double km = 0.00);
	~Bus();
	void setConductor(Conductor* obj);
	Conductor* getConductor();
	void setPlaca(string pc);
	string getPlaca();
	void setKm(double km);
	double getKM();

};
Bus::Bus()
{
	this->Placa = " ";
	this->Km = 0.00;
}
Bus::Bus(string placa, double km)
{
	this->Placa = placa;
	this->Km = km;
}
Bus::Bus(Conductor* obj, string placa , double km )
{
	this->cond = obj;
	this->Placa = placa;
	this->Km = km;
}
Bus::~Bus()
{
}
void Bus::setConductor(Conductor* obj)
{
	this->cond = obj;
}
Conductor* Bus::getConductor()
{
	return this->cond;
}
void Bus::setPlaca(string pc)
{
	this->Placa = pc;
}
string Bus::getPlaca()
{
	return this->Placa;
}
void Bus::setKm(double km)
{
	this->Km = km;
}
double Bus::getKM()
{
	return this->Km;
}
#endif // !_BUS_H_
