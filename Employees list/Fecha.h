
#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>

using namespace System;
using namespace std;


class Fecha
{

private:

	int dia;
	int mes;
	int year;

public:

	Fecha(int dia, int mes, int year);
	~Fecha();
	void setDia(int d);
	int getDia();
	void setMes(int m);
	int getMes();
	void setYear(int y);
	int getYear();
	void setFecha(int d, int m, int y);
	void mostrar();
	void mesLetras();
	bool bisiesto();
	bool validarFecha(int dia, int mes, int year);
	
};

Fecha::Fecha(int dia = 0, int mes = 0, int year = 0)
{
	this->dia = dia;
	this->mes = mes;
	this->year = year;
}
Fecha::~Fecha()
{
}
void Fecha::setDia(int d) {
	this->dia = d;
}
int Fecha::getDia() {
	return this->dia;
}
void Fecha::setMes(int m) {
	this->mes = m;
}
int Fecha::getMes() {
	return this->mes;
}
void Fecha::setYear(int y) {
	this->year = y;
}
int Fecha::getYear() {
	return this->year;
}
void Fecha::setFecha(int d, int m, int y){
	this->dia = d;
	this->mes = m;
	this->year = y;
}
void Fecha::mostrar() {

	cout << this->dia << "/" << this->mes << "/" << this->year;

}
void Fecha::mesLetras() {

	if (this->mes == 1){
		cout << "Enero";
	}
	if (this->mes == 2) {
		cout << "Febrero";
	}
	if (this->mes == 3) {
		cout << "Marzo";
	}
	if (this->mes == 4) {
		cout << "Abril";
	}
	if (this->mes == 5) {
		cout << "Mayo";
	}
	if (this->mes == 6) {
		cout << "Junio";
	}
	if (this->mes == 7) {
		cout << "Julio";
	}
	if (this->mes == 8) {
		cout << "Agosto";
	}
	if (this->mes == 9) {
		cout << "Septiembre";
	}
	if (this->mes == 10) {
		cout << "Octubre";
	}
	if (this->mes == 11) {
		cout << "Noviembre";
	}
	if (this->mes == 12) {
		cout << "Diciembre";
	}
}

bool Fecha::bisiesto() {

	if (this->year % 4 == 0)
	{
		return true;
	}
	else { return false; }

}

bool Fecha::validarFecha(int dia, int mes, int year)
{
	if (year % 4 != 0 && mes == 1 && dia > 0 && dia < 32)
	{
		return true;
	}
	else
	{
		if (year % 4 != 0 && mes == 2 && dia > 0 && dia < 29)
		{
			return true;
		}
		else
		{
			if (year % 4 != 0 && mes == 3 && dia > 0 && dia < 32)
			{
				return true;
			}
			else
			{
				if (year % 4 != 0 && mes == 4 && dia > 0 && dia < 31)
				{
					return true;
				}
				else
				{
					if (year % 4 != 0 && mes == 5 && dia > 0 && dia < 32)
					{
						return true;
					}
					else
					{
						if (year % 4 != 0 && mes == 6 && dia > 0 && dia < 31)
						{
							return true;
						}
						else
						{
							if (year % 4 != 0 && mes == 7 && dia > 0 && dia < 32)
							{
								return true;
							}
							else
							{
								if (year % 4 != 0 && mes == 8 && dia > 0 && dia < 32)
								{
									return true;
								}
								else
								{
									if (year % 4 != 0 && mes == 9 && dia > 0 && dia < 31)
									{
										return true;
									}
									else
									{
										if (year % 4 != 0 && mes == 10 && dia > 0 && dia < 32)
										{
											return true;
										}
										else
										{
											if (year % 4 != 0 && mes == 11 && dia > 0 && dia < 31)
											{
												return true;
											}
											else
											{
												if (year % 4 != 0 && mes == 12 && dia > 0 && dia < 32)
												{
													return true;
												}
												else
												{
													if (year % 4 == 0 && mes == 1 && dia > 0 && dia < 32)
													{
														return true;
													}
													else
													{
														if (year % 4 == 0 && mes == 2 && dia > 0 && dia < 30)
														{
															return true;
														}
														else
														{
															if (year % 4 == 0 && mes == 3 && dia > 0 && dia < 32)
															{
																return true;
															}
															else
															{
																if (year % 4 == 0 && mes == 4 && dia > 0 && dia < 31)
																{
																	return true;
																}
																else
																{
																	if (year % 4 == 0 && mes == 5 && dia > 0 && dia < 32)
																	{
																		return true;
																	}
																	else
																	{
																		if (year % 4 == 0 && mes == 6 && dia > 0 && dia < 31)
																		{
																			return true;
																		}
																		else
																		{
																			if (year % 4 == 0 && mes == 7 && dia > 0 && dia < 32)
																			{
																				return true;
																			}
																			else
																			{
																				if (year % 4 == 0 && mes == 8 && dia > 0 && dia < 32)
																				{
																					return true;
																				}
																				else
																				{
																					if (year % 4 == 0 && mes == 9 && dia > 0 && dia < 31)
																					{
																						return true;
																					}
																					else
																					{
																						if (year % 4 == 0 && mes == 10 && dia > 0 && dia < 32)
																						{
																							return true;
																						}
																						else
																						{
																							if (year % 4 == 0 && mes == 11 && dia > 0 && dia < 31)
																							{
																								return true;
																							}
																							else
																							{
																								if (year % 4 == 0 && mes == 12 && dia > 0 && dia < 32)
																								{
																									return true;
																								}
																								else
																								{
																									return false;
																								}
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	}

}
