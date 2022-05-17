#ifndef COLA_H_INCLUDED
#define COLA_H_INCLUDED

#include "nodo.h"


class Cola {
    // Atributos
private:
    //Punteros al primero y al ultimo
    Nodo* primero;
    Nodo* ultimo;

    // Metodos
public:
    //Constructor
    //PRE: -
    //POS: tope = 0
    Cola();

    //PRE: la cola no este llena (llena = false)
    //POS: agrega d arriba de la cola e incrementa tope en 1
    void alta(Dato d);

    //PRE: la cola no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba
    Dato consulta();

    //PRE: la cola no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba y decrementa tope
    Dato baja();


    //PRE: -
    //POS: devuelve true si la cola esta vacia, false si no
    bool vacia();

    //Destructor
    ~Cola();
};


#endif // COLA_H_INCLUDED
