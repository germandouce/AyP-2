#include <iostream>
#include "Restaurante.h"

Restaurante::Restaurante(string nombre, int precio_promedio, Lista<string>* platos){
    this->nombre = nombre;
    this->precio_promedio = precio_promedio;
    this->platos = platos;
}

string Restaurante::obtener_nombre(){
    return nombre;
}

Lista<string>* Restaurante::obtener_platos() {
    return platos;
} 

unsigned int Restaurante::obtener_precio_promedio(){
    return precio_promedio;
} 

Restaurante::~Restaurante(){
}