#include <iostream>
#include <conio.h>
#include "VecFigura.h"


void main()
{
	Console::SetWindowSize(100, 50);
	Console::CursorVisible = false;
	Random r;
	VecCuadrado *vec = new VecCuadrado();
	Cuadrado *fig;

	while (true)
	{
		if (kbhit())
		{
			char tecla = getch();
			if (toupper(tecla) == 'A')
			{
				fig = new Cuadrado(0, 0, (int)r.Next(1, 16));
				vec->agregarFigura(fig);
			}
			if (toupper(tecla) == 'E')
			{
				vec->eliminarFigura();
			}
			if (toupper(tecla) == 'C')
			{
				vec->cambiarColor();
			}
			if (toupper(tecla) == 'S')
			{
				exit(0);
			}
		}
		vec->moverFiguras();
		_sleep(100);
	}
}
