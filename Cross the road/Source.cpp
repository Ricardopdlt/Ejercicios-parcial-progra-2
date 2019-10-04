#include "Juego.h"

void main()
{
	srand(time(0));
	Juego* juego = new Juego();
	bool init = true;

	if (init == true)
	{
		juego->PlayGame(init);
	}

	exit(0);
}