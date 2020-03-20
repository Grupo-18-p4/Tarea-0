#ifndef _DtBarcosPasajeros_
#define _DtBarcosPasajeros_
#include "DtBarco.h"
//#include "TipoTamanio.h"
class DtBarcosPasajeros: public DtBarco{
    private:
        int cantPasajeros;
        //TipoTamanio tamanio;
    public:
        DtBarcosPasajeros(); //No se si es necesario agregar este
        //DtBarcosPasajeros(int cantPasajeros, TipoTamanio tamanio)
        int get_cantPasajeros();
        //TipoTamanio get_tamanio()
};
#endif
