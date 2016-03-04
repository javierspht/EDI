#ifndef GestorSolicitudes_h
#define GestorSolicitudes_h

#include "Solicitudes.h"
#include "cola.h"

using namespace std;

class GestorSolicitudes {

	Cola<Solicitudes*> colaSol;

public:

	GestorSolicitudes();
	void aniadirSolicitud(string codigo);
	bool buscarSolicitud(string codigo);
	string sacarSolicitud(string codigo);
	void mostrar();
	~GestorSolicitudes();

};

#endif // GestorSolicitudes_h
