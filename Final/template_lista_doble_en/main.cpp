#include "lista_template_en.h"

using namespace std;


int main(){

    List<string> ingredientes_queso;
    
    string alimento = "queso";
    cout<<"insertan2"<<endl;
    ingredientes_queso.insert(alimento);
    ingredientes_queso.insert("tomate");
    ingredientes_queso.insert("lechuga");

    cout<<"inserta3"<<endl;
    
    cout<<ingredientes_queso.getData(0)<<endl;

    //ENCIMA ESTAN ESTAS FUNCIONARDAS QUE DAN POR IMPLEMENTADAS EN MODELO DE FINAL!!!!!!
    //ESQUERE TE AMO ROCIO PERRONI 
    //Como no deberian ser llamados directamente, son un poco inconsitentes.
    //Trabajan con current, puntero que apunta al elemento actual de la lista!

    cout<<ingredientes_queso.isEmpty()<<endl;

    // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
    // PRE:
    // POS: pone el puntero a la primera posición o apuntando a NULL
    ingredientes_queso.reset(); 

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    cout<< ingredientes_queso.hasNext()<<endl;
    //Devuelve true si hay siguiente (con referencia al nodo en el que esta parado. 
    //Al llamar dde aca a la funcion esta parado siempre en el primer elemento,
    //si hay un solo elemento dice que si hay siguiente.
    //A nivel codigo es xq devuelve current, y current es el primer elemento.
    
    // devuelve el siguiente elemento (el elemento que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el elemento actual y avanza
    cout<<"siguiente: "<<ingredientes_queso.getNext()->getData()<<endl;
    //Igual q antes. Al llamar dde aca esta parado siempre en la 1er posicion por eso devuelve el 
    //primero.
    //Si hay uno solo devuelve el primero xq devuelve "current".

    return 0;
}