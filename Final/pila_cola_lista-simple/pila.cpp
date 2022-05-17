#include <iostream>
#include "pila.h"

//Constructor
Pila::Pila() {
    tope = 0;
}


bool Pila::vacia() {
    //sigue igual
    return (tope == 0);
}


Dato Pila::consulta() {
    //Devuelve el dato que esta en el nodo que esta en el top,
    //es decir arriba de toda la pila
    //xa acceder a los datos de un nodo y modoficarlos a traves de la interfaz
    return tope->obtener_dato();
}


void Pila::alta(Dato d) {
    //primero Neceisto crear un nodo nuevo y cambiarle la direccion al q apunto
    //Ademas de crearme el nodo me devuelve la direccion! entonces ya tengo la direc
    //del siguiente.
    Nodo* nuevo = new Nodo(d);
    std::cout << "Pedi memoria en la dir: " << nuevo << std::endl;
    //Como cuando creo el nodo esta apuntando a nulo quiero q ahora
    // => Hago apuntar al nuevo a al mismo lugar donde esta apuntando tope, que apuntaba al ultimo elemento.
    //la armo al reves, hago apuntar al ultimo el nuevo nodo que acabo de crear. Al mandar tope como parametro
    //estoy haciendo que el nuevo apunte al ultimo ya que esta memoria estaba guardada en tope.
    //Esto ultimo lo hago con:
    nuevo->cambiar_siguiente(tope);

    //Ahora que ya guarde en nuevo la direccion del ultimo xa no perderla al hacer
    //apuntar el nuevo nodo al viejo, hago apuntar al tope al nuevo nodo.
    tope = nuevo;   

    //LO VOY ARMANDO AL REVES, EL ULTIMO QUE LLEGA LO PONGO AL PRINCIPIO DE TODO, LO PONGO "FIRST",
    //POR ESO ES LIFO.

    //1) Tope guarda direc del ultimo,
    //2) Hago apuntar el nuevo nodo al ultimo (a tope) (La armo al reves!)
    //3) Hago apuntar tope al nuevo q agregue recien
}


Dato Pila::baja() {
    //guardo la direc del ultimo para no perderlo y poder liberar su memoria
    Nodo* aux = tope;
    
    //El tope ahora es el siguiente del q quiero eliminar. 
    //OJO La arme al reves entonces el siguiente en realidad es el anteultimo
    //top apunta a la direccion de memoria del anteultimo
    tope = aux->obtener_siguiente();
    
    //y dato pasa a tener el dato del anteultimo
    Dato d = aux->obtener_dato();
    
    std::cout << "Libero memoria de la dir: " << aux << std::endl;
    delete aux;
    
    //Devuelvo el dato del anteultimo porque asi lo defini

    return d;

    //1)Guardo la direc del ultimo en aux xa no perderla y poderla liberar despues
    //2)Hago apuntar a tope a la direc del siguiente al ultimo, es decir el anteultimo
    //3)Obtengo el dato del ultimo, el que quiero eliminar para dsps devolverlo
    //4)Libero la memoria del ultimo (q estaba guardada en aux)
}

Pila::~Pila() {
    //Para vaciarla, mientras no sea vacia, dame de baja el ultimo nodo, 
    //que al que apunta tope.
    //(Llamo a tope dentro de la misma funcion)
    //Por esa razon, ibero de atras xa adelnate, es decir, del ultimo
    //q agregue al primero.
    while (! vacia())
        baja();
}

