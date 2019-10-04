//Ej2 hoja 3 de ejercicios
//Versión español

#include <iostream>
#include <conio.h>
#include <stdio.h>
#include "Funciones.h"

using namespace System;
using namespace std;

int main()
{
	bool ejecutar = true;
	setlocale(LC_CTYPE, "spanish");
	int t = 0;
	int* VecCod = new int[t];
	float* VecCos = new float[t];
	int opt = 0;

	while (ejecutar == true)
	{
		Console::Clear();
		menu(opt);

		if (opt == 1)
		{
			Agregar_Reservas(VecCod, VecCos, t);
		}

		if (opt == 2)
		{
			Mostrar_Reserva(VecCod, VecCos, t);
			_getch();
		}

		if (opt == 3)
		{

			Eliminar_Reserva(VecCod, VecCos, t);
		}

		if (opt == 4)
		{
			Ordenar_Mayor_Menor(VecCod, VecCos, t);
		}

		if (opt == 5)
		{
			Ordenar_Menor_Mayor(VecCod, VecCos, t);
		}

		if (opt == 6)
		{
			Insertar_Reserva(VecCod, VecCos, t);
		}

		if (opt == 7)
		{
			VecCod = NULL;
			VecCos = NULL;

			delete[] VecCod;
			delete[] VecCos;
			exit(0);
		}
	}
	
	
}