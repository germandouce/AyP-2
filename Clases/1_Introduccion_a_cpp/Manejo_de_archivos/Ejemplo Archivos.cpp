#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string PATH_ENTRADA = "numeros.txt";
const string PATH_SALIDA = "salida.txt";

int main(){
    leer_archivo();
    escribir_archivo();
    return 0;
}

void leer_archivo(){
    // NUMERO NUMERO MUERO NUMERO ...
    /*
    123
    1
    NUMERO
    ...
    */

    ifstream archivo_entrada(PATH_ENTRADA);

    string numero;

    while(archivo_entrada >> numero){
        cout << numero << endl;
    }

    archivo_entrada.close();

}

void escribir_archivo(){

    ofstream archivo_salida(PATH_SALIDA);

    for(int i = 0; i < 15; i++){
        archivo_salida << i * 2 << endl;
    }

    archivo_salida.close();
}



//NOMBRE;DNI;LEGAJO

/*string nombre;
string dni;
string legajo;
while(getline(archivo_entrada, nombre, ';')){
    getline(archivo_entrada, dni, ';');
    getline(archivo_entrada, legajo);

    cout << "Nombre: " << nombre << ", Dni: " << dni << endl;
}*/


