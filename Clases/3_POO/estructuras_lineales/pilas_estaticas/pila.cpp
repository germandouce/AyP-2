#include "pila.h"

Pila::Pila() {
    tope = 0;
}


bool Pila::vacia() {
    return (tope == 0);
}


bool Pila::llena() {
    return (tope == MAX);
}


void Pila::alta(Dato d) {
    datos[tope] = d;
    tope++;
}


Dato Pila::consulta() {
    return datos[tope - 1];
}

Dato Pila::baja() {
    tope--;
    return datos[tope];
}
