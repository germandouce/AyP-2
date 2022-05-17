#ifndef _BUSCADOR_DE_COMIDAS_H
#define _BUSCADOR_DE_COMIDAS_H

#include "Alimento.h"
#include <string>

//Implementar el método comidas_para_celiacos de la clase Buscador_de_comidas:

class Buscador_de_comidas{

public:

    //Constructor
    Buscador_de_comidas();

    // Post: busca en “comidas” aquellas que tienen algún ingrediente de la
    // lista “ingredientes_permitidos” y ninguno de la lista
    //“ingredientes_no_permitidos”
    // y tienen una caloria menor a “caloria_maxima”.
    // Devuelve una lista con los alimentos que cumplen con estas características.
    Lista<Alimento *>* comidas_para_celiacos(Lista<Alimento *>* comidas, 
    Lista<string>* ingredientes_permitidos, Lista<string>*
    ingredientes_no_permitidos,
    unsigned int caloria_maxima);

    // PRE: Se al_menos_un_perimitido debe ser false (se lo tiene q haber preguntado)
    // POST: Busca en la lista de ingerdientes permitidos el ingrediente para ver si esta permitido.
    // Si lo esta, cambia el valor de al_menos_un_permitido a true.
    void tiene_algun_permitido(string ingrediente, Lista<string> *ingredientes_permitidos, 
    bool &al_menos_un_permitido);

    // PRE: ingredientes_ok debe ser true
    // POST: Busca en la lista de ingerdientes no permitidos el ingrediente para ver si esta prohibido.
    // Si lo esta, cambia el valor de ingredientes_ok a false.
    void ninguno_no_permitido(string ingrediente, Lista<string> *ingredientes_no_permitidos, 
    bool &ingredientes_ok);

};

#endif //_BUSCADOR_DE_COMIDAS_H