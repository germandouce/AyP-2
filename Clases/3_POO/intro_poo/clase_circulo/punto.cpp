#include <iostream>
#include "punto.h"

Punto::Punto(int x, int y) {
    this->x = x;
    this->y = y;
//    std::cout << "Constructor de Punto con 2 parametros" << std::endl;

}


Punto::Punto() {
    this->x = 0;
    this->y = 0;
//    std::cout << "Constructor de Punto sin parametros" << std::endl;

}


void Punto::mostrar() {
    std::cout << "(" << x << ", " << y << ")" << std::endl;
}
