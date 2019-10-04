
#include "Meteorito.hpp"


int main()
{
	srand(time(0));
	Console::CursorVisible = false;
	Nave *nave = new Nave(30, 20, 50, 3);
	nave->iniciarJuego();
	Meteorito **mt = new Meteorito*[4];
	for (int i = 0; i < 4; i++)
		mt[i] = new Meteorito(10 + rand() % 8, 6 + rand() % 5);
	bool finJuego = false;
	list <Bala *> disparos;
	list <Bala *>::iterator it;
	Bala *bd;
	while (!finJuego)
	{
		nave->mostraMensajes();
		if (_kbhit())
		{
			char  tecla = _getch();
			if (tecla == 'd')
			{
				bd = nave->dispara();

				if (bd != nullptr)
				{
					bd->setPosicion(nave->getX() + 2, nave->getY() - 1);
					disparos.push_back(bd);
				}
			}
		}

		for (it = disparos.begin(); it != disparos.end(); it++)
			(*it)->mover();
			
		for (int i = 0; i < 4; i++)
		{
			mt[i]->mover();
			mt[i]->colision(nave);
		}
		nave->mover();
		Sleep(90);
	}

	cin.get();
}
