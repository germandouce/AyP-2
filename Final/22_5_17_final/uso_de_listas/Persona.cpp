#include "Persona.h"

Persona::Persona(string nombre, int edad, Lista<string>* intereses){
    this -> nombre = nombre;
    this -> edad = edad;
    this -> intereses = intereses;
}

string Persona::obtener_nombre(){
    return nombre;
}

int Persona::obtener_edad (){
    return edad;
}

Lista<string>* Persona::obtener_intereses(){
    return intereses;
} 