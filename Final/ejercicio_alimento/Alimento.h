#ifndef _ALIMENTO_H_
#define _ALIMENTO_H_

#include <string>
#include "lista_template.h"

//1) Considerar como implementada la clase Alimento a partir de la siguiente interfaz:

using namespace std;

class Alimento {

private:
    string nombre;
    int calorias;
    Lista<string>* ingredientes;
public:
    // Crea un alimento con su nombre, la cantidad de calorías y una lista
    // de los ingredientes que lo conforman
    Alimento(string nombre, unsigned int calorias, Lista<string>* ingredientes);

    string obtener_nombre(); // devuelve el nombre del alimento

    unsigned int obtener_calorias (); // devuelve la cantidad de calorías

    Lista<string>* obtener_ingredientes (); // devuelve un ptr la lista de ingredientes

};

#endif //_ALIMENTO_H_