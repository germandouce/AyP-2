#ifndef _NODO_TEMPLATE_H_
#define _NODO_TEMPLATE_H_

template <typename Dato>

class Nodo {

private:
    // ATRIBUTOS
    Dato dato;
    Nodo<Dato>* siguiente;
    Nodo<Dato>* anterior;

public:
    // METODOS

    // CONSTRUCTOR DE NODO
    Nodo(Dato d);

    // PRE: -
    // POST: cambia el nodo siguiente por ns
    void cambiar_siguiente(Nodo* ns);

    // PRE: -
    // POST: cambia el nodo anterior por na
    void cambiar_anterior(Nodo* na);

    // PRE: -
    // POST: devuelve el nodo anterior
    Nodo* devolver_anterior();

    // PRE: -
    // POST: devuelve el nodo siguiente
    Nodo* devolver_siguiente();

    // PRE: -
    // POST: devuelve el dato que hay en el nodo
    Dato devolver_dato();

};

template <typename Dato>
Nodo<Dato>::Nodo(Dato d) {
    dato = d;
    siguiente = 0;
    anterior = 0;
}

template <typename Dato>
void Nodo<Dato>::cambiar_siguiente(Nodo* ns) {
    siguiente = ns;
}

template <typename Dato>
void Nodo<Dato>::cambiar_anterior(Nodo* na) {
    anterior = na;
}

template <typename Dato>
Nodo<Dato>* Nodo<Dato>::devolver_anterior() {
    return anterior;
}

template <typename Dato>
Nodo<Dato>* Nodo<Dato>::devolver_siguiente() {
    return siguiente;
}

template <typename Dato>
Dato Nodo<Dato>::devolver_dato() {
    return dato;
}

#endif //_NODO_TEMPLATE_H_