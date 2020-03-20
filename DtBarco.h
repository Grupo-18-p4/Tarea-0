#include <iostream> //Para poder usar el tipo string
#ifndef _DtBarco_
#define _DtBarco_
class DtBarco{
    private: 
        std::string cantPasajeros;
        std::string id;
    public:
        DtBarco();
        DtBarco(std::string cantPasajeros, std::string id);
        std::string get_id();
        std::string get_cantPasajeros();
        //NO SE SI VAN LOS SETTER
};

#endif