#ifndef BarcoPesquero
#define BarcoPesquero
class BarcoPesquero : public Barco
 {    
     private:  
     int capacidad;  //field or data member     
     int carga; //carga = carga - cargaDespacho  

     public:

     void arribar(float cargaDespacho); 
 };
 #endif
