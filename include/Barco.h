#ifndef Barco
#define Barco
class Barco
 {    
     private:  
     String nombre;  //field or data member     
     String id; //field or data member  
     
     public:
     Barco();
     Barco(String id, String nombre);
     Barco(String nombre);
 
     getnombre();
     getid();
 
     void arribar(float cargaDespacho); 
 };
 #endif
