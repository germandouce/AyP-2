#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

#include "nodo.h"


class Pila {
    // Atributos
    //Solo necesito un puntero al primer nodo. Como se agregan
    //arriba de todo el llamo top xq en realidad el ultimo es el 
    //ultimo.
    //La interfaz no cambio casi nada.
private:
    Nodo* tope; //ultimo    

    // Metodos
public:
    //Constructor
    //PRE: -
    //POS: tope = 0
    Pila();

    //PRE: la pila no este llena (llena = false)
    //POS: agrega d arriba de la pila e incrementa tope en 1
    void alta(Dato d);

    //PRE: la pila no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba
    Dato consulta();

    //PRE: la pila no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba y decrementa tope
    Dato baja();

    //Ahora la pila ya no se llena xq es dinamica

    //PRE: -
    //POS: devuelve true si la pila esta vacia, false si no
    bool vacia();

    //Destructor
    ~Pila();
};

#endif // PILA_H_INCLUDED
