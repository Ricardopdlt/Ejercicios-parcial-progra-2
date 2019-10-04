#include "ListaSedes.h"
#include "ListaFechas.h"
#include <time.h>

void menu()
{
	cout << endl;
	cout << " ================MENÚ================ " << endl;
	cout << " [1] Observar registros " << endl;
	cout << " [2] Reporte pasajeros diarios " << endl;
	cout << " [3] Reporte recaudación mensual " << endl;
	cout << " [4] Reporte gasto gasolina mensual " << endl;
	cout << " [5] Salir " << endl;
	cout << " ==================================== " << endl;
	cout << " ELIGE TU OPCIÓN: ";
}

void generar_sedes(ListaSedes* vec)
{
	for (int i = 0; i < 4; i++)
	{
		Sede* sede;
		if (i == 0)
		{
			sede = new Sede("VILLA");
		}
		if (i == 1)
		{
			sede = new Sede("SAN MIGUEL");
		}
		if (i == 2)
		{
			sede = new Sede("MONTERRICO");
		}
		if (i == 3)
		{
			sede = new Sede("SAN ISIDRO");
		}
		vec->AgregarSede(sede);
	}

}

void generar_agentes(Sede* s, ListaSedes* vec)
{

	for (int i = 0; i < 4; i++)
	{
		AgenteSeguridad* ag;
		if (i == 0)
		{
			ag = new AgenteSeguridad("Ricardo", "Ponce", 70371963);
		}
		if (i == 1)
		{
			ag = new AgenteSeguridad("Richard", "Montenegro", 74672018);
		}
		if (i == 2)
		{
			ag = new AgenteSeguridad("Erly", "Argomedo", 67893456);
		}
		if (i == 3)
		{
			ag = new AgenteSeguridad("Aaron", "Gonzalez", 71236745);
		}
		
		s = vec->getSede(i + 1);
		s->AgregarAgente(ag);
	}

}

string aleatorio_nombres()
{

	int num = 1 + rand() % (11 - 1);
	string nombre;

	switch (num)
	{
	case 1:
		nombre = "Jhon";
		break;

	case 2:
		nombre = "Carlos";
		break;

	case 3:
		nombre = "Peter";
		break;

	case 4:
		nombre = "Joel";
		break;

	case 5:
		nombre = "Felix";
		break;

	case 6: 
		nombre = "Antón";
		break;

	case 7:
		nombre = "Ricardo";
		break;

	case 8:
		nombre = "Arturo";
		break;

	case 9:
		nombre = "Jorge";
		break;

	case 10:
		nombre = "Richard";
		break;
	}

	return nombre;
}

string aleatorio_apellidos()
{
	int num = 1 + rand() % (11 - 1);
	string apellido;

	switch (num)
	{
	case 1:
		apellido = "De León";
		break;

	case 2:
		apellido = "Costa";
		break;

	case 3:
		apellido = "Cortéz";
		break;

	case 4:
		apellido = "Calderón";
		break;

	case 5:
		apellido = "Lombardi";
		break;

	case 6:
		apellido = "Del Toro";
		break;

	case 7:
		apellido = "Cuarón";
		break;

	case 8:
		apellido = "Iñarritu";
		break;

	case 9: 
		apellido = "Nolan";
		break;

	case 10:
		apellido = "Leone";
		break;
	}

	return apellido;
}

string aleatorio_placa()
{
	string placa;

	int pc = 99 + rand() % (900 - 1);
	int aux1 = 1 + rand() % (28 - 1);
	int aux2 = 1 + rand() % (28 - 1);
	int aux3 = 1 + rand() % (28 - 1);
	int aid;

	for (int i = 0; i < 3; i++)
	{
		if (i == 0)
		{
			aid = aux1;
		}
		if (i == 1)
		{
			aid = aux2;
		}
		if (i == 2)
		{
			aid = aux3;
		}


		switch (aid)
		{
		case 1:
			placa += 'A';
			break;

		case 2:
			placa += 'B';
			break;

		case 3:
			placa += 'C';
			break;

		case 4:
			placa += 'D';
			break;

		case 5:
			placa += 'E';
			break;

		case 6:
			placa += 'F';
			break;

		case 7:
			placa += 'G';
			break;

		case 8:
			placa += 'H';
			break;

		case 9:
			placa += 'I';
			break;

		case 10:
			placa += 'J';
			break;

		case 11:
			placa += 'K';
			break;

		case 12:
			placa += 'L';
			break;

		case 13:
			placa += 'M';
			break;

		case 14:
			placa += 'N';
			break;

		case 15:
			placa += 'Ñ';
			break;

		case 16:
			placa += 'O';
			break;

		case 17:
			placa += 'P';
			break;

		case 18:
			placa += 'Q';
			break;

		case 19:
			placa += 'R';
			break;

		case 20:
			placa += 'S';
			break;

		case 21:
			placa += 'T';
			break;

		case 22:
			placa += 'U';
			break;

		case 23:
			placa += 'V';
			break;

		case 24:
			placa += 'W';
			break;

		case 25:
			placa += 'X';
			break;

		case 26:
			placa += 'Y';
			break;

		case 27:
			placa += 'Z';
			break;
		}
	}

	placa += '-';
	placa += to_string(pc);

	return placa;
}

string aleatorio_destino()
{
	string dest;

	int d = 1 + rand() % (4 - 1);;
	
	switch (d)
	{
	case 1:
		dest = "SAN MIGUEL";
		break;

	case 2:
		dest = "MONTERRICO";
		break;

	case 3:
		dest = "SAN ISIDRO";
		break;
	}

	return dest;
}

void generar_registros(Sede* s, ListaSedes* vec, AgenteSeguridad* ag, ListaFechas* vecF, int &d, int &m, int &y)
{
	Random r;

	m = r.Next(1, 12);
	y = r.Next(2017,2020);

	for (d = 1; d < 29; d++)
	{
		if (d == 7 || d == 14 || d == 21 || d == 28)
		{
			continue;
		}
		else
		{
			Fecha* fe;
			fe = new Fecha(d, m, y);
			vecF->AgregarFecha(fe);

			for (int i = 0; i < 4; i++)
			{
				s = vec->getSede(i+1);
				ag = s->getAgente(1);

				int numsalidas = 1;

				for (int n = 0; n < numsalidas; n++)
				{
					string nom = aleatorio_nombres();
					string ap = aleatorio_apellidos();
					string pc = aleatorio_placa();

					Conductor* cond;
					cond = new Conductor(nom, ap, r.Next(30, 60), r.Next(1, 10));

					Bus* bus;
					bus = new Bus(cond, pc, r.Next(0, 1000));

					string origen = s->getNombre();
					string destino;

					if (i != 0)
					{
						destino = "VILLA";
					}
					else
					{
						destino = aleatorio_destino();
					}


					RegistroSalida* registro;
					registro = new RegistroSalida(bus, r.Next(6, 20), origen, destino, r.Next(1, 50));
					registro->setFecha(fe);

					ag->AgregarSalida(registro);
				}

			}
		}
	}
	
}

void mostrar_registros(Sede* s, ListaSedes* vec, AgenteSeguridad* ag, RegistroSalida* reg, Bus* b, Conductor* con, Fecha* f, int &d, int &m, int &y)
{
	cout << endl;
	cout << " =====SEDES===== " << endl;
	for (int i = 0; i < 4; i++)
	{
		cout << endl;
		s = vec->getSede(i + 1);
		ag = s->getAgente(1);
		cout << " [" << i + 1 << "] " << s->getNombre() << endl;
		cout << " - Agente: " << ag->getNombre() << " " << ag->getApellido() << " " << ag->getDNI() << endl;
		cout << " =====REGISTROS===== " << endl;

		for (int n = 0; n < ag->getN(); n++)
		{
			reg = ag->getSalida(n+1);
			f = reg->getFecha();
			b = reg->getBus();
			con = b->getConductor();

			cout << " Día : <" << f->getDia() << "/" << f->getMes() << "/" << f->getYear() << ">" << endl;
			cout << " (" << n + 1 << ") " << con->getNombre() << " " << con->getApellido() << " \t" << b->getPlaca() << "\t   " << reg->getCantidad() 
				<< "\t   " << reg->getOrigen() << "\t  " << reg->getDestino() << endl;
		}
		
	}
}

void Reporte_pasajeros_diarios(Sede* s, ListaSedes* vec, AgenteSeguridad* ag, RegistroSalida* reg, Fecha* f, ListaFechas* vecF, int &d, int &m, int &y)
{
	int cant;
	Fecha* aux;

	cout << endl;
	cout << " =======PASAJEROS DIARIOS=======" << endl;
	cout << endl;

	for (int i = 0; i < vecF->getF(); i++)
	{
		f = vecF->getFecha(i);
		cant = 0;

		for (int i = 0; i < 4; i++)
		{
			s = vec->getSede(i + 1);
			ag = s->getAgente(1);

			for (int i = 0; i < ag->getN(); i++)
			{
				reg = ag->getSalida(i + 1);
				aux = reg->getFecha();

				if (d = aux->getDia() == f->getDia())
				{
					cant += reg->getCantidad();
				}
			}

		}

		cout << " DÍA : <" << f->getDia() << "/" << f->getMes() << "/" << f->getYear() << ">  --- ";
		cout << " CANTIDAD : " << cant << endl;

	}
}

void Reporte_recaudacion_mensual(Sede* s, ListaSedes* vec, AgenteSeguridad* ag, RegistroSalida* reg)
{
	double recaudacion = 0.00;
	int cant = 0; //cant total de pasajeros

	for (int i = 0; i < vec->getD(); i++)
	{
		s = vec->getSede(i + 1);
		ag = s->getAgente(1);
		
		for (int j = 0; j < ag->getN(); j++)
		{
			reg = ag->getSalida(j + 1);
			cant += reg->getCantidad();
		}
	}

	recaudacion = cant * 2.50;

	cout << endl;
	cout << " =======RECAUDACIÓN MENSUAL=======" << endl;
	cout << endl;
	cout << " TOTAL : S/" << recaudacion << " de " << cant << " pasajeros " << endl;
}

void Reporte_gasolina_mensual(Sede* s, ListaSedes* vec, AgenteSeguridad* ag, RegistroSalida* reg)
{
	int cant = 0;

	for (int i = 0; i < vec->getD(); i++)
	{
		s = vec->getSede(i + 1);
		ag = s->getAgente(1);

		for (int j = 0; j < ag->getN(); j++)
		{
			reg = ag->getSalida(j + 1);
			string dest = reg->getDestino();

			if (i == 0)
			{
				if (dest == "MONTERRICO")
				{
					cant += 50;
				}
				if (dest == "SAN MIGUEL")
				{
					cant += 70;
				}
				if (dest == "SAN ISIDRO")
				{
					cant += 60;
				}
			}
			if (i == 1)
			{
				cant += 70;
			}
			if (i == 2)
			{
				cant += 50;
			}
			if (i == 3)
			{
				cant += 60;
			}
			
		}
	}

	cout << endl;
	cout << " =======GASTO GASOLINA MENSUAL=======" << endl;
	cout << endl;
	cout << " TOTAL : S/" << cant << endl;
}