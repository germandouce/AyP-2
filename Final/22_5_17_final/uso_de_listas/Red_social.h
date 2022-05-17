#ifndef _RED_SOCIAL_H
#define _RED_SOCIAL_H

#include "Persona.h"


class Red_social{

public:

    //Constructor
    Red_social();

    // Post: busca en “personas” aquellas que tienen por lo menos dos intereses de la lista 
    // “gustos” y una edad menor o igual a edad_maxima y mayor o igual a edad_minima.
    // Devuelve un puntero a una lista con las personas que cumplen con estas características.
    Lista<Persona *>* recomendar_personas (Lista<Persona *>*
    personas, Lista<string>* gustos, int edad_maxima, int edad_minima);

    // PRE: Recibe un string con la carrera y una lista de vocaciones
    // POST: Devueleve true si carrera esta en la lista vocaciones false en caso contrario
    bool interes_esta_en_gustos(string carrera, Lista<string>* vocaciones);

};

#endif //_RED_SOCIAL_H