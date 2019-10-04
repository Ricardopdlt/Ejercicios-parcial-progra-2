#include <iostream>
#include <conio.h>
#include "Competencia.h"

using namespace std;
using namespace System;

void main()
{
	Console::SetWindowSize(100, 30);
	Console::CursorVisible = false;
	Random r;
	Competencia *Vec = new Competencia();
	Carro *fig;

	int lug = 4;
	bool carrera = true;

	for (int i = 0; i < 3; i++)
	{

		fig = new Carro(0, lug, (int)r.Next(1,4),(int)r.Next(1,16));
		Vec->agregarFigura(fig);

		lug += 10;
	}

	Vec->Dibujar_Figura();

			
	while (carrera == true)
	{
		if (kbhit())
		{
			char tecla = getch();

			if (toupper(tecla) == 'G')
			{
				while (true)
				{
					Vec->moverFiguras();
					_sleep(100);
				}

			}
		}

		
	}

	_getch();
}