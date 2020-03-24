#ifndef BarcoPesquero
#define BarcoPesquero
class BarcoPesquero : public Barco
 {    
     private:  
     int capacidad;  //field or data member     
     int carga; //carga = carga - cargaDespacho  

     public:
     
     BarcoPesquero();
     BarcoPesquero(String id,int capacidad,int carga);//uso el id de barco asi no mas?
     BarcoPesquero(int capacidad);
     BarcoPesquero(int carga);
     
     int getCapacidad();  //necesitan parametros de entrada? onda el id o no?
     int getCarga();
     
     void arribar(float cargaDespacho); 
     
 };
 #endif
