#include <iostream>
#include "pila.h"


using namespace std;

int main()
{ 
    Pila p;
    p.alta(5);
    p.alta(8);
    p.alta(3);
    cout << "El ultimo elemento es: " << p.consulta() << endl;
    p.baja();
    cout << "El ultimo elemento es: " << p.consulta() << endl;
    p.alta(7);
    while (! p.vacia())
        cout << p.baja() << endl;

    return 0;
}
