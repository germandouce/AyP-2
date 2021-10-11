#ifndef CIRCULO_H_INCLUDED
#define CIRCULO_H_INCLUDED

#include "punto.h"


const float PI = 3.1416;


class Circulo {

// Atributos
private:
   float radio;
   Punto centro;

// Metodos
public:
    //Constructor con un parametro (radio)
    //PRE: r > 0
    //POS: crea un objeto Circulo con radio = r
    Circulo(float r);

    //Constructor sin parametros
    //PRE: -
    //POS: crea un objeto Circulo de radio = 1.0
    Circulo();

    //Constructor con tres parametros: radio, x_centro, y_centro
    //PRE: r > 0
    //POS: construye un Circulo de radio r con centro en (x,y)
    Circulo(float r, int x, int y);


    //Constructor con dos parametros: radio y el centro
    //PRE: radio > 0 y centro ya armado
    //POS: construye un Circulo de radio r y centro en "centro"
    Circulo(float r, Punto c);

   // PRE: -
   // POS: devuelve el radio del circulo
   float obtener_radio();

   // PRE: r > 0
   // POS: cambia el radio del circulo por r
   void	cambiar_radio(float r);

   // PRE: -
   // POS: devuelve el area del circulo
   float area();

    //PRE: -
    //POS: muestra en pantalla los datos: radio y centro
    void mostrar();
};


#endif // CIRCULO_H_INCLUDED
