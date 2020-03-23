#ifndef _DtBarcoPasajeros_
#define _DtBarcoPasajeros_
#include "DtBarco.h"
//#include "TipoTamanio.h"
class DtBarcoPasajeros: public DtBarco{
    private:
        int cantPasajeros;
        //TipoTamanio tamanio;
    public:
        
        //Constructores
        DtBarcoPasajeros(); //No se si es necesario agregar este
        //DtBarcoPasajeros(int cantPasajeros, TipoTamanio tamanio)
        
        //Getters
        int get_cantPasajeros();
        //TipoTamanio get_tamanio()
};
#endif
