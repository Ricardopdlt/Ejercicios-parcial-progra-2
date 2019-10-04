#include "Nave.hpp"
class Meteorito
{
private:
	int x, y;
public:
	Meteorito(int _x, int _y):x(_x),y(_y) { }
	~Meteorito() {}
	void mostrar();
	void mover();
	void colision(Nave *nave);

};
void Meteorito::mostrar()
{
	Console::SetCursorPosition(x, y); cout << char(184);
}
void Meteorito::mover()
{
	Console::SetCursorPosition(x, y); cout << " ";
	y++;
	if (y > 29)
	{
		x = rand() % 73 + 3;
		y = 4;
	}
	mostrar();
}
void Meteorito::colision(Nave * nave)
{
	if (x >= nave->getX() && x <= nave->getX() + 4 && y >= nave->getY() && y <= nave->getY() + 2)
	{
		nave->reducirFortaleza();
		for (int i = 0; i < 300; i++)
		{
			nave->ocultarNave();
		}
		nave->mostrarNave();
		nave->mostraMensajes();
		x = rand() % 73 + 3;
		y = 4;
	}
}