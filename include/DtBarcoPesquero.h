#ifndef _DtBarcoPesquero_
#define _DtBarcoPesquero_
#include "DtBarco.h"
class DtBarcoPesquero: public DtBarco{
    private:
        int capacidad;
        int carga;
    
    public:     
        //Constructores
        DtBarcoPesquero(string nombre,string id, int capacidad, int carga);
        
        //Getters
        int get_capacidad();
        int get_carga();

        //Destructor
        ~DtBarcoPesquero();

        friend const ostream& operator<< (ostream& os, DtBarcoPesquero obj);
};
#endif