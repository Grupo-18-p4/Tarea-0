#include "include/DtBarcoPesquero.h" //ESTO DESPUES HAY QUE SACARLO
#include <stdlib.h>

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
        break;

    case 2: //Agregar barco
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
