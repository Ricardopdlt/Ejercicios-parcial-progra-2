#pragma once
#include "CAuto.h"
#include <vector>

class CCompetencia
{
public:
	CCompetencia();
	~CCompetencia();

	void DibujarAutos();
	void MoverAutos(int meta);
	void BorrarAutos();
	
	void VerificarGanador();
	int Get_colorGanador();
	bool Get_hayGanador();

private:
	vector<CAuto*>* arr;
	bool hayGanador;
	int colorGanador;
};

CCompetencia::CCompetencia()
{
	hayGanador = false;
	arr = new vector<CAuto*>();
	CAuto* temp;
	int x = 7;
	int y = 5;
	Random r;
	for (int i = 0; i < 3; i++) {
		temp = new CAuto(x, y, r.Next(1, 16), r.Next(3,7));
		arr->push_back(temp);
		y += 4;
	}
}

CCompetencia::~CCompetencia()
{
}

void CCompetencia::DibujarAutos()
{
	for (int i = 0; i < arr->size(); i++) {
		arr->at(i)->Dibujar();
	}
}

void CCompetencia::MoverAutos(int meta)
{
	for (int i = 0; i < arr->size(); i++) {
		arr->at(i)->Mover(meta);
	}
}

void CCompetencia::BorrarAutos()
{
	
	for (int i = 0; i < arr->size(); i++) {
		arr->at(i)->Borrar();
	}
}

void CCompetencia::VerificarGanador()
{
	
	for (int i = 0; i < arr->size(); i++) {
		if (arr->at(i)->Get_enMeta()==true && hayGanador != true) {
			colorGanador = arr->at(i)->Get_color();
			hayGanador = true;
		}
	}
}

int CCompetencia::Get_colorGanador() { return this->colorGanador; }

bool CCompetencia::Get_hayGanador() { return this->hayGanador; }