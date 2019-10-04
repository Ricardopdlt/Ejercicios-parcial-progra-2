
#include <iostream>
#include <conio.h>
#include <stdio.h>

using namespace System;
using namespace std;

//funcion menu
void menu(int &op)
{
	do
	{
		Console::Clear();

		cout << endl;
		cout << " ========= MENÚ ========= " << endl;
		cout << " [1] AGREGAR RESERVA(S)" << endl;
		cout << " [2] VISUALIZAR LAS RESERVAS " << endl;
		cout << " [3] ELIMINAR RESERVA " << endl;
		cout << " [4] ORDENAR LAS RESERVAS DE MAYOR A MENOR (SEGÚN COSTOS) " << endl;
		cout << " [5] ORDENAR LAS RESERVAS DE MENOR A MAYOR (SEGÚN COSTOS) " << endl;
		cout << " [6] INSERTAR RESERVA " << endl;
		cout << " [7] SALIR " << endl;
		cout << endl;
		cout << " INGRESE SU OPCIÓN : "; cin >> op;

	} while (op < 1 && op > 7);

}

//función 1 para agregar reservas al arreglo
void Agregar_Reservas(int* VecCod, float* VecCos, int &t)
{
	 int cant = 0;
	 int cod = 0;
	 float cos = 0.00;
	 int aux;

	 do
	 {
		 cout << endl;
		 cout << " INGRESE LA CANTIDAD DE RESERVAS QUE DESEA REALIZAR : ";
		 cin >> cant;

	 } while (cant < 0);

	 cout << endl;
	 cout << " =========================================================== " <<endl;


	 for (int i = 0; i < t; i++)
	 {
		 VecCod[i] = VecCod[i];
		 VecCos[i] = VecCos[i];

	 }

	 aux = t;

	 t = t + cant;

	 int j = 1;

	 for (int i = aux; i < t ; i++)
	 {
		
		 
		 do
		 {
			 cout << endl;
			 cout << " INGRESE EL CÓDIGO DE SU RESERVA [ "<< j << " ] : ";
			 cin >> cod;

		 } while (cod < 1000 || cod > 9999);

		 VecCod[i] = cod;

		 do
		 {
			 cout << endl;
			 cout << " INGRESE EL COSTO DE SU RESERVA [ " << j << " ] : ";
			 cin >> cos;

		 } while (cos <= 0);

		 VecCos[i] = cos;

		 j++;

		 cout << endl;
		 cout << " =========================================================== " << endl;

	 }

	 

}

//funcion 2 para mostrar la(s) reserva(s) del arreglo
void Mostrar_Reserva(int* VecCod, float* VecCos, int &t)
{
	if (t <= 0)
	{
		cout << endl;
		cout << " No existen reservas en el arreglo " << endl;
	}
	else
	{
		cout << endl;
		cout << " CÓDIGO :";
		for (int i = 0; i < t; i++)
		{
			cout << "\t " << VecCod[i];
		}

		cout << endl;
		cout << " COSTO :";
		for (int i = 0; i < t; i++)
		{
			cout << "\t " << VecCos[i];
		}
	}

	cout << endl;

}

//funcion 3 para eliminar una reserva según su codigo
void Eliminar_Reserva(int* VecCod, float* VecCos, int &t)
{
	if (t > 0)
	{
		int cod;
		int aux = 0;
		int c = 0;

		Mostrar_Reserva(VecCod, VecCos, t);

		do
		{
			cout << endl;
			cout << " INGRESE EL CÓDIGO DE LA RESERVA QUE DESEA ELIMINAR : ";
			cin >> cod;

		} while (cod < 1000 || cod > 9999);

		for (int i = 0; i < t; i++)
		{
			if (cod == VecCod[i])
			{
				aux = i;
				c++;
			}
		}

		if (c > 0)
		{
			for (int i = 0; i < aux; i++)
			{
				VecCod[i] = VecCod[i];
				VecCos[i] = VecCos[i];

			}

			for (int i = aux; i < t; i++)
			{
				VecCod[i] = VecCod[i + 1];
				VecCos[i] = VecCos[i + 1];

			}

			t = t - 1;
		}
		else
		{
			cout << endl;
			cout << " No existen aquella reserva en el arreglo, revise su código " << endl;
			_getch();
		}
	}
	else
	{
		cout << endl;
		cout << " No existen reservas en el arreglo " << endl;
		_getch();
	}

}

//funcion 4 para ordenar de mayor a menor según el costo de la reserva
void Ordenar_Mayor_Menor(int* VecCod, float* VecCos, int &t)
{
	if (t == 0)
	{
		cout << endl;
		cout << " No existen reservas en el arreglo " << endl;
		_getch();

	}
	else
	{
		int aux1 = 0;
		float aux2 = 0.00;

		for (int i = 0; i < t - 1; i++)
		{
			for (int j = i + 1; j < t; j++)
			{
				if (VecCos[i] < VecCos[j])
				{
					aux2 = VecCos[i];
					aux1 = VecCod[i];
					VecCos[i] = VecCos[j];
					VecCod[i] = VecCod[j];
					VecCos[j] = aux2;
					VecCod[j] = aux1;

				}
			}
		}


		cout << endl;
		cout << " Listo, si desea visualizar que se haya ordenado de mayor a menor ingrese en el menú la opción 2 " << endl;

		_getch();

	}


}

//funcion 5 para ordenar de menor a mayor según el costo de la reserva
void Ordenar_Menor_Mayor(int* VecCod, float* VecCos, int &t)
{
	if (t == 0)
	{
		cout << endl;
		cout << " No existen reservas en el arreglo " << endl;
		_getch();

	}
	else
	{
		int aux1 = 0;
		float aux2 = 0.00;

		for (int i = 0; i < t - 1; i++)
		{
			for (int j = i + 1; j < t; j++)
			{
				if (VecCos[i] > VecCos[j])
				{
					aux2 = VecCos[i];
					aux1 = VecCod[i];
					VecCos[i] = VecCos[j];
					VecCod[i] = VecCod[j];
					VecCos[j] = aux2;
					VecCod[j] = aux1;

				}
			}
		}


		cout << endl;
		cout << " Listo, si desea visualizar que se haya ordenado de menor a mayor ingrese en el menú la opción 2 " << endl;

		_getch();

	}


}

//funcion 6 para insertar una reserva en una posición deseada
void Insertar_Reserva(int* VecCod, float* VecCos, int &t)
{
	if (t <= 0)
	{
		cout << endl;
		cout << " No existen reservas en el arreglo " << endl;
		_getch();

	}
	else
	{
		Mostrar_Reserva(VecCod, VecCos, t);
		int pos = 0;
		int cod = 0;
		float cos = 0.00;

		do
		{
			cout << endl;
			cout << " INGRESE LA POSICIÓN EN DONDE DESEA INSERTAR LA RESERVA : ";
			cin >> pos;

		} while (pos < 0 || pos > t);

		

		t = t + 1;

		for (int i = 0; i < pos-1; i++)
		{
			VecCod[i] = VecCod[i];
			VecCos[i] = VecCos[i];

		}

		for (int i = t -1 ; i > pos-1; i--)
		{
			VecCod[i] = VecCod[i-1];
			VecCos[i] = VecCos[i-1];

		}

		do
		{
			cout << endl;
			cout << " INGRESE EL CÓDIGO DE SU RESERVA : ";
			cin >> cod;

		} while (cod < 1000 || cod > 9999);

		VecCod[pos-1] = cod;

		do
		{
			cout << endl;
			cout << " INGRESE EL COSTO DE SU RESERVA : ";
			cin >> cos;

		} while (cos <= 0);

		VecCos[pos-1] = cos;


	}
}

