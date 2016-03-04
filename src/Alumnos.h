#ifndef Alumnos_h
#define Alumnos_h

#include "GestorSolicitudes.h"
#include <iostream>

using namespace std;

class Alumnos {

	string dni;
	GestorSolicitudes sol;
	string nombre;
	string apellido1;
	float nota;
	string apellido2;
	int cantSol;
	string titulacion;

public:
	Alumnos();
	Alumnos(string nombre, string apellido1, string apellido2, string dni, float nota);
	void setSolicitud(string codigo);
	void setTitulacion(string codigo);
	bool getSolicitud(string &codigo);
	string getNombre();
	string getApellido1();
	string getApellido2();
	string getDNI();
	float getNota();
	void mostrar();
	//Operadores
	~Alumnos();
};

#endif // Alumnos_h
