
#ifndef _VECFIGURAS_H_
#define _VECFIGURAS_H_
#include "Cuadrado.h"
class VecCuadrado
{

private:
	Cuadrado **arr;
	int n;
public:
	VecCuadrado()
	{
		n = 0;
		arr = new Cuadrado*[n];
	}
	~VecCuadrado()
	{
		for (int i = 0; i < n; i++)
			delete arr[i];
		delete[] arr;
	}
	void agregarFigura(Cuadrado *fig)
	{
		Cuadrado **aux = new Cuadrado*[n + 1];
		for (int i = 0; i < n; i++)
			aux[i] = arr[i];

		aux[n] = fig;
		arr = aux;
		n++;

	}
	void eliminarFigura()
	{
		if (n > 0)
		{
			arr[n - 1]->borrar();

			Cuadrado **aux = new Cuadrado*[n - 1];
			for (int i = 0; i < n - 1; i++)
				aux[i] = arr[i];

			arr = aux;
			n--;
		}
	}
	void moverFiguras()
	{
		for (int i = 1; i < n; i++)
			arr[i]->mover();
	}

	void cambiarColor()
	{
		Random r;
		

		for (int i = 1; i < n; i++)
		{
			arr[i]->setColor((int)r.Next(1, 16));
		}

	}

};
#endif
