//Tarea académica 2 , ejercicio 2 (ejercicio 3 de  la hoja 2 de ejercicios)
//Ciudad Luz
//versión español

#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Funciones.h"

using namespace System;
using namespace std;

void main()
{

	setlocale(LC_CTYPE, "spanish");
	Console::SetWindowSize(90,35);

	int opcion;
	while (true)
	{
		do
		{
			Console::Clear();
			menu();
			cin >> opcion;
		} while (opcion < 0 || opcion >8);

		switch (opcion)
		{
		case 1:
			Registrar_H();
			break;
		case 2:
			Mostrar_H();
			break;
		case 3:
			Modificar_H();
			break;
		case 4:
			Eliminar_H();
			break;

		case 5:
			Reporte_Elisios_H();
			break;

		case 6:
			Reporte_Desayuno_H();
			break;

		case 7:
			Reporte_Servicio_H();
			break;

		case 8:

			exit(0);
		}

	}
	


}