#ifndef _BarcoPesquero_
#define _BarcoPesquero_

#include "Barco.h"


class BarcoPesquero : public Barco
 {    
     private:  
        int capacidad;   
        int carga; //carga = carga - cargaDespacho  

     public:
     
        BarcoPesquero(string nombre,string id,int capacidad,int carga);
        
        void setCapacidad(int capacidad);
        void setCarga(int carga);
        
        int getCapacidad();
        int getCarga();
        
        void arribar(float cargaDespacho); 
     
 };
 #endif
