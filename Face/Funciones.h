#include <iostream>
#include <stdio.h>
#include <conio.h>
#include "Ojo.h"
#include "Boca.h"

using namespace System;
using namespace std;

#define ESCAPE 27

COjo *arregloOjo = new COjo();
CBoca *arregloBoca = new CBoca();

void Acciones(bool &Alegre, bool &Neutra, bool &Triste)
{
	char tecla;

	if (_kbhit())
	{
		tecla = _getch();

		switch (toupper(tecla))
		{
		case 'R':
		{
			Neutra = false;
			Triste = false;
			Console::Clear();
			Alegre = true;
		}break;

		case 'T':
		{
			Alegre = false;
			Neutra = false;
			Console::Clear();
			Triste = true;
		}break;

		case 'N':
		{
			Alegre = false;
			Triste = false;
			Console::Clear();
			Neutra = true;
		}break;

		case ESCAPE:
		{
			exit(0);
		}break;

		}


	}

}

void Indicaciones()
{
	Console::ForegroundColor = ConsoleColor::White;
	Console::SetCursorPosition(1, 28);
	cout << "Presione la tecla 'R' para alegrar la cara, presione la tecla 'T' para entristecer la cara,";
	Console::SetCursorPosition(1, 29);
	cout << "presione la tecla 'N' para neutralizar la cara y presione 'Esc' para salir"; 

}

void Alegre(bool &Alegre, bool &Neutra, bool &Triste)
{
	while (Alegre == true)
	{
		arregloOjo = new COjo(56, 13);
		arregloBoca = new CBoca(56, 15);

		arregloOjo->Ojos_Alegres();
		arregloBoca->Boca_Alegre();

		Acciones(Alegre, Neutra, Triste);
		Indicaciones();
	}
}

void Neutra(bool &Alegre, bool &Neutra, bool &Triste)
{
	
	while (Neutra==true)
	{
		arregloOjo = new COjo(56, 13);
		arregloBoca = new CBoca(55, 15);

		arregloOjo->Ojos_Neutrales();
		arregloBoca->Boca_Neutral();

		Acciones(Alegre, Neutra, Triste);
		Indicaciones();
	}
}

void Triste(bool &Alegre, bool &Neutra, bool &Triste)
{
	while (Triste == true)
	{
		arregloOjo = new COjo(56, 13);
		arregloBoca = new CBoca(56, 15);

		arregloOjo->Ojos_Tristes();
		arregloBoca->Boca_Triste();

		Acciones(Alegre, Neutra, Triste);
		Indicaciones();
	}

}

void AEjecutar(bool &Ejecutar)
{
	bool InitNeutra = true;
	bool InitAlegre = false;
	bool InitTriste = false;

	while (Ejecutar == true)
	{
		while (InitNeutra == true)
		{
			Neutra(InitAlegre, InitNeutra, InitTriste);
		}
		while (InitAlegre == true)
		{
			Alegre(InitAlegre, InitNeutra, InitTriste);
		}
		while (InitTriste == true)
		{
			Triste(InitAlegre, InitNeutra, InitTriste);
		}
	}


}

