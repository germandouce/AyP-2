#include <iostream>
#include <string>

using namespace std;

//PUNTEROS DOBLES
//CREACION DE UNA MATRIZ DINAMICA

//La matriz entera es un vector de vectores
//dinamicos.
//En cada posicion del vector tenemos un 
//puntero simple, en cambio, en la primera 
//posicion de la estructura necesitamos un p
//puntero de punteros representado como pp.

int main(){
    //Primero se crea el vector de punteros que
    //tendra la longitud de las filas de la matriz.
    //Esta direccion se guarda en doble puntero 'matriz'.
    //Luego se accede a cada una de las posiciones del vector
    //y se crea el vector de enteros que representara cada 
    //una de las filas.

    int ** matriz; //creo el doble puntero
    matriz = new int*[4]; //Se crea el vector de vectores
    //con longitud de las filas (4 en este caso)
    
    for (int i = 0; i < 4; i++){    // xa cada una de las filas
        matriz[i] = new int[5];// se crea el vector fila
        matriz[i][i] = 53;
        //con la longitud de las columnas
    };

    //Para la la liberacion del heap se hace el proceso inverso
    for(int i = 0; i <4; i++){  //xa cada una de las filas
        delete[] matriz[i]; //se elimina la fila
    delete [] matriz;   //se elimina el vector de vectores
    };

    //observar q no se mantienen los 3 en la diagonal xq libere
    // el heap. En realidad deberia tirar error
    // for(int i = 0; i < 4; i++){
    //     for(int j = 0; j <5; j++){
    //         cout<< matriz[i][j] <<" ";
    //     }
    //     cout <<endl;
    // };

}
