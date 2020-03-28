#include "include/Logica.h" 
#include <iostream>

/////////////////////////Variables////////////////////////////////
string id, nombre;
int dia, mes, anio;

//////////////////////////////////////////////////////////////////

int main(){
    int opcion = 21;
    int opc = 0;
    while(opcion != 0){
        cout << "1) Agregar puerto" << '\n';
        cout << "2) Agregar barco" << '\n';
        cout << "3) Listar puertos" << '\n';
        cout << "4) Agregar arribo" << '\n';
        cout << "5) Obtener arribos en puerto" << '\n';
        cout << "6) Eliminar arribos" << '\n';
        cout << "7) Listar barcos" << '\n';
        cout << "0) Salir" << '\n';
        cout << ">> ";
        cin >> opcion;
        switch (opcion){
                
    case 1: //Agregar puert
    /*
                cout << "Ingrese el id del puerto";
                    cin >> id;
                
                cout << "Ingrese el nombre del puerto";
                    cin >> nombre;
                //controlNombrePuerto(nombre);
                cout << "Ingrese fecha de creación del puerto. Formato: (DD MM AA)";
                cin >> dia >> mes >> anio;
                DtFecha *FechaPuerto = new DtFecha(dia,mes,anio);
                agregarPuerto(id,nombre,FechaPuerto);
        break;
    */
    case 2: //Agregar barco
                
                cout << "Ingrese el id del barco: ";
                cin >> id;
                cout << "Ingrese el nombre del barco: ";
                cin >> nombre;
                cout << "De que tipo es el barco a ingresar?" << '\n';
                cout << "1)Pesquero" << '\n';
                cout << "2)Pasajeros" << '\n';
                cout << ">> ";
                cin >> opc;
                if(opc == 1){
                    int capacidad, carga;
                    cout << "Capacidad: ";
                    cin >> capacidad;
                    cout << "Carga: ";
                    cin >> carga;
                    DtBarco* barcoPes = new DtBarcoPesquero(nombre,id,capacidad,carga); 
                    agregarBarco(*barcoPes);
                }
                else if(opc == 2){
                    TipoTamanio tam;
                    int cantPasajeros;
                    cout << "Que tipo de tamaño: \n1)Bote\n2)Crucero\n3)Galeon\n4)Transatlantico\n";
                    cout << ">> ";
                    cin >> opc;
                    if(opc==1)
                        tam = bote;
                    else if(opc==2)
                        tam = crucero;
                    else if(opc==3)
                        tam=galeon;
                    else if(opc==4)
                        tam=transatlantico;
                    else{
                        cout << "Ingrese opcion correcta";
                        break;
                    }
                    cout << "Carga: ";
                    cin >> cantPasajeros;
                    DtBarco* barco = new DtBarcoPasajeros(nombre,id,cantPasajeros,tam);
                    agregarBarco(*barco);
                }
                else{
                    cout << "SOBAME LOS HUEVOS";
                }
        break;
                
    case 3: //Listar puertos
     break;
                
    case 4: //Agregar arribo
     break;
                
    case 5: //Obtener arribos en puerto
     break;
            
    case 6: //Eliminar arribos
     break;
                
    case 7: //Listar barcos
     break;  
                
    case 0: //Salir
      cout << "Saliendo...";
     break; 
                
    default:
        cout << "Opción no válida, volviendo...";
     break;
        }//switch
    } //While
} // Main
