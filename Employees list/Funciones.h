#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "ListaDePersonas.h"

using namespace System;
using namespace std;

void menu()
{
	cout << endl;
	cout << " ===============MENU===============" << endl;
	cout << " [1] Registrar empleado" << endl;
	cout << " [2] Mostrar lista de empleados" << endl;
	cout << " [3] Modificar datos de empleados" << endl;
	cout << " [4] Eliminar empleado" << endl;
	cout << " [5] Reporte de empleados nacidos en abril" << endl;
	cout << " [6] Reporte de empleados contratados en marzo del 2017" << endl;
	cout << " [7] Salir " << endl;
	cout << " ==================================" << endl;
	cout << " INGRESE SU OPCIÓN: ";

}

void Registrar_E(ListaDePersonas *VectorPersonas, Empleado *Persona, Fecha *fechacontrato, Fecha *fechanacimiento)
{
	string Apellidos;
	string Nombres;
	int diac, mesc, yearc;
	int dian, mesn, yearn;

	cout << endl;

	cin.ignore();
	cout << " Apellidos:";
	getline(cin, Apellidos, '\n');

	cout << " Nombres:";
	getline(cin, Nombres, '\n');

	do
	{
		cout << " Dia nacimiento:"; cin >> dian;
		cout << " mes nacimiento:"; cin >> mesn;
		cout << " anio nacimiento:"; cin >> yearn;
		fechanacimiento = new Fecha(dian, mesn, yearn);

	} while (fechanacimiento->validarFecha(dian, mesn, yearn)==false);

	do
	{
		cout << " Dia contratacion:"; cin >> diac;
		cout << " mes contratacion:"; cin >> mesc;
		cout << " anio contratacion:"; cin >> yearc;
		fechacontrato = new Fecha(diac, mesc, yearc);

	} while (fechacontrato->validarFecha(diac, mesc, yearc)==false);


	Persona = new Empleado(Apellidos, Nombres, fechacontrato, fechanacimiento);
	VectorPersonas->AgregarPersona(Persona);
}

void Mostrar_E(ListaDePersonas *VectorPersonas)
{
	cout << endl;
	VectorPersonas->MostrarPersona();
	_getch();
}

void Eliminar_E(ListaDePersonas *VectorPersonas)
{
	cout << endl;
	VectorPersonas->EliminarPersona();
}

void Modificar_E(ListaDePersonas *VectorPersonas)
{
	cout << endl;
	VectorPersonas->ModificarPersona();
}

void Reporte_A(ListaDePersonas *VectorPersonas)
{
	cout << endl;
	VectorPersonas->Reporte_Abril();
	_getch();

}

void Reporte_M2017(ListaDePersonas *VectorPersonas)
{
	cout << endl;
	VectorPersonas->NumCont_M2017();
	_getch();
}

