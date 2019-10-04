#include <string>

using namespace System;
using namespace std;

class CHotel
{
private:

	string Nombre;
	int Estrellas; 
	string Ubicacion; 
	char Desayuno; 
	long Numero;
	char Servicio;

public:

	CHotel(string Nombre, int Estrellas, string Ubicacion, char Desayuno, long Numero, char Servicio);
	~CHotel();

	void set_Nombre(string nom);
	string get_Nombre();

	void set_Estrellas(int estre);
	int get_Estrellas();

	void set_Ubicacion(string ubi);
	string get_Ubicacion();
	char get_UbicacionIf();

	void set_Desayuno(char des);
	char get_Desayuno();
	
	void set_Numero(long num);
	long get_Numero();

	void set_Servicio(char serv);
	char get_Servicio();
		
};

CHotel::CHotel(string Nombre = " ", int Estrellas = 0, string Ubicacion = " ", char Desayuno = ' ', long Numero = 0, char Servicio = ' ')
{
	this->Nombre = Nombre;
	this->Estrellas = Estrellas;
	this->Ubicacion = Ubicacion;
	this->Desayuno = Desayuno;
	this->Numero = Numero;
	this->Servicio = Servicio;

}
CHotel::~CHotel()
{
}

void CHotel::set_Nombre(string nom)
{
	this->Nombre = nom;
}
string CHotel::get_Nombre()
{
	return Nombre;
}

void CHotel::set_Estrellas(int estre)
{
	this->Estrellas = estre;
}
int CHotel::get_Estrellas()
{
	return Estrellas;
}

void CHotel::set_Ubicacion(string ubi)
{
	this->Ubicacion = ubi;
}
string CHotel::get_Ubicacion()
{
	return Ubicacion;
}
char CHotel::get_UbicacionIf()
{
	return Ubicacion[0];
}

void CHotel::set_Desayuno(char des)
{
	this->Desayuno = des;
}
char CHotel::get_Desayuno()
{
	return Desayuno;
}

void CHotel::set_Numero(long num)
{
	this->Numero = num;
}
long CHotel::get_Numero()
{
	return Numero;
}

void CHotel::set_Servicio(char serv)
{
	this->Servicio = serv;
}
char CHotel::get_Servicio()
{
	return Servicio;
}

