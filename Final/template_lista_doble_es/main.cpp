#include "lista_template_es.h"

using namespace std;


int main(){

    Lista<string> ingredientes_queso;
    
    string alimento = "queso";
    cout<<"insertan2"<<endl;
    ingredientes_queso.insertar(alimento);
    ingredientes_queso.insertar("tomate");
    ingredientes_queso.insertar("lechuga");

    cout<<"inserta3"<<endl;
    
    cout<<ingredientes_queso.devolver_dato(0)<<endl;

    //ENCIMA ESTAN ESTAS FUNCIONARDAS QUE DAN POR IMPLEMENTADAS EN MODELO DE FINAL!!!!!!
    //ESQUERE TE AMO ROCIO PERRONI 
    //Como no deberian ser llamados directamente, son un poco inconsitentes.
    //Trabajan con current, puntero que apunta al elemento actual de la lista!

    cout<<ingredientes_queso.esta_vacia()<<endl;

    // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
    // PRE:
    // POS: pone el puntero a la primera posición o apuntando a NULL
    ingredientes_queso.reiniciar(); 

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    cout<< ingredientes_queso.hay_siguiente()<<endl;
    //Devuelve true si hay siguiente (con referencia al nodo en el que esta parado. 
    //Al llamar dde aca a la funcion esta parado siempre en el primer elemento,
    //si hay un solo elemento dice que si hay siguiente.
    //A nivel codigo es xq devuelve current, y current es el primer elemento.
    
    // devuelve el siguiente elemento (el elemento que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el elemento actual y avanza
    cout<<"siguiente: "<<ingredientes_queso.devolver_siguiente() -> devolver_dato()<<endl;
    //Igual q antes. Al llamar dde aca esta parado siempre en la 1er posicion por eso devuelve el 
    //primero.
    //Si hay uno solo devuelve el primero xq devuelve "current".

    return 0;
}