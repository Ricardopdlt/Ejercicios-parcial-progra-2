
#include "Bala.hpp"
class Arma
{
private:
	Bala **balas;
	int maxbalas;
	int numbalas;
	int x;
	int y;
public:
	Arma(int maxbalas = 1020, int numBalas = 0, int x = 0, int y = 0)
	{
		this->maxbalas = maxbalas;
		this->numbalas = numBalas;
		this->x = x;
		this->y = y;
		balas = NULL;
		cargar();
	}
	~Arma() { }
	Bala * disparar()
	{
		if (numbalas > 0)
			return  balas[--numbalas];
		return NULL;
	}
	void cargar()
	{
		if (balas == NULL)
			balas = new Bala *[maxbalas];
		numbalas = maxbalas;
		for(int i=0; i < numbalas; i++)
			balas[i] = new Bala(x, y);
	}
	bool estaVacia() {
		return numbalas == 0;
	}	
	int getNumbBalas() { return this->numbalas; }
};
