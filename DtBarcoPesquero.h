#ifndef _DtBarcoPesquero_
#define _DtBarcoPesquero_
#include "DtBarco.h"
class DtBarcoPesquero: public DtBarco{
    private:
        int capacidad;
        int carga;
    public:
        
        //Constructores
        DtBarcoPesquero(); //No se si es necesario agregar este
        DtBarcoPesquero(int capacidad, int carga);
        
        //Getters
        int get_capacidad();
        int get_carga();
};
#endif