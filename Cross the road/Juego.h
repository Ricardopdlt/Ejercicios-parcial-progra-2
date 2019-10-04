#ifndef _JUEGO_H_
#define _JUEGO_H_

#include "Persona.h"
#include "Bus.h"
#include "Carro.h"
#include "Bicicleta.h"

class Juego
{
private:

	vector <Terrestre*>* vecVeh;
	Persona* per;

public:

	Juego()
	{
		vecVeh = new vector <Terrestre*>();
		per = new Persona(Xi, Yi);

		for (int i = 0; i < 4; i++)
		{
			if (i == 0)
			{
				vecVeh->push_back(new Carro(10 + rand() % (61 - 10), 2 + rand() % (9 - 2), 1 + rand() % (3 - 1)));
			}
			if (i == 1)
			{
				vecVeh->push_back(new Bus(10 + rand() % (61 - 10), 10 + rand() % (16 - 10), 1 + rand() % (3 - 1)));
			}
			if (i == 2 || i == 3)
			{
				vecVeh->push_back(new Bicicleta(10 + rand() % (61 - 10), 18 + rand() % (25 - 18), 1 + rand() % (3 - 1)));
			}
		}
	}

	~Juego()
	{
		vecVeh = NULL;
		delete[] vecVeh;
	}

	void PlayGame(bool &init)
	{
		Console::SetWindowSize(80, 40);
		Console::CursorVisible = false;
		per->dibujar();
		while (init == true)
		{
			for (int i = 0; i < vecVeh->size(); i++)
			{
				Terrestre* ter = vecVeh->at(i);
				ter->borrar();
				ter->mover();
				ter->dibujar();
			}

			for (int i = 0; i < vecVeh->size(); i++)
			{
				Terrestre* ter = vecVeh->at(i);
				ter->Colision(per);
			}

			per->mover();

			if (per->getY() == 0)
			{
				Console::Clear();
				Console::SetCursorPosition(20, 25);
				cout << " Cruzaste la pista, estas a salvo " << endl;
				_getch();
				exit(0);
			}

			_sleep(50);
		}
	}
};
#endif // !_JUEGO_H_
