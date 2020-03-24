#include <iostream>

Barco :: Barco();

Barco :: Barco(String id, String nombre){
    this->id = id;
    this->nombre = nombre;
}

Barco : Barco(String nombre){
    this->nombre = nombre;   
}

nombre Barco :: getnombre(){
    return this->nombre;
}

id Barco :: getid(){
    return this->id;
}
