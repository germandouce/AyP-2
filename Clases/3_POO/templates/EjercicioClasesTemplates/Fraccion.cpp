#include <iostream>
#include "Fraccion.h"

Fraccion  Fraccion::operator + (Fraccion unaFraccion){

}

Fraccion::Fraccion(int numerador, int denominador) {

    this->numerador = numerador;
    this->denominador = denominador;

}

void Fraccion::mostrar() {

    std::cout << this -> numerador << "/" << this -> denominador << std::endl;

}

Fraccion Fraccion::operator-(Fraccion unaFraccion) {

}

Fraccion Fraccion::operator*(Fraccion unaFraccion) {

}

Fraccion Fraccion::operator/(Fraccion unaFraccion) {

}
