//Ej1 hoja 3 de ejercicios 
//versión español

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Funciones.h"

using namespace System;
using namespace std;

void main()
{
	setlocale(LC_CTYPE, "spanish");
	Console::SetWindowSize(90, 35);

	ListaDePersonas *VectorPersonas = new ListaDePersonas();
	Empleado *Persona;
	Fecha *fechacontrato;
	Fecha *fechanacimiento;

	int opcion;
	while (true)
	{
		do
		{
			Console::Clear();
			menu();
			cin >> opcion;
		} while (opcion < 0 || opcion >7);

		switch (opcion)
		{
		case 1:
			Registrar_E(VectorPersonas, Persona, fechacontrato, fechanacimiento);
			break;
		case 2:
			Mostrar_E(VectorPersonas);
			break;
		case 3:
			Modificar_E(VectorPersonas);
			break;
		case 4:
			Eliminar_E(VectorPersonas);
			break;

		case 5:
			Reporte_A(VectorPersonas);
			break;

		case 6:
			Reporte_M2017(VectorPersonas);
			break;

		case 7:
			
			exit(0);
		}

	}


	_getch();
}