#ifndef _NODO_TEMPLATE_H_
#define _NODO_TEMPLATE_H_

#include <iostream>
using namespace std;

template <typename Dato>

class Nodo {

private:
    // ATRIBUTOS
    Dato dato;
    Nodo<Dato>* siguiente;
    Nodo<Dato>* anterior;

public:
    // METODOS

    // CONSTRUCTOR DE NODO
    Nodo(Dato d);

    // PRE: -
    // POST: cambia el nodo siguiente por ns
    void cambiar_siguiente(Nodo* ns);

    // PRE: -
    // POST: cambia el nodo anterior por na
    void cambiar_anterior(Nodo* na);

    // PRE: -
    // POST: devuelve el nodo anterior
    Nodo* obtener_anterior();

    // PRE: -
    // POST: devuelve el nodo siguiente
    Nodo* obtener_siguiente();

    // PRE: -
    // POST: devuelve el dato que hay en el nodo
    Dato obtener_dato();

    // PRE: Recibe un dato d
    // POST: Cambia el dato del nodo por el enviado por parametro
    void cambiar_dato(Dato d);

    // PRE: Recibe un dato d
    // POS: devuelve:
    //-1 si el que llama menor que el dato que va por parametro
    // 1 si el que llama es mayor que el dato que va por parametro
    // 0 si son iguales
    int comparar_con(Dato d);

    // DESTRUCTOR
    ~Nodo();

};

template <typename Dato>
Nodo<Dato>::Nodo(Dato d) {
    dato = d;
    siguiente = 0;
    anterior = 0;
}

template <typename Dato>
void Nodo<Dato>::cambiar_siguiente(Nodo* ns) {
    siguiente = ns;
}

template <typename Dato>
void Nodo<Dato>::cambiar_anterior(Nodo* na) {
    anterior = na;
}

template <typename Dato>
Nodo<Dato>* Nodo<Dato>::obtener_anterior() {
    return anterior;
}

template <typename Dato>
Nodo<Dato>* Nodo<Dato>::obtener_siguiente() {
    return siguiente;
}

template <typename Dato>
Dato Nodo<Dato>::obtener_dato() {
    return dato;
}

template <typename Dato>
void Nodo<Dato>::cambiar_dato(Dato d) {
    dato = d;
}

template <typename Dato>
int Nodo<Dato>::comparar_con(Dato d) {
    
    int resulatado;

    if( obtener_dato() < d ){
        resulatado = -1;
    }
    else if(obtener_dato() > d ){
        resulatado = 1;
    }
    else{
        resulatado = 0;
    }

    return resulatado;
}

template <typename Dato>
Nodo<Dato>::~Nodo() {
    
}

#endif //_NODO_TEMPLATE_H_