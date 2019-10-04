#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Hoteles.h"

using namespace System;
using namespace std;

class Menu
{

private:
	CHotel **arregloHotel;
	int *N;

public:
	Menu();
	~Menu();
	void Registrar_Hotel(CHotel *obHotel);
	void Mostrar_Hotel();
	void Modificar_Hotel();
	void Eliminar_Hotel();
	void Reporte_Elisios();
	void Reporte_Desayuno();
	void Reporte_Servicio();
	CHotel *get_Hotel(int pos);
	int get_N();
};

Menu::Menu()
{
	arregloHotel = NULL;
	N = new int;
	*N = 0;
}

Menu::~Menu()
{
	delete[]arregloHotel;
	delete N;
}

CHotel *Menu::get_Hotel(int pos)
{
	return arregloHotel[pos];
}

int Menu::get_N()
{
	return *N;
}

void Menu::Registrar_Hotel(CHotel *obHotel)
{
	CHotel **aux = new CHotel *[*N + 1];

	for (int i = 0; i < *N; i++)
	{
		aux[i] = arregloHotel[i];
	}
	aux[*N] = obHotel;
	*N = *N + 1;
	if (arregloHotel != NULL)
	{
		delete arregloHotel;
	}
	arregloHotel = aux;
}

void Menu::Mostrar_Hotel()
{
	if (*N > 0)
	{
		cout << endl;
		cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
		cout << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << arregloHotel[i]->get_Nombre() << "\t";
			cout << arregloHotel[i]->get_Estrellas() << "\t";
			cout << arregloHotel[i]->get_Ubicacion() << "\t";
			cout << arregloHotel[i]->get_Desayuno() << "\t";
			cout << arregloHotel[i]->get_Numero() << "\t";
			cout << arregloHotel[i]->get_Servicio() << "\t";

			cout << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo" << endl;
	}
}

void Menu::Modificar_Hotel()
{
	if (*N > 0)
	{
		string Nombre;
		int Estrellas;
		string Ubicacion;
		char Desayuno;
		long Numero;
		char Servicio;
		int pos;
	    cout << "\n =====MODIFICAR===== " << endl;
		cout << endl;
	    cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
		cout << endl;
	    for (int i = 0; i < *N; i++)
	    {
			cout << arregloHotel[i]->get_Nombre() << "\t";
			cout << arregloHotel[i]->get_Estrellas() << "\t";
			cout << arregloHotel[i]->get_Ubicacion() << "\t";
			cout << arregloHotel[i]->get_Desayuno() << "\t";
			cout << arregloHotel[i]->get_Numero() << "\t";
			cout << arregloHotel[i]->get_Servicio() << "\t";

			cout << endl;
	    }

		cout << endl;
	    cout << " POSICIÓN A MODIFICAR: "; cin >> pos;
	
		cout << endl;
		cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
		cout << endl;
		cout << arregloHotel[pos-1]->get_Nombre() << "\t";
		cout << arregloHotel[pos-1]->get_Estrellas() << "\t";
		cout << arregloHotel[pos-1]->get_Ubicacion() << "\t";
		cout << arregloHotel[pos-1]->get_Desayuno() << "\t";
		cout << arregloHotel[pos-1]->get_Numero() << "\t";
		cout << arregloHotel[pos-1]->get_Servicio() << "\t";
		cout << endl;
		cout << endl;

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


		arregloHotel[pos-1]->set_Nombre(Nombre);
		arregloHotel[pos-1]->set_Estrellas(Estrellas);
		arregloHotel[pos-1]->set_Ubicacion(Ubicacion);
		arregloHotel[pos-1]->set_Desayuno(Desayuno);
		arregloHotel[pos-1]->set_Numero(Numero);
		arregloHotel[pos-1]->set_Servicio(Servicio);
	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}


}

void Menu::Eliminar_Hotel()
{
	if(*N>0)
	{
		int pos;
		cout << "\n =====ELIMINAR===== " << endl;
		cout << endl;
		cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
		cout << endl;
		for (int i = 0; i < *N; i++)
		{
			cout << arregloHotel[i]->get_Nombre() << "\t";
			cout << arregloHotel[i]->get_Estrellas() << "\t";
			cout << arregloHotel[i]->get_Ubicacion() << "\t";
			cout << arregloHotel[i]->get_Desayuno() << "\t";
			cout << arregloHotel[i]->get_Numero() << "\t";
			cout << arregloHotel[i]->get_Servicio() << "\t";

			cout << endl;
		}

		cout << endl;
		cout << " POSICIÓN A ELIMINAR: "; cin >> pos;

		CHotel ** Aux;
		Aux = new CHotel *[*N - 1];
		for (int i = 0; i < pos-1; i++)
		{
			Aux[i] = arregloHotel[i];
		}
		for (int i = pos-1; i < *N; i++)
		{
			Aux[i] = arregloHotel[i + 1];
		}
		*N = *N - 1;
		if(arregloHotel != NULL)
		{
			delete arregloHotel;
		}
		arregloHotel = Aux;
	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;
		_getch();

	}

}

void Menu::Reporte_Elisios()
{
	int c;

	if (*N > 0)
	{
		for (int i = 0; i < *N; i++)
		{
			if (arregloHotel[i]->get_UbicacionIf() == 'c' || arregloHotel[i]->get_UbicacionIf() == 'C')
			{
				c++;
			}
		}

		if (c > 0)
		{
			cout << endl;
			cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
			cout << endl;
			for (int i = 0; i < *N; i++)
			{
				if (arregloHotel[i]->get_UbicacionIf() == 'c' || arregloHotel[i]->get_UbicacionIf() == 'C')
				{
					cout << arregloHotel[i]->get_Nombre() << "\t";
					cout << arregloHotel[i]->get_Estrellas() << "\t";
					cout << arregloHotel[i]->get_Ubicacion() << "\t";
					cout << arregloHotel[i]->get_Desayuno() << "\t";
					cout << arregloHotel[i]->get_Numero() << "\t";
					cout << arregloHotel[i]->get_Servicio() << "\t";

					cout << endl;
				}
			}

		}
		else
		{
			cout << "\n Ningún hotel está ubicado en los Campos Eliseos" << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo " << endl;

	}

}

void Menu::Reporte_Desayuno()
{
	int d;

	if (*N > 0)
	{
		for (int i = 0; i < *N; i++)
		{
			if (toupper(arregloHotel[i]->get_Desayuno()) == 'C')
			{
				d++;
			}
		}

		if (d > 0)
		{
			cout << endl;
			cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
			cout << endl;
			for (int i = 0; i < *N; i++)
			{
				if (toupper(arregloHotel[i]->get_Desayuno()) == 'C')
				{
					cout << arregloHotel[i]->get_Nombre() << "\t";
					cout << arregloHotel[i]->get_Estrellas() << "\t";
					cout << arregloHotel[i]->get_Ubicacion() << "\t";
					cout << arregloHotel[i]->get_Desayuno() << "\t";
					cout << arregloHotel[i]->get_Numero() << "\t";
					cout << arregloHotel[i]->get_Servicio() << "\t";

					cout << endl;
				}
			}


		}
		else
		{
			cout << "\n Nigún hotel brinda desayuno" << endl;
		}

	}
	else
	{
		cout << "\n No existen datos en el arreglo" << endl;

	}
}

void Menu::Reporte_Servicio()
{
	int s;

	if (*N > 0)
	{
		for (int i = 0; i < *N; i++)
		{
			if (toupper(arregloHotel[i]->get_Servicio()) == 'S')
			{
				s++;
			}
		}

		if (s > 0)
		{
			cout << endl;
			cout << "NOMBRE\tESTRELLAS\tUBICACIÓN\tDESAYUNO\tTELÉFONO\tSERVICIO\n";
			cout << endl;
			for (int i = 0; i < *N; i++)
			{
				if (toupper(arregloHotel[i]->get_Servicio()) == 'S')
				{
					cout << arregloHotel[i]->get_Nombre() << "\t";
					cout << arregloHotel[i]->get_Estrellas() << "\t";
					cout << arregloHotel[i]->get_Ubicacion() << "\t";
					cout << arregloHotel[i]->get_Desayuno() << "\t";
					cout << arregloHotel[i]->get_Numero() << "\t";
					cout << arregloHotel[i]->get_Servicio() << "\t";

					cout << endl;
				}
			}
		}

		else
		{
			cout << "\n Nigún hotel ofrece servicio al aeropuerto" << endl;
		}
	}
	else
	{
		cout << "\n No existen datos en el arreglo" << endl;

	}

}

