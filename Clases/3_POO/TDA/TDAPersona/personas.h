#ifndef PERSONAS_H_INCLUDED
#define PERSONAS_H_INCLUDED

#include "persona.h"
#include <iostream>

//template <typename Persona>

class Personas{

private:
    int cantidad;
    Persona* personas;
  
public:
    //Personas(int cantidad, int edad, string nombre, fecha_t fecha_nacimiento);
    Personas(int cantidad);
    void cargar_elemento(Persona persona, int pos);
    void mostrar_vector();

};

#endif // PERSONAS_H_INCLUDED
