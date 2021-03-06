#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string NOMBRE_ARCHIVO = "log.txt";

void escribirEnArchivo(ofstream* archivo, string frase);

int main(){
    ofstream archivoDeEscritura(NOMBRE_ARCHIVO,ios::app); 
    
    // ios::app si no ya esta el archivo no lo borra
    //(en la practica hace un append al final)

    if(!archivoDeEscritura.fail()){
        escribirEnArchivo(&archivoDeEscritura, "Se realiza el ejercicio");
        archivoDeEscritura.close();
    } else {
        cout << "El archivo no se creo correctamente" << endl;
    }
    
    archivoDeEscritura.close();

    return 0;
}

void escribirEnArchivo(ofstream* archivo, string frase){
    string anio = "2020", mes = "Abril";
    int dia = 16;
    *archivo << anio << " " << mes << " " << dia << " " << frase << endl;
}
