#include "include/DtBarcoPesquero.h" //ESTO DESPUES HAY QUE SACARLO
#include <stdlib.h>
/////////////////////////Variables////////////////////////////////
string id, nombre;
int dia, mes, anio;

//////////////////////////////////////////////////////////////////

int main(){
    int opcion = 21;
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
                
    case 1: //Agregar puerto
                cout << "Ingrese el id del puerto";
                    cin >> id;
                //if (ya existe el id){ std::invalid_argument}
                cout << "Ingrese el nombre del puerto";
                    cin >> nombre;
                cout << "Ingrese fecha de creación del puerto. Formato: (DD MM AA)";
                cin >> dia >> mes >> anio;
                DtFecha *FechaPuerto = new DtFecha(dia,mes,anio);
                agregarPuerto(id,nombre,FechaPuerto);
        break;

    case 2: //Agregar barco
                 cout << "Ingrese el id del barco";
                    cin >> id;
                //if (ya existe el id){ std::invalid_argument}
                cout << "Ingrese el nombre del barco";
                    cin >> nombre;
                agregarBarco(id,nombre);
                
                /*
                Dejar esto para poner dentro de agregarBarco en la capa lógica
                cout << "De que tipo es el barco a ingresar?";
                cout << "1)Pesquero";
                cout << "2)Pasajeros";
*/
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
                Exit;
     break; 
                
    default:
        cout << "Opción no válida, volviendo...";
     break;
        }//switch
    } //While
} // Main
