// Hoja3_Ejercicio5.cpp : main project file.

#include <iostream>
#include <conio.h>
#include "CCompetencia.h"

using namespace System;
using namespace std;

int main()
{
	CCompetencia* competencia = new CCompetencia();
	char tecla;

	//while (competencia->Get_hayGanador() == false) {
		competencia->DibujarAutos();
	//	if (_kbhit()) {
			tecla = getch();
			tecla = toupper(tecla);
			
			if (tecla == 'G') {
				while (competencia->Get_hayGanador() == false) {
					competencia->BorrarAutos();
					competencia->MoverAutos(80);
					competencia->DibujarAutos();
					competencia->VerificarGanador();
					_sleep(500);
				}
			}
	//	}
	//}

	Console::SetCursorPosition(1, 20);
	Console::ForegroundColor = ConsoleColor::Gray;
	cout << "El auto ganador es el color ";
	Console::ForegroundColor = ConsoleColor(competencia->Get_colorGanador());
	cout << char(219);
	

	_getch();
    return 0;
}
