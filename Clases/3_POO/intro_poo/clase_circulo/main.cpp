#include <iostream>
#include "circulo.h"
#include "punto.h"


using namespace std;

int main()
{
    
    // Punto A;
    Punto B(-2, 8);
    // A.mostrar();
    B.mostrar();
    
    // Circulo c1;
    // Circulo c2(5.0);
    Circulo c3(1.2, -2, 8);
    //Punto P(1, -5);
    //Circulo c4(1.2, Punto(-2, 8));
    //Circulo c4(1.2,B);
    // Circulo c5 = c4;

    //c1.cambiar_radio(2.1);
    /*
    cout << "El area del circulo de radio " << c1.obtener_radio();
    cout << " es: " << c1.area() << endl;
    cout << "El area del circulo de radio " << c2.obtener_radio();
    cout << " es: " << c2.area() << endl;
    */
    // c1.mostrar();
    // c2.mostrar();
    c3.mostrar();
    //c4.mostrar();
    // c5.mostrar();

    return 0;
}
