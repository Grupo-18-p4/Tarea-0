#ifndef BarcoPesquero
#define BarcoPesquero
class BarcoPesquero : public Barco
 {    
     private:  
     int capacidad;  //field or data member     
     int carga; //carga = carga - cargaDespacho  

     public:
     
     BarcoPesquero();
     BarcoPesquero(String nombre,String id,int capacidad,int carga);
     BarcoPesquero(int capacidad);
     BarcoPesquero(int carga);
     
     int getCapacidad();
     int getCarga();
     
     void arribar(float cargaDespacho); 
     
 };
 #endif
