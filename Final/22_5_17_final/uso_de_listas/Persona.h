#ifndef _PERSONA_H_
#define _PERSONA_H_

#include <string>
#include "lista_template.h"

using namespace std;

// Considerar como implementada la clase Persona a partir de la siguiente interfaz:
// class Persona {
// public:
// /* Crea una Persona con su nombre, edad y una lista de intereses */
// Persona (string nombre, int edad, Lista<string>* intereses);
// /* devuelve el nombre de la Persona */
// string obtener_nombre(); 
// /* devuelve la edad */
// int obtener_edad (); 
// /* devuelve un ptr a lista de intereses */
// Lista<string>* obtener_intereses (); 
// };


//1) Considerar como implementada la clase Alimento a partir de la siguiente interfaz:

using namespace std;

class Persona {

private:
    string nombre;
    int edad;
    Lista<string>* intereses;

public:
    //Crea una Persona con su nombre, edad y una lista de intereses
    Persona(string nombre, int edad, Lista<string>* intereses);
    
    // devuelve el nombre de la persona
    string obtener_nombre();

    // devuelve la edad de la persona
    int obtener_edad();
    
    //intereses devuelve un ptr la lista de intereses
    Lista<string>* obtener_intereses(); 

};

#endif //_PERSONA_H_