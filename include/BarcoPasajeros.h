#ifndef BarcoPasajeros
#define BarcoPasajeros
class BarcoPasajeros : public Barco
 {    
     private:  
     int cantPasajeros;  //field or data member     
     TipoTamanio tamanio; //field or data member  

     public:
     
     BarcoPasajeros();
     BarcoPasajeros(String id,int cantPasajeros,TipoTamanio tamanio);
     
     int getCantPasajeros();
     TipoTamanio getTipoTamanio();
     
     void arribar(float cargaDespacho); //los barcos de pasajeros no poseen carga, no se realizan cambios
 };
 #endif
