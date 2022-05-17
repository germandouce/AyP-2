#include <iostream>
#include "Red_social.h"

Red_social::Red_social(){

}

//PRE: Recibe un string con el nombre del interes y un puntero a una lista de gustos
//POS: Devuelve true si interes esta en la lista gustos y false en caso contrario
bool Red_social::interes_esta_en_gustos(string interes, Lista<string>* gustos){
    int cont = 0;
    bool esta = false;
    
    gustos->reiniciar();
    while (gustos -> hay_siguiente() && !esta){
        if(interes == gustos->siguiente() ){
            esta=true;
        }
    }
    return esta;
}

// PRE: Reibe un puntero a una lista de punteros a personas, un puntero a una lista de gustos, 
// y dos enteros edad maxima y edad minima con las edades maximas y minimas de las 
// peronsas que se pueden recomendar
// POST: Busca en “personas” aquellas que tienen por lo menos dos intereses de la lista 
// “gustos” y una edad menor o igual a edad_maxima y mayor o igual a edad_minima.
// Devuelve un puntero a una lista con las personas que cumplen con estas características.

Lista<Persona*>* Red_social::recomendar_personas(Lista<Persona *>*personas, 
Lista<string>* gustos, int edad_maxima, int edad_minima) {

    int cant_personas = 0;

    Lista<Persona*>* recomendadas = new Lista<Persona*>;

    Persona* persona_actual;
    Lista<string>* intereses;
    int cant_intereses = 0;

    bool edad_aceptable;
    int edad;
    string gusto;
    bool esta;
    
    personas -> reiniciar();
    while (personas -> hay_siguiente() ){

        persona_actual = personas -> siguiente();
        
        edad = persona_actual -> obtener_edad();
        
        edad_aceptable = (edad >= edad_minima && edad <= edad_maxima);
        
        intereses = persona_actual -> obtener_intereses();
        
        if (edad_aceptable){
            
            intereses -> reiniciar();
            while(intereses -> hay_siguiente() && cant_intereses<2){

                string interes = intereses -> siguiente();
                esta = interes_esta_en_gustos(interes, gustos);
                
                if(esta){

                    cant_intereses++;
                }
            }

            if ( cant_intereses >= 2) {
                cant_personas++;
                recomendadas -> insertar(persona_actual, cant_personas);
            }
        }
        cant_intereses = 0;
    }
    
    return recomendadas;
}