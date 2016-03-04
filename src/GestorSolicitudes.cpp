#include "GestorSolicitudes.h"

GestorSolicitudes::GestorSolicitudes() {
	GestorSolicitudes* colaSol = new GestorSolicitudes;
}

void GestorSolicitudes::aniadirSolicitud(string codigo) {
	colaSol.encolar(codigo);
}

bool GestorSolicitudes::buscarSolicitud(string codigo) {
}

string GestorSolicitudes::sacarSolicitud(string codigo) {
}

void GestorSolicitudes::mostrar() {
}

GestorSolicitudes::~GestorSolicitudes() {
	delete colaSol;
}
