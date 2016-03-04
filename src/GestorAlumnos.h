#ifndef GestorAlumnos_h
#define GestorAlumnos_h

#include "Alumnos.h"
#include "listapi.h"

using namespace std;



class GestorAlumnos {

    ListaPI<Alumnos*> *alumnos;
    int cuantos;

 public:

    void aniadirAlumno(Alumnos *alumno);
    void eliminarAlumno(Alumnos *alumno);
    bool getAlumno(string nom, string apell, Alumnos *&alum);

};

#endif // GestorAlumnos_h
