#ifndef UNTITLED_FRACCION_H
#define UNTITLED_FRACCION_H


class Fraccion {

private:
    int numerador;
    int denominador;

public:
    Fraccion(int numerador, int denominador);
    void mostrar();
    Fraccion operator + (Fraccion unaFraccion);
    Fraccion operator - (Fraccion unaFraccion);
    Fraccion operator * (Fraccion unaFraccion);
    Fraccion operator / (Fraccion unaFraccion);
};


#endif //UNTITLED_FRACCION_H
