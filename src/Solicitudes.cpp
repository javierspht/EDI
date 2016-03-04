#include "Solicitudes.h"

Solicitudes::Solicitudes(){
	codSol=0;
}

Solicitudes::Solicitudes(int codSol){
	this->codSol=codSol;
}

void Solicitudes::setSolicitud(int sol) {
	this->codSol=sol;
}

int Solicitudes::getSolicitud() {
	return this->codSol;
}

Solicitudes::~Solicitudes() {

}
