#include "lista_template.h"
#include "Buscador_de_universidades.h"

using namespace std;

//CONSIGNA
//2) Dada la clase implementada según la interfaz:
// class Universidad
// {
// public:
// // Crea una universidad con su nombre, el ranking y una lista de carreras
// Universidad (string nombre, int ranking, Lista<string>* carreras);
// string obtener_nombre(); // devuelve el nombre de la universidad
// unsigned int obtener_ranking (); // devuelve el ranking
// Lista<string>* obtener_carreras (); // devuelve ptr a lista de carreras
// };
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

int main(){

    Lista<string>* vocaciones = new Lista<string>;
    vocaciones -> alta("ingenieria");
    vocaciones -> alta("arquitectura");

    //CUMPLE todo
    Lista<string>* carreras_uba = new Lista<string>;
    carreras_uba -> alta("ingenieria");
    carreras_uba -> alta("historia");

    Universidad* uba = new Universidad("uba", 15, carreras_uba);
    
    //NO CUMPLE CARRERAS, ninguna esta
    Lista<string>* carreras_guade = new Lista<string>;
    carreras_guade -> alta("historia");
    carreras_guade -> alta("arquitectura");

    Universidad* guade = new Universidad("guade", 1000000, carreras_guade);


    Lista<Universidad*>* universidades = new Lista<Universidad*>;
    universidades -> alta(uba);
    universidades -> alta(guade);    
    
    // cout<< torta -> obtener_nombre()<<endl;
    // cout<< torta -> obtener_calorias()<<endl;
    // cout<< torta -> obtener_ingredientes()->devolver_dato(1)<<endl;
    // cout<< torta -> obtener_ingredientes()->devolver_dato(2)<<endl;

    Buscador_de_universidades buscador_de_universidades = Buscador_de_universidades();
    
    Lista<Universidad*>* universidades_good = new Lista<Universidad*>;
    
    universidades_good = buscador_de_universidades.recomendar_universidades(universidades,
    vocaciones, 10);
    
    universidades_good->reiniciar();
    if (universidades_good->devolver_longitud()){  
        while(universidades_good->hay_siguiente())
        cout<<"1: " << universidades_good -> siguiente() -> obtener_nombre() <<endl;
    }
    else{
        cout<<"No hay universidades para ti"<<endl;
    }
}