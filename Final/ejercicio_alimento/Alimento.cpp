
#include "Alimento.h"

Alimento::Alimento(string nombre, unsigned int calorias, Lista<string>* ingredientes){
    this->nombre = nombre;
    this->calorias = calorias;
    this->ingredientes = ingredientes;
}

// devuelve el nombre del alimento
string Alimento::obtener_nombre(){
    return nombre;
}

// devuelve un ptr la lista de ingredientes
Lista<string>* Alimento:: obtener_ingredientes () {
    return ingredientes;

} 


// devuelve un ptr la lista de ingredientes
unsigned int Alimento::obtener_calorias (){
    return calorias;
} 