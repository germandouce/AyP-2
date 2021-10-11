#include <iostream>
#include "operaciones.h"
#include "fraccion.h"

using namespace std;

int main() {

    Operaciones<int> operadorEntero;

    cout << "Resultados de operaciones entre enteros:" << endl;
    cout << "\t" <<"- Suma: ";
    cout << operadorEntero.sumar(1,2) << endl;
    cout << "\t" <<"- Multiplicacion: ";
    cout << operadorEntero.multiplicar(-1,2) << endl;
    cout << "\t" <<"- Division: ";
    cout << operadorEntero.dividir(1,2) << endl;
    cout << endl;

    Operaciones<double> operadorDouble;

    cout << "Resultados de operaciones entre numeros con coma:" << endl;
    cout << "\t" <<"- Suma: ";
    cout << operadorDouble.sumar(1.2,2.6) << endl;
    cout << "\t" <<"- Multiplicacion: ";
    cout << operadorDouble.multiplicar(1.5,2.5) << endl;
    cout << "\t" <<"- Division: ";
    cout << operadorDouble.dividir(1,2) << endl;
    cout << endl;

    Fraccion fraccion(1, 2);
    Fraccion otraFraccion(1, 3);

    Operaciones<Fraccion> operadorFraccion;

    cout << "Resultados de operaciones con fracciones:" << endl;
    cout << "\t" <<"- Suma: ";
    operadorFraccion.sumar(fraccion, otraFraccion).mostrar();
    cout << "\t" <<"- Resta: ";
    operadorFraccion.restar(fraccion, otraFraccion).mostrar();
    cout << "\t" <<"- Division: ";
    operadorFraccion.dividir(fraccion, otraFraccion).mostrar();
    cout << "\t" <<"- Multiplicacion: ";
    operadorFraccion.multiplicar(fraccion, otraFraccion).mostrar();
    cout << endl;

    return 0;
}
