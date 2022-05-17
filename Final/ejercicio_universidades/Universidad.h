#ifndef _ALIMENTO_H_
#define _ALIMENTO_H_

#include <string>
#include "lista_template.h"

using namespace std;

//1) Considerar como implementada la clase Alimento a partir de la siguiente interfaz:

using namespace std;

class Universidad {

private:
    string nombre;
    int ranking;
    Lista<string>* carreras;

public:
    // Crea una universidad con su nombre, el ranking y una lista de carreras
    Universidad(string nombre, int ranking, Lista<string>* carreras);
    
    string obtener_nombre(); // devuelve el nombre del alimento

    unsigned int obtener_ranking (); // devuelve la cantidad de calorías

    Lista<string>* obtener_carreras (); // devuelve un ptr la lista de ingredientes

};

#endif //_ALIMENTO_H_