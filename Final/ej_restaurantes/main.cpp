#include "Buscador_de_restaurantes.h"

//3) Dada la clase implementada según la interfaz:
// class Restaurante
// {
// public:
// // Crea un restaurante con su nombre, el precio promedio por cubierto y
// // una lista de platos que sirve
// Restaurante (string nombre, int precio_promedio, Lista<string>* platos);
// string obtener_nombre(); // devuelve el nombre del restaurante
// int obtener_precio_promedio (); // devuelve el precio promedio
// Lista<string>* obtener_platos (); // devuelve ptr a la lista de platos
// };
// Implementar el método recomendar_restaurantes de la clase Buscador_restaurantes:
// class Buscador_restaurantes
// {
// public:
// // Post: busca en “restaurantes” aquellos que tienen por lo menos dos platos de la
// // lista “platos_deseados” y un precio promedio menor o igual a precio_maximo.
// // Devuelve una lista con los restaurantes que cumplen con estas características.
// Lista<Restaurante *>* recomendar_restaurantes (Lista<Restaurante *>*
// restaurantes, Lista<string>* platos_deseados, int precio_maximo);
// };

int main(){
    //___platos deseados__
    Lista<string>* platos_deseados = new Lista<string>;
    platos_deseados -> alta("hamburguesa");
    platos_deseados -> alta("milanga");
    platos_deseados -> alta("asado");
    
    //Si saco las papas mac tiene 1 solo deaseado 1 no entra
    //platos_deseados -> alta("papas");

    //__PARRILLAS
    //____Parrilla de pepe
    Lista<string>* platos_parrilla_pepe = new Lista<string>;    
    platos_parrilla_pepe -> alta("milanga");
    platos_parrilla_pepe -> alta("hamburguesa");
    Restaurante* parrilla_pepe = new Restaurante("la parrilla de don pepe", 100, platos_parrilla_pepe);
    
    //Parrilla de german
    Lista<string>* platos_parrilla_german = new Lista<string>;    
    platos_parrilla_german -> alta("milanga");
    platos_parrilla_german -> alta("hamburguesa");
    Restaurante* parrilla_german = new Restaurante("la parrilla de german", 100, platos_parrilla_german);

    //___mecdonels  
    Lista<string>* platos_mac = new Lista<string>;    
    platos_mac -> alta("hamburguesa");
    platos_mac -> alta("papas");
    Restaurante* mac = new Restaurante("mac", 100, platos_mac);
    
    //___agrego restaurantes
    Lista<Restaurante*>* restaurantes = new Lista<Restaurante*>;    
    restaurantes -> alta(parrilla_pepe);
    restaurantes -> alta(parrilla_german);
    restaurantes -> alta(mac);

    Buscador_restaurantes buscador_de_parrillas;
    
    Lista<Restaurante*>* lista_parrillas = new Lista<Restaurante*>;

    lista_parrillas = buscador_de_parrillas.recomendar_restaurantes(restaurantes,platos_deseados, 200);
        
    if (lista_parrillas->devolver_longitud()){  
        cout<<"Parrillas buenardas:"<<endl;
        while (lista_parrillas->hay_siguiente())
            cout << lista_parrillas ->siguiente() -> obtener_nombre()<<endl;
    }
    else{
        cout<<"todos los restaurantes son malardos"<<endl;
    }
}