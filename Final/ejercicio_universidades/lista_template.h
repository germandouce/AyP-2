#ifndef _LISTA_TEMPLATE_H_
#define _LISTA_TEMPLATE_H_

#include "nodo_template.h"
#include <iostream>

using namespace std;

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

    // PRE: Recibe un dato d
    // POST: inserta un nuevo elemento al final de la lista
    void alta(Dato d);
    
    // insertar un dato en cierta posicion
    // PRE: d dato valido y 0 < pos <= longitud + 1
    // POS: inserta el Dato d en la posicion pos (la 1 es la primera),
    //      inrementa en 1 la longitud
    void insertar(Dato d, int pos);

    // PRE: 0 < pos <long
    // POST: elimina el elemento de la posicion pos de la lista
    void eliminar(int pos);

    // PRE: -
    // POST: devuelve true si la lista está vacia
    bool esta_vacia();

    // devuelve el dato en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: devuelve el dato que esta en la posicion pos (la 1 es la primera)
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

    // devuelve el siguiente elemento (el dato que esta en actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el dato que hay en actual y avanza.
    Dato siguiente();

    // devuelve el siguiente nodo (el nodo que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el nodo actual y avanza
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
      
    // cambia el dato que esta en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: cambia el dato que esta en la posicion pos (la 1 es la primera)
    void cambiar_dato(Dato d, int pos);

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
void Lista<Dato>::alta(Dato d){

    Nodo<Dato>* nuevo_nodo = new Nodo<Dato>(d);
    
    // Si la lista esta vacia    
    if(primero == nullptr){

        nuevo_nodo -> cambiar_siguiente(primero);
        primero = nuevo_nodo;
        actual = primero;
        ultimo = actual;
    }

    //Si la lista no esta vacia
    else{
        //PARA LISTA (DE)
        Nodo<Dato>* anterior = ultimo;

        //coloco sig al anteultimo
        anterior->cambiar_siguiente(nuevo_nodo);
        
        //coloco anterior al nuevo (DE)
        nuevo_nodo->cambiar_anterior(ultimo);   
        ultimo = nuevo_nodo;
    }
    longitud++;


}

template <typename Dato>
void Lista<Dato>::insertar(Dato d, int pos){   

    Nodo<Dato> * nuevo = new Nodo<Dato>(d);
    Nodo<Dato> * siguiente = primero;

    // si lo quiero insertar en la primera posicion

    if ( pos == 1){
        primero = nuevo;
        actual = primero;

        // (DE)
        if ( !esta_vacia()){  //Si hay al menos un elemento, tengo que cambiarle el anterior
            siguiente -> cambiar_anterior(nuevo);
        }
        else{
            ultimo = nuevo;
        }
    }
    // si lo quiero insertar en cualquier otro lado
    else {
        Nodo<Dato> * anterior = devolver_nodo(pos - 1); //encuentro el anterior
        siguiente = anterior -> devolver_siguiente(); //encuentro el siguiente
        anterior->cambiar_siguiente(nuevo); //le cambio el sig al anterior
        
        //coloco anterior al nuevo (DE)
        nuevo->cambiar_anterior(anterior); 
        
        //Si no lo agrego al final (Para dar de alta en longitud + 1, como si fuera insertar)
        //le pongo anterior al siguiente (DE)
        if ( pos != longitud +1){    
            siguiente -> cambiar_anterior(nuevo); //le cambio el anterior al siguiente 
        }
        else{
            //Si fue a la ultima posicion (DE)
            ultimo = nuevo;
        }

    }
    nuevo -> cambiar_siguiente(siguiente); // le coloco el sig al actual
    longitud++;

}

template <typename Dato>
void Lista<Dato>::eliminar(int pos) {

    Nodo<Dato>* eliminado = primero;

    if (pos == 1){
        primero = eliminado->devolver_siguiente();
        if(primero != nullptr){ // si no hay un unico numero
            primero ->cambiar_anterior(nullptr);
        }
    }
    else if (pos == longitud){
        eliminado = ultimo;
        ultimo = ultimo -> devolver_anterior();
        ultimo->cambiar_siguiente(nullptr);
    }
    else {
        Nodo<Dato>* anterior = devolver_nodo(pos - 1);
        eliminado = anterior -> devolver_siguiente();
                
        //le pongo siguiente al anterior del borrado (si no es el primero, no es pos ==1)
        anterior -> cambiar_siguiente(eliminado -> devolver_siguiente() ); 
        
        //le pongo anterior al siguiente del borrado SI NO ES ULTIMO
        eliminado -> devolver_siguiente() -> cambiar_anterior(anterior);
    }
    longitud--;

    //cout<<"sig ult: "<<ultimo -> devolver_siguiente()->devolver_dato()<<endl;
    delete eliminado;
    eliminado = nullptr;

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
Dato Lista<Dato>::siguiente() { 
    
    Nodo<Dato>* nodo_siguiente = devolver_siguiente();
    Dato elemento = nodo_siguiente ->devolver_dato();
    
    return elemento;
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


template<typename Dato>
void Lista<Dato>::cambiar_dato(Dato d, int pos){
    
    devolver_nodo(pos) -> cambiar_dato(d);

}

#endif //_LISTA_TEMPLATE_H_