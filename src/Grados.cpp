#include "Grados.h"

Grados::Grados() {
	Nombre = " ";
	codGrado = 0;
	Plazas = 0;
}

Grados::Grados(string nombre, int cod, int plazas) {
	this->Nombre = nombre;
	this->codGrado = cod;
	this->Plazas = plazas;
}

void Grados::setNombre(string nombre) {
	this->Nombre = nombre;
}

void Grados::setCod(int cod) {
	this->codGrado = cod;
}

void Grados::setPlazas(int plazas) {
	this->Plazas = plazas;
}

string Grados::getNombre() {
	return this->Nombre;
}

int Grados::getCod() {
	return this->codGrado;
}

int Grados::getPlazas() {
	return this->Plazas;
}

GestorAlumnos Grados::getAlumnosAdmitidos(){
	return this->alumnosAdmitidos;
}

Grados::~Grados() {

}
