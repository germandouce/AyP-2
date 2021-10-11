#ifndef PUNTO_H_INCLUDED
#define PUNTO_H_INCLUDED

class Punto {
private:
    // Atributos
    int x;
    int y;

public:
    //Constructor
    //PRE: -
    //POS: crea un Punto con los valores x, y
    Punto(int x, int y);

    //Constructor sin parametros
    //PRE: -
    //POS: crea un Punto en el origen
    Punto();

    //PRE: -
    //POS: muestra en pantalla el punto
    void mostrar();

};

#endif // PUNTO_H_INCLUDED
