#ifndef _BarcoPasajeros_
#define _BarcoPasajeros_

#include "Barco.h"
#include "TipoTamanio.h"

class BarcoPasajeros : public Barco
 {    
     private:  
        int cantPasajeros;    
        TipoTamanio tamanio; 

     public:
     
        BarcoPasajeros(string nombre, string id,int cantPasajeros,TipoTamanio tamanio);

        void setcantPasajeros(int cantPasajeros); //meti void porque sino da error
        void setTamanio(TipoTamanio tamanio);
        
        int getCantPasajeros();
        TipoTamanio getTamanio();
   

 };
 #endif
