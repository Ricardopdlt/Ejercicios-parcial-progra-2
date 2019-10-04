#include "Controlador.h"
int menu()
{
	setlocale(LC_CTYPE, "Spanish");
	Console::ForegroundColor = ConsoleColor::White;
	char opc;
	cout << endl;
	cout << " =====MENÚ===== " << endl;
	cout << " [C] Coche " << endl;
	cout << " [M] Moto " << endl;
	cout << " [A] Avión " << endl;
	cout << " [H] Helicoptero " << endl;
	cout << " ============== " << endl;
	cout << " Elije una opción: ";

	cin >> opc;
	return opc;
}

void main()
{
	Controlador* cont = new Controlador();
	Console::CursorVisible = false;
	char opc = menu();
	
	while (true)
	{
		cont->mostrar(opc);
		_sleep(50);
		cont->borrar(opc);
		cont->mover(opc);

		if (_kbhit())
		{
			if (_getch() == 13)
			{
				Console::Clear();
				opc = menu();
			}
		}

	}
}