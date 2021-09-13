#include <iostream>
#include <fstream>
#include <string>

using namespace std;

const string NOMBRE_ARCHIVO = "log.txt"; //Tener creado un log.txt previamente

int main(){
    fstream archivo(NOMBRE_ARCHIVO, ios::in|ios::out);
    string dato;
    string nuevaInformacion = "2021";

    if(!archivo.fail()){
        archivo >> dato;
        cout << dato << endl; //Leo el primer dato y lo imprimo. Estoy parado en el byte 4

        //archivo.seekg(desplazamiento, origen) para mover el apuntador de escritura
        //archivo.seekp(desplazamiento, origen) para mover el apuntador de lectura

        //ios::beg -> origen
        //ios::cur -> pos_actual
        //ios::end -> final


        archivo.seekg(0, ios::beg); //Muevo el puntero de escritura al inicio del archivo

        archivo << nuevaInformacion; //Escribo Hola en los primeros 4 caracteres

        archivo.seekg(5, ios::beg);
        archivo << "1234567";    
        //observar que me como otras palabras xq NO DESPLAZA, SOBREESCRIBE

        archivo >> dato;
        cout << dato; //Leo el primer dato y lo imprimo 
        //como lei en linea 16 algo, el puntero quedo al ppio de la segunda palabra

        archivo.close();
    } else {
        cout << "El archivo no se abrio correctamente" << endl;
    }

    return 0;
}

//NOTA: CADA ARCHIVO DEBE TENER SU PROPIO CIERRE.


//COMENTARIO XA ARCHIVOS BINARIOS
//Los archivos binarios son aquellos cuya información son unicamente 1s y 0s, donde 
//la única forma de poder interactuar con ellos es a través de funciones y tamaño de 
//variables.
//Lectura
//ifstream archivo(“nombreDelArchivo.bin”, ios::binary);
// archivo.read(valorLeido, sizeof(valorLeido));
//Entonces, por ejemplo, si valorLeido fuese del tipo char, se leería un byte del archivo y se almacenaría en la variable valorLeido.
//Escritura
//fstream archivo(“nombreDelArchivo.bin”, ios::in | ios::out | ios::binary);
//archivo.write(informacion, sizeof(informacion)); //siezeof devuelve valor en bytes de su parametro


