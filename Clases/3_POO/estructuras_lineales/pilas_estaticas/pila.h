#ifndef PILA_H_INCLUDED
#define PILA_H_INCLUDED

typedef int Dato;
const int MAX = 100;

class Pila {
    // Atributos
private:
    Dato datos[MAX];
    int tope;

    // Metodos
public:
    //Constructor
    //PRE: -
    //POS: tope = 0 xa que al inciar la pila tenga 0 elementos
    //primero agrego el elemento y dsps incremento el tope
    //Tope es un punetro de la pila, un atributo que lo unico q hace es apuntar al ultimo elemento. Es como q esta flotando ahi
    //y se va moviendo apuntando al ultimo elemento
    //tope despues del alta siempre vale lo mismo que la catidad de elementos q hay.
    //(tope = cantidad pura de elementos en el vector).
    //ES UN ATRIBUTO DE LA PILA, NO DEL NODO
    Pila();

    //PRE: la pila no este llena (llena = false)
    //POS: agrega d arriba de la pila e incrementa tope en 1
    //como tope vale la cantidad de elementos que hay pero arranco en 0 al
    //hacer datos[tope] lo meto meto en la ult pos y sumo 1
    void alta(Dato d);

    //PRE: la pila no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba
    //devuelvo top -1 xq tope esta vacio esperando el prox elemento
    Dato consulta();

    //PRE: la pila no tiene que estar vacia (vacia = false)
    //POS: devuelve el dato que esta arriba y decrementa tope
    //primero resto 1 en el tope (dejo de apuntar al espacio vacio y paso a apuntar
    //al ultimo) y dsps lo devuelve (ahora ese es el nuevo tope y entonces actua de espacio vacio para rellenar 
    //en un futuro)
    Dato baja();

    //PRE: -
    //POS: devuelve true si la pila alcanzo el maximo, false si no
    bool llena();

    //PRE: -
    //POS: devuelve true si la pila esta vacia, false si no
    bool vacia();
};

#endif // PILA_H_INCLUDED
