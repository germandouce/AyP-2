#ifndef _LISTA_TEMPLATE_H_
#define _LISTA_TEMPLATE_H_

#include "nodo_template_es.h"
#include <iostream>

template <typename Dato>

class Lista {

private:
    // ATRBUTOS

    // NODOS LISTA COMUN
    Nodo<Dato>* primero;
    Nodo<Dato>* ultimo;
    Nodo<Dato>* actual;
    Nodo<Dato>* anterior;

    int longitud;

public:
    // CONSTRUCTOR
    // PRE: -
    // POST: crea una lista vacia
    Lista();

    // PRE: -
    // POST: inserta un nuevo elemento al final de la lista
    void insertar(Dato d);

    // PRE: -
    // POST: elimina el elemento de la posicion pos de la lista
    void eliminar(int pos);

    // PRE: -
    // POST: devuelve true si la lista está vacia
    bool esta_vacia();

    // PRE: -
    // POST: devuelve el dato que se encuentra en la posicion pos
    Dato devolver_dato(int pos);

    // PRE: -
    // POST: devuelve la longitud de la lista, es decir, la cantidad de 
    //elementos de la lista
    int devolver_longitud();

    // PRE: -
    // POST: devuelve el nodo actual
    Nodo<Dato>* devolver_nodo_actual();

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    bool hay_siguiente();

    // devuelve el siguiente elemento (el elemento que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el elemento actual y avanza
    Nodo<Dato>* devolver_siguiente();

    // consulta si hay un elemento anterior (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si anterior no apunta a NULL, false de lo contrario
    bool hay_anterior();

    // PRE: -
    // POST: devuelve el nodo anterior
    Nodo<Dato>* devolver_anterior();

    // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
    // PRE:
    // POS: pone el puntero a la primera posición o apuntando a NULL
    void reiniciar();

    // PRE: -
    // POST: avanza
    void avanzar();

    // DESTRUCTOR
    ~Lista();

private:
    //devuelve un puntero al Nodo en cierta posicion
    //PRE: 0 < pos <= longitud
    //POS: devuelve un puntero al Nodo que esta en la posicion pos (la 1 es la primera)
    Nodo<Dato>* devolver_nodo(int pos);
};


template <typename Dato>
Lista<Dato>::Lista() {
    primero = nullptr;
    actual = nullptr;
    longitud = 0;
    ultimo = nullptr;
    anterior = nullptr;
}

template <typename Dato>
void Lista<Dato>::insertar(Dato d){

    Nodo<Dato>* nuevo_nodo = new Nodo<Dato>(d);
    
    if(primero == nullptr){
        nuevo_nodo -> cambiar_siguiente(primero);
        primero = nuevo_nodo;
        actual = primero;
        ultimo = actual;
    }
    else{
        Nodo<Dato>* anterior = ultimo;
        nuevo_nodo -> cambiar_siguiente(anterior->devolver_siguiente());
        anterior->cambiar_siguiente(nuevo_nodo);
        nuevo_nodo->cambiar_anterior(ultimo);
        ultimo = nuevo_nodo;
    }
    longitud++;
}

template <typename Dato>
void Lista<Dato>::eliminar(int pos) {

    Nodo<Dato>* eliminado = primero;

    if (pos == 1)
        primero = eliminado->devolver_siguiente();
    else {
        Nodo<Dato>* anterior = devolver_nodo(pos - 1);
        eliminado = anterior -> devolver_siguiente();
        anterior -> cambiar_siguiente(eliminado -> devolver_siguiente());
    }
    longitud--;

    delete eliminado;
}

template <typename Dato>
bool Lista<Dato>::esta_vacia() {

    return (longitud == 0);
}

template <typename Dato>
Dato Lista<Dato>::devolver_dato(int pos) {

    Nodo<Dato>* aux = devolver_nodo(pos);
    return aux -> devolver_dato();
}

template <typename Dato>
int Lista<Dato>::devolver_longitud() {

    return (longitud);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::devolver_nodo_actual() {

    return actual;
}

template <typename Dato>
bool Lista<Dato>::hay_siguiente() {

    return (actual != nullptr);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::devolver_siguiente() {

    anterior = actual;
    Nodo<Dato>* aux = actual;
    actual = actual->devolver_siguiente();
    
    return aux;
}

template <typename Dato>
bool Lista<Dato>::hay_anterior() {

    return (anterior != nullptr);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::devolver_anterior(){

    return anterior -> devolver_anterior();

}

template <typename Dato>
void Lista<Dato>::reiniciar(){

    actual = primero;
    anterior = nullptr;
}


template <typename Dato>
void Lista<Dato>::avanzar() {

    anterior = actual;
    actual = actual -> devolver_siguiente();

}

template <typename Dato>
Lista<Dato>::~Lista() {

    while ( !esta_vacia() ) {
        eliminar(1);
    }
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::devolver_nodo(int pos) {

    Nodo<Dato>* aux = primero;
    for(int i = 1; i < pos; i++)
        aux = aux -> devolver_siguiente();
    return aux;
}

#endif //_LISTA_TEMPLATE_H_