#ifndef DTPUERTO_H
#define DTPUERTO_H

#include "DtFecha.h"
#include <iostream>
using namespace std;

class DtPuerto {
    private:
        string id;
        string nombre;
        DtFecha fechaCreacion;
        int cantArribos;
    public: 
        DtPuerto();
        DtPuerto(string id, string nombre, DtFecha fechaCreacion, int cantArribos);
        string getid();
        string getnombre();
        DtFecha getfecha();
        int getcant();
};
ostream& operator << (ostream &os, DtPuerto & dtp);
#endif

