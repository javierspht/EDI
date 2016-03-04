#include "Alumnos.h"

Alumnos::Alumnos() {
	dni = " ";
	nombre = " ";
	apellido1 = " ";
	apellido2 = " ";
	nota = 0;
	cantSol = 0;
	titulacion = " ";
}

Alumnos::Alumnos(string nombre, string apellido1, string apellido2, string dni,
		float nota) {
	this->dni = dni;
	this->nombre = nombre;
	this->apellido1 = apellido1;
	this->apellido2 = apellido2;
	this->nota = nota;
	this->cantSol = 0;
	this->titulacion = " ";
}

void Alumnos::setSolicitud(string codigo) {
	sol->aniadirSolicitud(codigo);
}

void Alumnos::setTitulacion(string codigo) {
	titulacion = codigo;
}

bool Alumnos::getSolicitud(string& codigo) {
	bool enc = false;
	if (sol->buscarSolicitud(codigo)) {
		codigo = sol->sacarSolicitud(codigo);
		enc = true;
	}
	return enc;
}

string Alumnos::getNombre() {
	return this->nombre;
}

string Alumnos::getApellido1() {
	return this->apellido1;
}

string Alumnos::getApellido2() {
	return this->apellido2;
}

string Alumnos::getDNI() {
	return this->dni;
}

float Alumnos::getNota() {
	return this->nota;
}

void Alumnos::mostrar() {
	cout << "Mostrando info del alumno:" << endl;
	cout << "Nombre: " << nombre << endl;
	cout << "Apellidos: " << apellido1 << apellido2 << endl;
	cout << "DNI: " << dni << endl;
	cout << "Nota: " << nota << endl;
	cout << "Lista de solicitudes: ";
	sol->mostrar();
	cout << endl;
	cout << "Titulación: " << titulacion << endl;
}

Alumnos::~Alumnos() {
}
