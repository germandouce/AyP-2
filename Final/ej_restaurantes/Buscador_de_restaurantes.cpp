#include "Buscador_de_restaurantes.h"

// Post: busca en “restaurantes” aquellos que tienen por lo menos dos platos de la
// lista “platos_deseados” y un precio promedio menor o igual a precio_maximo.
// Devuelve una lista con los restaurantes que cumplen con estas características.

Buscador_restaurantes::Buscador_restaurantes(){
}

bool Buscador_restaurantes::plato_esta_en_platos_deseados(string plato, Lista<string>* platos_deseados){
    int cont = 0;
    bool esta = false;
    
    platos_deseados->reiniciar();
    while (platos_deseados -> hay_siguiente() && !esta){
        if(plato == platos_deseados->devolver_siguiente()->devolver_dato() ){
            esta=true;
        }
    }
    return esta;
}

Lista<Restaurante*>* Buscador_restaurantes::recomendar_restaurantes(Lista<Restaurante *>*restaurantes, 
Lista<string>* platos_deseados, int precio_maximo) {
    int cant_platos_deseados = 0;
    Lista<Restaurante*>* recomendados = new Lista<Restaurante*>;

    Restaurante* restaurante_actual;
    Lista<string>* platos;

    bool precio_aceptable;
    string plato;
    bool esta;
    
    restaurantes -> reiniciar();
    while (restaurantes -> hay_siguiente() ){
        
        restaurante_actual = restaurantes -> siguiente();
        
        precio_aceptable = restaurante_actual -> obtener_precio_promedio() <= precio_maximo;    
        
        platos = restaurante_actual -> obtener_platos();
        
        if (precio_aceptable){
            
            platos -> reiniciar();
            while(platos -> hay_siguiente() && cant_platos_deseados<2){

                plato = platos -> siguiente();
                esta = plato_esta_en_platos_deseados(plato, platos_deseados);
                
                if(esta){

                    cant_platos_deseados++;
                }
            }

            if ( cant_platos_deseados >= 2) {

                recomendados -> alta(restaurante_actual);
            }
        }
        cant_platos_deseados = 0;
    }
    
    return recomendados;
}