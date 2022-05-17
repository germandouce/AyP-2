#ifndef _BUSCADOR_DE_COMIDAS_H
#define _BUSCADOR_DE_COMIDAS_H

#include "Universidad.h"

//Implementar el método comidas_para_celiacos de la clase Buscador_de_comidas:

class Buscador_de_universidades{

public:

    //Constructor
    Buscador_de_universidades();

    // Post: busca en “universidades” aquellas que tienen alguna carrera de la
    // lista “vocaciones” y un ranking mayor o igual a ranking_minimo.
    // Devuelve una lista con las universidades que cumplen con estas características
    Lista<Universidad *>* recomendar_universidades (Lista<Universidad *>*
    universidades, Lista<string>* vocaciones, int ranking_minimo);

    // PRE:
    // POST: Devueleve true si carrera esta en la lista vocaciones false en caso contrario
    bool carrera_esta_en_vocaciones(string carrera, Lista<string>* vocaciones);

};

#endif //_BUSCADOR_DE_COMIDAS_H