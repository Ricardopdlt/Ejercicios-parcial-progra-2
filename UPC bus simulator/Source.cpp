#include "ListaSedes.h"
#include "Funciones.h"
#include <stdlib.h>

void main()
{
	srand(time(NULL));
	setlocale(LC_CTYPE, "Spanish");

	int opcion;

	ListaSedes* vec = new ListaSedes();
	Sede* sede;
	AgenteSeguridad* agente;
	RegistroSalida* registro;
	Bus* bus;
	Conductor* conductor;
	Fecha* fecha;
	ListaFechas* vecF = new ListaFechas();
	int dia;
	int mes;
	int year;

	generar_sedes(vec);
	generar_agentes(sede, vec);
	generar_registros(sede, vec, agente, vecF, dia, mes, year);

	while (true)
	{
		Console::Clear();
		menu();
		cin >> opcion;

		switch (opcion)
		{
		case 1: 
			mostrar_registros(sede, vec, agente, registro, bus, conductor, fecha, dia, mes, year);
			break;

		case 2:
	        Reporte_pasajeros_diarios(sede, vec, agente, registro, fecha, vecF, dia, mes, year);
			break;

		case 3:
			Reporte_recaudacion_mensual(sede, vec, agente, registro);
			break;

		case 4:
			Reporte_gasolina_mensual(sede, vec, agente, registro);
			break;

		case 5:
			exit(0);
			break;

		}

		_getch();
	}
	
}