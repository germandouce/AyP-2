#ifndef _BUSCADOR_DE_RESTAURANTES_H
#define _BUSCADOR_DE_RESTAURANTES_H

#include <iostream>
#include "Restaurante.h"

//Implementar el método recomendar_restaurantes de la clase Buscador_restaurantes:

class Buscador_restaurantes {
    
    public:

    //CONSTRUCTOR
    Buscador_restaurantes();

    // Post: busca en “restaurantes” aquellos que tienen por lo menos dos platos de la
    // lista “platos_deseados” y un precio promedio menor o igual a precio_maximo.
    // Devuelve una lista con los restaurantes que cumplen con estas características.
    Lista<Restaurante *>* recomendar_restaurantes (Lista<Restaurante *>*
    restaurantes, Lista<string>* platos_deseados, int precio_maximo);

    bool plato_esta_en_platos_deseados(string plato, Lista<string>* platos_deseados);

};

#endif //_BUSCADOR_DE_RESTAURANTES_H