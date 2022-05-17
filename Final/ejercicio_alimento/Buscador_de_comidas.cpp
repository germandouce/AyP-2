#include <iostream>

#include "Buscador_de_comidas.h"


Buscador_de_comidas::Buscador_de_comidas(){

}

//Implementar el método comidas_para_celiacos de la clase Buscador_de_comidas:
// Post: busca en “comidas” aquellas que tienen algún ingrediente de la
// lista “ingredientes_permitidos” y ninguno de la lista
//“ingredientes_no_permitidos”
// y tienen una caloria menor a “caloria_maxima”.
// Devuelve una lista con los alimentos que cumplen con estas características.

void Buscador_de_comidas::tiene_algun_permitido(string ingrediente, 
Lista<string> *ingredientes_permitidos, bool &al_menos_un_permitido){

    ingredientes_permitidos->reiniciar();
    while ( ingredientes_permitidos -> hay_siguiente() ){

        if ( ingrediente == ingredientes_permitidos -> siguiente()  ){
            al_menos_un_permitido = true;
            //tiene al menos uno enotnces es para celiacos                  
        }
    }
}

void Buscador_de_comidas::ninguno_no_permitido(string ingrediente, 
Lista<string> *ingredientes_no_permitidos, bool &ingredientes_ok){
    ingredientes_no_permitidos -> reiniciar();
    while (ingredientes_no_permitidos -> hay_siguiente()){ 
        
        if ( ingrediente == ingredientes_no_permitidos->siguiente() ){
            ingredientes_ok = false;
            //Deja de ser para celiacos porque tiene uno no permitido
        }       
    }
}

Lista<Alimento *>* Buscador_de_comidas::comidas_para_celiacos (Lista<Alimento *>* comidas, Lista<string>* ingredientes_permitidos, 
Lista<string>* ingredientes_no_permitidos, unsigned int caloria_maxima){
    
    bool calorias_correctas;        
    bool ingredientes_ok;
    bool ingrediente_permitido;

    Lista<Alimento*> *lista_comidas_para_celiacos =  new Lista<Alimento*>;
    comidas -> reiniciar();
    while ( comidas -> hay_siguiente() ){

        Alimento* comida = comidas -> siguiente();
        Lista<string>* ingredientes_comida = comida ->obtener_ingredientes();
        int calorias_comida = comida -> obtener_calorias();
        calorias_correctas = false;
        
        if (calorias_comida < caloria_maxima){
                        
            calorias_correctas = true;
            ingredientes_ok = true;            
            bool al_menos_un_permitido = false;
            
            ingredientes_comida -> reiniciar();
            while( ingredientes_comida -> hay_siguiente() && ingredientes_ok){
                
                string ingrediente = ingredientes_comida -> siguiente();
                
                if (!al_menos_un_permitido){
                    tiene_algun_permitido(ingrediente, ingredientes_permitidos, al_menos_un_permitido);
                }
                if (ingredientes_ok){
                    ninguno_no_permitido(ingrediente, ingredientes_no_permitidos, ingredientes_ok);
                }
                //Si ingrediente esta permitido la comida sigue cumpliendo y es xa celiacos, 
                //en caso contrario deja de cumplir y ya no es para celiacos y no entra al while
                //con false. Si todos los ingredientes cumplen, saldra con true
            }
            ingredientes_ok = ingredientes_ok && al_menos_un_permitido;
        }
        bool es_comida_para_celiaco = calorias_correctas && ingredientes_ok;

        if (es_comida_para_celiaco){
            lista_comidas_para_celiacos -> alta(comida);
        }
    }
    return lista_comidas_para_celiacos;
}