#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Menu.h"

using namespace System;
using namespace std;

Menu *arregloHotel = new Menu();
CHotel *h1;

void menu()
{
	cout << endl;
	cout << " ===============MENU===============" << endl;
	cout << " [1] Registrar hotel" << endl;
	cout << " [2] Mostrar lista de hoteles" << endl;
	cout << " [3] Modificar datos de hoteles" << endl;
	cout << " [4] Eliminar hotel" << endl;
	cout << " [5] Reporte de ubicación en Campos Elisios" << endl;
	cout << " [6] Reporte de inclusión de Desayuno" << endl;
	cout << " [7] Reporte de inclusión de Servicio a Aeropuerto" << endl;
	cout << " [8] Salir" << endl;
	cout << " ==================================" << endl;
	cout << " NOTAS: 1.- Al registrar su hotel, para confirmar que este sí brinda desayuno " << endl;
	cout << "            ingrese la letra C y si no ingrese la letra S" << endl; 
	cout << "        2.- Al registrar su hotel, para confirmar que este sí brinda un servicio " << endl;
	cout << "            al aeropuerto ingrese la letra S y si no ingrese la letra N" << endl;
	cout << " ==================================" << endl;
	cout << " INGRESE SU OPCIÓN: ";

}

void Registrar_H()
{
	string Nombre;
	int Estrellas;
	string Ubicacion;
	char Desayuno;
	long Numero;
	char Servicio;

	cout << " NOMBRE:";
	cin.ignore();
	getline(cin, Nombre, '\n');
	do
	{
		cout << " ESTRELLAS:"; cin >> Estrellas;

	} while (Estrellas < 0);

	cout << " UBICACIÓN:";
	cin.ignore();
	getline(cin, Ubicacion, '\n');
	do
	{
		cout << " DESAYUNO:"; cin >> Desayuno;

	} while (toupper(Desayuno) != 'C' && toupper(Desayuno) != 'S');

	do
	{
		cout << " NÚMERO:"; cin >> Numero;

	} while (Numero < 0);

	do
	{
		cout << " SERVICIO AL AEROPUERTO:";	cin >> Servicio;

	} while (toupper(Servicio) != 'N' && toupper(Servicio) != 'S');

	h1 = new CHotel(Nombre, Estrellas, Ubicacion, Desayuno, Numero, Servicio);
	arregloHotel->Registrar_Hotel(h1);

}

void Mostrar_H()
{
	arregloHotel->Mostrar_Hotel();
	_getch();
}

void Modificar_H()
{
	arregloHotel->Modificar_Hotel();
}

void Eliminar_H()
{
	arregloHotel->Eliminar_Hotel(); 
	
}

void Reporte_Elisios_H()
{
	arregloHotel->Reporte_Elisios();
	_getch();
}

void Reporte_Desayuno_H()
{
	arregloHotel->Reporte_Desayuno();
	_getch();
}

void Reporte_Servicio_H()
{
	arregloHotel->Reporte_Servicio();
	_getch();
}