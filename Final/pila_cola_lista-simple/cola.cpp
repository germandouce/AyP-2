#include <iostream>

#include "cola.h"

Cola::Cola() {
    //Inicializa los 2 punteros en nulo 
    //(cuando la creo esta vacia)
    primero = 0;
    ultimo = 0;
}


bool Cola::vacia() {
    //podria ser ultimo == 0 tambien
    return (primero == 0);
}


Dato Cola::consulta() {
    //Devuelve el dato que esta en el primer nodo,
    //es decir el primero q agregue.
    //(primero apuntaba al primer nodo)
    //Recordar que al ser cola, es FIFO entonces se mantiene igual
    return primero->obtener_dato();
}


void Cola::alta(Dato d) {
    //Creo un nuevo nodo
    Nodo* nuevo = new Nodo(d);
    std::cout << "Pedi memoria en la dir: " << nuevo << std::endl;

    if (! vacia())
    //Si llega a estar vacia tanto primero como ultimo apuntan
    //a null entonces el siguiente es null

        //Voy al nodo apuntado por el ultimo y lo cambio 
        //por el nuevo. es al reves que la pila, ahora el anteultimo 
        //que estaba en la pila apunta al nuevo que estoy agregando
        ultimo->cambiar_siguiente(nuevo);

    else
        //Si llega a estar vacia inicialmente la cola, el ptro primero
        //tiene q apuntar a nuevo xq antes apuntaba a nulo.
        primero = nuevo;
    
    //Finalmente el puntero ultimo apunta el nuevo nodo q agregue
    ultimo = nuevo;

    //1)Creo un nuevo nodo,
    //2) Si esta vacia ahago apuntar primero al nuevo nodo,
    //Si no esta vacia, voy al nodo apuntado por el ultimo y lo hago 
    //apuntar al nuevo.  (al reves que antes!)
    //3)Apunto el ptro ultimo al nuevo que reien agregue

}


Dato Cola::baja() {
    //Arranco por el primer nodo porque es una cola. 
    //Gurado su direc de memoria.
    Nodo* aux = primero;
    
    //Ahor primero pasa a ser el siguiente del auxiliar (
    // xq estoy boleteando el 1ero)
    primero = aux->obtener_siguiente();
    //Si es el unico nodo y hago apuntar al siguiente no 
    //pasa nada xq apunto aux a null 
    //pero como estoy bajando el ultimo elemento y quedandome 
    //sin nada, necesito decir que la pila esta vacia,
    //(si no me quedaria ultimo apuntando a un nodo que voy a liberar)
    if (! primero)
        ultimo = 0;

    //Devuelvo el dato del nodo que acabo de eliminar
    Dato d = aux->obtener_dato();
    
    //Libero la mem del que estoy bajando
    std::cout << "Libero memoria de la dir: " << aux << std::endl;
    delete aux;


    return d;

    //1)Guardo la direc del q voy a eliminar
    //2)Hago apuntar a primero al nodo que estaba apuntando el
    //que estoy eliminando(el q antes era segundo)
    //3)Si llega a a ser el unico, ademas, hago apuntar el ptr ultimo a 0
    //xa generar pila vacia, sino no hgao nada
    //4)Libero la memoria del aux que estoy bajando
}

Cola::~Cola() {
    //Igual al de la pila. mientras no este vacia anda dandome de baja
    //Ahora estoy liberando en el msimo orden que fui pidiendo.
    while (! vacia())
        baja();
}
