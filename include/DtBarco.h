#ifndef _DtBarco_
#define _DtBarco_
#include <iostream> //Para poder usar el tipo string
using namespace std;
class DtBarco{
    private: 
        string nombre;
        string id;
    public:
        virtual string get_id();
        string get_nombre();
        DtBarco();
        DtBarco(string nombre, string id);
       
};

#endif