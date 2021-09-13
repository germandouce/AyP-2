#include <iostream>
#include <fstream>
#include "menu.h"
#include "frutas.h"

using namespace std;
const string PATH_ARCHIVO = "frutas.txt";

//pre: -
//post: procesa el archivo y carga el vector de frutas.
void procesar_archivo(Fruta frutas[MAX_FRUTAS], int &tope);

int main() {
    Fruta frutas[MAX_FRUTAS];   //creo un vector de frutas. Cada fruta tiene un nombre y una cant
    int tope;
    procesar_archivo(frutas, tope);
    if(tope != ERROR){  //si se encontro el archivo ( ver tope = error en procesar_archivo)
        int opcion_elegida;
        do{
            cout << "Bienvenido a la fruteria!" << endl;
            mostrar_frutas(frutas, tope);
            cout << "Escriba una opcion" << endl;
            mostrar_menu();
            cin >> opcion_elegida;
            while(!es_opcion_valida(opcion_elegida)){
                cout << "Ese numero de opcion no es valido, intentemos otra vez:"<< endl;
                mostrar_menu();
                cin >> opcion_elegida;
            }
            procesar_opcion(opcion_elegida, frutas, tope);
        }while(opcion_elegida != SALIR);

    }

    return 0;
}


void procesar_archivo(Fruta frutas[MAX_FRUTAS], int &tope) {
    Fruta fruta;    //creo una fruta xa ir guardando los datos del archivo
    string cantidad;
    int contador = 0;

    ifstream archivo(PATH_ARCHIVO); //abro el archivo

    if (!archivo.is_open()){
        cout << "No se enontro el archivo" << endl;
        tope = ERROR;
    }else{
        while(archivo >> fruta.nombre){ //primera plbr es el nombre (la guardo en la fruta)
            archivo >> cantidad;    //la 2da es una cant
            fruta.cantidad = stoi(cantidad);    //casteo a entero la cant q viene como str en el txt
            frutas[contador] = fruta;   //en el vector frutas q cree en el menu, voy almacenando las frutas
            contador++;                 //recordar q cada fruta tiene nombre y cantidad 
        }
        tope = contador;
    }

    archivo.close();
}


