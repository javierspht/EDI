#ifndef Grados_h
#define Grados_h

#include "GestorAlumnosEnGrado.h"

using namespace std;



class Grados {

	string Nombre;
	int codGrado;
	int Plazas;
	GestorAlumnosEnGrado alumnosAdmitidos;
	GestorAlumnosEnGrado alumnosEspera;

 public:

	Grados();
	Grados(string nombre, int cod, int plazas);
	void setNombre(string nombre);
	void setCod(int cod);
	void setPlazas(int plazas);
	string getNombre();
	int getCod();
	int getPlazas();
	GestorAlumnos getAlumnosAdmitidos();
	~Grados();


};

#endif // Grados_h
