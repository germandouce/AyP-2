#include "Operaciones.h"

template < class Tipo >
int Operaciones<Tipo>::sumar(Tipo n1, Tipo n2){
    return n1 + n2;
}

template < class Tipo2 >
Tipo2 Operaciones<Tipo>::restar(Tipo2 un_numero, Tipo2 otroNumero){
    return un_numero - otroNumero;
}

template < class Tipo >
Tipo Operaciones::multiplicar(Tipo aNumber, Tipo anotherNumber) {return aNumber ** anotherNumber;}


Tipo Operaciones<Tipo>::dividir(Tipo n1,Tipo n2) {
    return n1/n2;
}