#ifndef DTARRIBO_H
#define DTARRIBO_H

#include "DtFecha.h"
#include "DtBarco.h"
#include <iostream>

class DtArribo {
	private:
		DtFecha fecha;
		float carga;
		DtBarco* barco;
    public: 
    	DtArribo(DtFecha fecha, float carga, DtBarco *barco);
    	DtFecha getF();
    	float getC();
    	DtBarco* getB();
};

#endif
