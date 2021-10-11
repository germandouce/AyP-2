#include "circulo.h"
#include <iostream>


float Circulo::obtener_radio() {
    return radio;
}

void Circulo::cambiar_radio(float r) {
    radio = r;
}

float Circulo::area() {
    return PI * radio * radio;
}

// constructor con parametros
Circulo::Circulo(float r) {
    radio = r;
    std::cout << "Constructor con un parametro (radio)" << std::endl;
}

// constructor sin parametros
Circulo::Circulo() {
    // radio = 1.0;
    // Punto c;
    // c.mostrar();
    std::cout << "Constructor sin parametro (radio = 1)" << std::endl;

}


void Circulo::mostrar() {
    std::cout << "Circulo de radio " << radio << " y centro en ";
    centro.mostrar();
}


Circulo::Circulo(float r, int x, int y) : centro(x, y) {
    // Se utiliza lo
    // que llamamos inicializadores: luego de los parámetros del método escribimos dos
    // puntos ( : ) y el nombre del atributo / objeto autor, con el parámetro actual. En
    // este ejemplo es a.
    radio = r;
    std::cout<< "hola"<<std::endl;
    std::cout << "Constructor con tres parametros (radio, x, y)" << std::endl;
    
}


Circulo::Circulo(float r, Punto centro)  {
    this -> centro = centro;
    radio = r;
    std::cout << "Constructor con dos parametros (radio, Punto)" << std::endl;

}
