#include "GestorAlumnos.h"

GestorAlumnos::GestorAlumnos() {
	alumnos = new ListaPI<Alumnos*>();
	cuantos = 0;
}

void GestorAlumnos::aniadirAlumno(Alumnos *alumno) {
	alumnos->insertar(alumno);
	cuantos++;
}

void GestorAlumnos::eliminarAlumno(Alumnos *alumno) {
		Alumnos *aAux;
		alumnos->moverInicio();
		while(alumno != alumnos->consultar(aAux)){
			alumnos->avanzar();
		}
		if(alumno == alumnos->consultar(aAux)){
			alumnos->borrar();
		}
}

bool GestorAlumnos::getAlumno(string nom, string apell, Alumnos *&alum) {
	alumnos->moverInicio();


}

GestorAlumnos::~GestorAlumnos() {
}
