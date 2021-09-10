#include <iostream>
#include <string>
#include "menu.h"
#include "frutas.h"

const int MAX_FRUTAS = 100;

using namespace std;

struct frutas{
    string fruta;
    string numero;
};
    
int main() {
    procesar_archivo();
    int opcion_elegida;
    do{
        cout << "Bienvenido a la fruteria! ¿que desea hacer?" << endl;
        mostrar_menu();
        cin >> opcion_elegida;
        while(!es_opcion_valida(opcion_elegida)){
            cout << "Ese numero de opcion no es valido, intentemos otra vez:";
            mostrar_menu();
            cin >> opcion_elegida;
        }
        procesar_opcion(opcion_elegida);
    }while(opcion_elegida != SALIR);

    return 0;
}

//pre: -
//post: procesa el archivo y carga el vector de frutas.
void procesar_archivo(){
    ifstream archivo_frutas("frutas.txt");

    frutas vec_frutas[MAX_FRUTAS];
    
    int tope = 0;
    while(archivo_frutas >> vec_frutas[tope].fruta){
        archivo_frutas >> vec_frutas[tope].numero;
        tope++;
    }

    archivo_frutas.close();
}
