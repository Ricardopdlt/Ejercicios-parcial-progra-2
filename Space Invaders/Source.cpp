#include "Raza.h"
#include "Alfa.h"
#include "Beta.h"
#include "Gamma.h"
#include <vector>

int main()
{
	Console::SetWindowSize(100, 50);
	Console::CursorVisible = false;
	Console::BackgroundColor = (ConsoleColor)1;
	Console::Clear();
	Console::SetCursorPosition(40, 25);
	setlocale(LC_CTYPE, "Spanish");
	cout << " Comienza la invasión.....!!!! " << endl;
	Console::SetCursorPosition(36, 26);
	cout << " Presione A para crear una nave " << endl;
	_getch();

	vector <Raza*>* razas = new vector <Raza*>();
	int contadorAlfa = 0;
	int contadorBeta = 0;
	int contadorGamma = 0;

	while (true)
	{
		Console::Clear();
		if (_kbhit())
		{
			if (_getch() == 97)
			{
				razas->push_back(new Alfa(0, 0));
				contadorAlfa++;
				if (contadorAlfa % 2 == 0 && contadorAlfa >0)
				{
					razas->push_back(new Beta(40,0));
					contadorBeta++;
				}
				if (contadorBeta % 2 == 0 && contadorBeta>0)
				{
					razas->push_back(new Gamma(70, 20));
					contadorGamma++;
				}
			}
			
		}
		if (razas->size() >= 20)
		{
			Console::Clear();
			break;
		}
		for (int i = 0; i < razas->size(); i++)
		{
			Raza* raza = razas->at(i);
			raza->setY(raza->getY() + 1);
			if (raza->getY() + raza->getAlto() < 50)
			{
				raza->dibujar();
			}
		}

		_sleep(250);
		
	}
	Console::SetCursorPosition(40, 25);
	cout << " Ya hemos sido invadidos " << endl;
	_getch();
	
}
