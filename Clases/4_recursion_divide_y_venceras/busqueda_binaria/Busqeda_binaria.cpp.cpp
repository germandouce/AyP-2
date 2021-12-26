#include<iostream>

using namespace std;

const int MAX_VECTOR = 50;
const int ERROR = -1;

//pre el vector esta ordenado
//post: devuelve la posicion en el vector del numero buscado o -1 si no lo encuentra
int busqueda_binaria(int numeros[MAX_VECTOR], int tope, int numero_buscado);

//pre el vector esta ordenado
//post: devuelve la posicion en el vector del numero buscado o -1 si no lo encuentra
int busqueda_binaria_recursiva(int numeros[MAX_VECTOR], int maximo, int minimo, int numero_buscado);

//pre: el tope debe estar incializado
//post: devuelve el vector cargado con numeros positivos y su tope actualizado
void cargar_vector(int numeros[MAX_VECTOR], int *tope);

//post: imprime el vector por pantalla
void mostrar_vector(int numeros[MAX_VECTOR], int tope);

//post: solicita un numero al usuario y lo devuelve por parametro
void solicitar_valor_buscado(int * numero_ingresado);

//post: imprime por pantalla la posicion en la que se encuentra el numero buscado
void mostrar_posicion(int posicion, int numero_buscado);

int main() {
    int numeros[MAX_VECTOR];
    int posicion, numero_buscado;
    int tope = 0;

    cargar_vector(numeros, &tope);
    solicitar_valor_buscado(&numero_buscado);
 // posicion = busqueda_binaria(numeros, tope, numero_buscado);
    posicion = busqueda_binaria_recursiva(numeros, tope - 1, 0, numero_buscado);
    mostrar_posicion(posicion, numero_buscado);
    mostrar_vector(numeros, tope);

    return 0;
}

int busqueda_binaria(int numeros[MAX_VECTOR], int tope, int numero_buscado){
    int minimo = 0;
    int maximo = tope - 1;
    int posicion_numero_buscado = ERROR;
    int medio;

    while(minimo <= maximo && posicion_numero_buscado == ERROR){

        medio = (minimo + maximo) / 2;

        if(numero_buscado == numeros[medio]){
            posicion_numero_buscado = medio;
        }else if(numero_buscado < numeros[medio]){
            maximo = medio - 1;
        }else{
            minimo = medio + 1;
        }

    }

    return posicion_numero_buscado;
}

/*
*
*minimo <= maximo &&
*
*/

int busqueda_binaria_recursiva(int numeros[MAX_VECTOR], int maximo, int minimo, int numero_buscado){
    int medio;
    int posicion_numero_buscado = ERROR;

    if(minimo <= maximo){
        medio = (minimo + maximo) / 2;

        if(numeros[medio] == numero_buscado){
            posicion_numero_buscado = medio;
        }else if(numeros[medio] > numero_buscado){
            posicion_numero_buscado = busqueda_binaria_recursiva(numeros, medio - 1, minimo, numero_buscado);
        }else{
            posicion_numero_buscado = busqueda_binaria_recursiva(numeros, maximo, medio + 1, numero_buscado);
        }

    }

    return posicion_numero_buscado;
}

void cargar_vector(int numeros[MAX_VECTOR], int *tope){

    for(int i = 0; i < MAX_VECTOR; i++){
        if(i % 3){
            numeros[*tope] = i;
            (*tope)++;
        }
    }

}

void mostrar_vector(int numeros[MAX_VECTOR], int tope){
    cout << endl << "El vector utilizado para la busqueda fue: " << endl << '|';
    for(int i = 0; i < tope; i++){
        cout << numeros[i] << '|' ;
    }
    cout << endl;
}

void solicitar_valor_buscado(int * numero_ingresado){
    cout << "Ingrese el numero que desea buscar:"  << endl;
    cin >> *numero_ingresado;
}

void mostrar_posicion(int posicion, int numero_buscado){

    if (posicion != ERROR){
        cout << "El numero: " << numero_buscado << " se encuentra en la posicion: " << posicion << endl;
    }else{
        cout << "No se pudo encontrar el numero " << numero_buscado << " en el vector." << endl;
    }

}
