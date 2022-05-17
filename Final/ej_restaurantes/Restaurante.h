#ifndef _RESTAURANTE_H_
#define _RESTAURANTE_H_

#include <string>
#include "lista_template.h"

using namespace std;

//3) Dada la clase implementada según la interfaz:
class Restaurante{
    private:
        string nombre;
        unsigned int precio_promedio;
        Lista<string>* platos;

    public:
    // Crea un restaurante con su nombre, el precio promedio por cubierto y
    // una lista de platos que sirve
    Restaurante(string nombre, int precio_promedio, Lista<string>* platos);
    
    string obtener_nombre(); // devuelve el nombre del restaurante
    
    unsigned int obtener_precio_promedio (); // devuelve el precio promedio
    
    Lista<string>* obtener_platos (); // devuelve ptr a la lista de platos

    ~Restaurante();
};

#endif //_RESTAURANTE_H_