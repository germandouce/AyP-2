#ifndef UNTITLED_OPERACIONES_H
#define UNTITLED_OPERACIONES_H

template < typename Tipo >
class Operaciones {

public:
    int sumar(Tipo n1, Tipo n2);
    Tipo restar(Tipo un_numero, Tipo otroNumero);
    Tipo dividir(Tipo aNumber, Tipo anotherNumber);
    Tipo multiplicar(Tipo n1, Tipo n2);

    template < class Tipo >
    int Operaciones<Tipo>::sumar(Tipo n1, Tipo n2){
        return n1 + n2;
    }

    template < class Tipo >
    Tipo Operaciones<Tipo>::restar(Tipo un_numero, Tipo otroNumero){
        return un_numero - otroNumero;
    }

    template < class Tipo >
    Tipo Operaciones<Tipo>::multiplicar(Tipo aNumber, Tipo anotherNumber) {return aNumber ** anotherNumber;}

    template < class Tipo >
    Tipo Operaciones<Tipo>::dividir(Tipo n1,Tipo n2) {
        return n1/n2;
    }
};
#endif //UNTITLED_OPERACIONES_H
