#include <iostream>

#include "Buscador_de_universidades.h"


Buscador_de_universidades::Buscador_de_universidades(){

}

// Implementar el método recomendar_universidades de la clase Buscador_universidades:
// class Buscador_universidades
// {
// public:
// // Post: busca en “universidades” aquellas que tienen alguna carrera de la
// // lista “vocaciones” y un ranking mayor o igual a ranking_minimo.
// // Devuelve una lista con las universidades que cumplen con estas características.
// Lista<Universidad *>* recomendar_universidades (Lista<Universidad *>*
// universidades, Lista<string>* vocaciones, int ranking_minimo);
// };

bool Buscador_de_universidades::carrera_esta_en_vocaciones(string carrera, Lista<string>* vocaciones){
    
    bool esta = false;    
    
    vocaciones->reiniciar();
    while (vocaciones -> hay_siguiente() && !esta){
        
        if(carrera == vocaciones->siguiente() ){
            esta = true;
        }
    }
    return esta;
}

Lista<Universidad *>* Buscador_de_universidades::recomendar_universidades(Lista<Universidad *>*universidades, 
Lista<string>* vocaciones, int ranking_minimo){
    
    Lista<Universidad*>* universidades_recomendadas = new Lista<Universidad*>;

    Universidad* universidad_actual;
    Lista<string>* carreras;

    bool ranking_aceptable;
    string carrera;
    bool alguna_vocacional;
    
    universidades -> reiniciar();
    while ( universidades-> hay_siguiente() ){
        
        universidad_actual = universidades -> siguiente();
        
        ranking_aceptable = universidad_actual->obtener_ranking() >= ranking_minimo;    
        
        carreras = universidad_actual -> obtener_carreras();
        
        alguna_vocacional = false;
        if (ranking_aceptable){

            carreras -> reiniciar();
            while(carreras -> hay_siguiente() && !alguna_vocacional){

                carrera = carreras -> siguiente();
                alguna_vocacional = carrera_esta_en_vocaciones(carrera, vocaciones);
            }
            if (alguna_vocacional){
                universidades_recomendadas -> alta(universidad_actual);
            }
        }
    }
    
    return universidades_recomendadas;
}