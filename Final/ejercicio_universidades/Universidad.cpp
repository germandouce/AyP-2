
#include "Universidad.h"

Universidad::Universidad(string nombre, int ranking, Lista<string>* carreras){
    this->nombre = nombre;
    this->ranking = ranking;
    this->carreras = carreras;
}

// devuelve el nombre del alimento
string Universidad::obtener_nombre(){
    return nombre;
}

// devuelve un ptr la lista de ingredientes
Lista<string>* Universidad:: obtener_carreras () {
    return carreras;

} 

// devuelve un ptr la lista de ingredientes
unsigned int Universidad::obtener_ranking (){
    return ranking;
} 