#ifndef DTPUERTO_H
#define DTPUERTO_H

#include "DtFecha.h"
#include <iostream>

class DtPuerto {
	private:
		std::string id;
		std::string nombre;
		DtFecha fechaCreacion;
		int cantArribos;
    public: 
    	DtPuerto();
    	DtPuerto(std::string id, std::string nombre, DtFecha fechaCreacion, int cantArribos);
    	std::string getid();
    	std::string getnombre();
    	DtFecha getfecha();
    	int getcant();
}

#endif

