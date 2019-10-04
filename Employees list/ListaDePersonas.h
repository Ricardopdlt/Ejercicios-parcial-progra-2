#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#include "Empleado.h"

using namespace System;
using namespace std;

class ListaDePersonas
{

private:

	Empleado **Lista;
	int *N;

public:

	ListaDePersonas();
	~ListaDePersonas();
	void AgregarPersona(Empleado *Persona);
	void MostrarPersona();
	void ModificarPersona();
	void EliminarPersona();
	void Reporte_Abril();
	void NumCont_M2017();
	Empleado *getPersona(int pos);
	int getN();
	
};

ListaDePersonas::ListaDePersonas()
{
	Lista = NULL;
	N = new int;
	*N = 0;
}

ListaDePersonas::~ListaDePersonas()
{
	delete[]Lista;
	delete N;
}

Empleado *ListaDePersonas::getPersona(int pos)
{
	return Lista[pos];
}
int ListaDePersonas::getN()
{
	return *N;
}

void ListaDePersonas::AgregarPersona(Empleado *Persona)
{
	Empleado ** Aux;
	Aux = new Empleado *[*N + 1];
	for (int i = 0; i < *N; i++)
	{
		Aux[i] = Lista[i];
	}
	Aux[*N] = Persona;
	*N = *N + 1;
	if (Lista != NULL)
	{
		delete Lista;
	}
	Lista = Aux;

}

void ListaDePersonas::MostrarPersona()
{
	if (*N > 0)
	{
		cout << endl;
		cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
		cout << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << Lista[i]->getApellidos() << "\t";
			cout << Lista[i]->getNombres() << "\t";
			Lista[i]->Mostrar_FechaN();
			cout << "\t";
			Lista[i]->Mostrar_FechaC();
			cout << "\t";
			
			cout << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo" << endl;
	}
}

void ListaDePersonas::ModificarPersona()
{
	if (*N > 0)
	{
		string nombres;
		string apellidos;
		int diac, mesc, yearc;
		int dian, mesn, yearn;

		int pos;
		cout << "\n =====MODIFICAR===== " << endl;
		cout << endl;
		cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
		cout << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << Lista[i]->getApellidos() << "\t";
			cout << Lista[i]->getNombres() << "\t";
			Lista[i]->Mostrar_FechaN();
			cout << "\t";
			Lista[i]->Mostrar_FechaC();
			cout << "\t";

			cout << endl;

		}
		cout << endl;
		cout << " POSICIÓN A MODIFICAR: "; cin >> pos;
		cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
		cout << endl;
		cout << Lista[pos-1]->getApellidos() << "\t";
		cout << Lista[pos - 1]->getNombres() << "\t";
		Lista[pos - 1]->Mostrar_FechaN();
		cout << "\t";
		Lista[pos - 1]->Mostrar_FechaC();
		cout << "\t";
		cout << endl;
		cout << endl;

		cin.ignore();
		cout << " Apellidos:";
		getline(cin, apellidos, '\n');

		cout << " Nombres:";
		getline(cin, nombres, '\n');

		do
		{
			cout << " Día nacimiento:"; cin >> dian;
			cout << " Mes nacimiento:"; cin >> mesn;
			cout << " Año nacimiento:"; cin >> yearn;
			Lista[pos - 1]->setFechaN(dian, mesn, yearn);

		} while (Lista[pos - 1]->Validar_FechaN(dian, mesn, yearn)==false);

		do
		{
			cout << " Día contratacion:"; cin >> diac;
			cout << " mes contratacion:"; cin >> mesc;
			cout << " anio contratacion:"; cin >> yearc;
			Lista[pos - 1]->setFechaC(diac, mesc, yearc);

		} while (Lista[pos - 1]->Validar_FechaC(diac, mesc, yearc) == false);

				
		Lista[pos - 1]->setApellidos(apellidos);
		Lista[pos - 1]->setNombres(nombres);
		

	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}

}

void ListaDePersonas::EliminarPersona()
{
	if (*N > 0)
	{
		int pos;
		cout << "\n =====ELIMINAR===== " << endl;
		cout << endl;
		cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
		cout << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << Lista[i]->getApellidos() << "\t";
			cout << Lista[i]->getNombres() << "\t";
			Lista[i]->Mostrar_FechaN();
			cout << "\t";
			Lista[i]->Mostrar_FechaC();
			cout << "\t";

			cout << endl;

		}
		cout << endl;

		cout << endl;
		cout << " POSICIÓN A ELIMINAR: "; cin >> pos;

		Empleado ** Aux;
		Aux = new Empleado *[*N - 1];
		for (int i = 0; i < pos - 1; i++)
		{
			Aux[i] = Lista[i];
		}
		for (int i = pos - 1; i < *N; i++)
		{
			Aux[i] = Lista[i + 1];
		}
		*N = *N - 1;
		if (Lista != NULL)
		{
			delete Lista;
		}
		Lista = Aux;

	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}

}

void ListaDePersonas::Reporte_Abril()
{
	int c;
	if (*N > 0)
	{
		for (int i = 0; i < *N; i++)
		{
			if (Lista[i]->getMesN() == 4)
			{
				c++;
			}
		}

		if (c > 0)
		{
			cout << endl;
			cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
			cout << endl;
			for (int i = 0; i < *N; i++)
			{
				if (Lista[i]->getMesN() == 4)
				{
					cout << Lista[i]->getApellidos() << "\t";
					cout << Lista[i]->getNombres() << "\t";
					Lista[i]->Mostrar_FechaN();
					cout << "\t";
					Lista[i]->Mostrar_FechaC();
					cout << "\t";

					cout << endl;
				}
			}

		}
		else
		{
			cout << "\n Ningún empleado nació en abril" << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}
}

void ListaDePersonas::NumCont_M2017()
{
	int n;

	if (*N > 0)
	{
		for (int i = 0; i < *N; i++)
		{
			if (Lista[i]->getMesC() == 3 && Lista[i]->getYearC() == 2017)
			{
				n++;
			}
		}
		if (n > 0)
		{
			cout << endl;
			cout << "Ape. \t Nomb. \t FecNac. \t FecCont\n";
			cout << endl;
			for (int i = 0; i < *N; i++)
			{
				if (Lista[i]->getMesC() == 3 && Lista[i]->getYearC() == 2017)
				{
					cout << Lista[i]->getApellidos() << "\t";
					cout << Lista[i]->getNombres() << "\t";
					Lista[i]->Mostrar_FechaN();
					cout << "\t";
					Lista[i]->Mostrar_FechaC();
					cout << "\t";

					cout << endl;
				}
			}

			cout << endl;

			if (n == 1)
			{

				cout << " " << n << " empleado fue contratado en marzo del 2017 " << endl;
			}
			else
			{
				cout << " " << n << " empleados fueron contratados en marzo del 2017 " << endl;
			}

		}
		else
		{
			cout << "\n Ningún empleado fue contratado en marzo del 2017" << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}

}