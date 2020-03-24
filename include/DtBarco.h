#ifndef _DtBarco_
#define _DtBarco_
#include <iostream> //Para poder usar el tipo string
using namespace std;
class DtBarco{
    private: 
        string nombre;
        string id;
    public:
        //DtBarco(); Me parece que esto no es necesario
        DtBarco(string nombre, string id);
        string get_id();
        string get_nombre();
        //NO SE SI VAN LOS SETTER
};

#endif