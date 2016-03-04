/*
 * GestorAlumnosEnGrado.h
 *
 *  Created on: 2 de mar. de 2016
 *      Author: jsp
 */

#ifndef GESTORALUMNOSENGRADO_H_
#define GESTORALUMNOSENGRADO_H_

#include "ListaPI.h"

class GestorAlumnosEnGrado {

	ListaPI<Alumnos*> listaAlumnos;

public:
	GestorAlumnosEnGrado();
	void aniadirAlumno(Alumnos alumno);
	void eliminarAlumno(Alumnos alumno);
	void ordenarDsc();
	~GestorAlumnosEnGrado();
};

#endif /* GESTORALUMNOSENGRADO_H_ */
