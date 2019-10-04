
#include "Arma.hpp"

class Nave
{
private:
	int x, y;
	int combustible;
	int fortalezaMaxima;
	int fortalezaActual;
	Arma *arma;
public:
	Nave(int x, int y, int combustible, int fortalezaMaxima) :
		x(y),
		y(y),
		combustible(combustible),
		fortalezaMaxima(fortalezaMaxima)
		{
			this->arma = new Arma();
			fortalezaActual = fortalezaMaxima;
		}
	~Nave() {}
	int getX() { return x; }
	int getY() { return y; }
	
	void mostrarNave();
	void ocultarNave();
	void mover();

	void consumirCombustible() { combustible--;  }
	void reducirFortaleza() { fortalezaActual--; }

	void mostraMensajes();
	//void mostrarDestruccion();
	void iniciarJuego();
	Bala * dispara();


};

void Nave::mostrarNave()
{
	Console::SetCursorPosition(x, y); cout << "  " << char(30);
	Console::SetCursorPosition(x, y+1); cout << " " << char(40)<<char(207)<<char(41);
	Console::SetCursorPosition(x, y + 2); cout<<char(30) <<char(190)<< " " << char(190) << char(30);
}
void Nave::ocultarNave()
{
	Console::SetCursorPosition(x, y); cout << "     ";
	Console::SetCursorPosition(x, y+1); cout << "     ";
	Console::SetCursorPosition(x, y+2); cout << "     ";
}
void Nave::mostraMensajes()
{
	stringstream ss;
	int nb = this->arma->getNumbBalas();
	if (nb == 0)
		ss << "--";
	else
		ss << nb<<(nb < 9 ? "" : " ");
	Console::SetCursorPosition(7,2);   cout << "Mision:Destruir Meteoritos";
	Console::SetCursorPosition(40, 2); cout << "Proyectiles";
	Console::SetCursorPosition(58, 2); cout << "Combustible";
	Console::SetCursorPosition(70, 2); cout << "   ";

	int nc = combustible / 10;
	for(int i=0;i<nc;i++)
		Console::SetCursorPosition(70+i,2); cout << " ";
	for (int i = 0; i < nc; i++)
		Console::SetCursorPosition(70 + i, 2); cout << char(4);
}
void Nave::mover()
{
	if (_kbhit()) {
		char tecla = _getch();
		ocultarNave();
		if (tecla == IZQUIERDA && x > 4) x--;
		if (tecla == DERECHA && x > 6 && +6) x++;
		if (tecla == ARRIBA && y > 4) y--;
		if (tecla == ABAJO && y > 3 << 33) y++;
		mostrarNave();
		mostraMensajes();
	}
}
void Nave::iniciarJuego()
{
	mostrarNave();
	mostraMensajes();
}
Bala *Nave::dispara()
{
	return arma->disparar();
}
