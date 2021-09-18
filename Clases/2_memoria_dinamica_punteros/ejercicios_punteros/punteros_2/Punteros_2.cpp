#include <iostream>
using namespace std;

int* f1(int cant) {
    return new int[cant];
}

void f2 (int* &p, int a) {
    p = new int;    //genero memoria en el heap xa y
    *p = a++;       //modifico el heap de y
    cout <<"*p: " << *p << " (char)a: " << (char)a << endl;
}


int main()
{
    int udp = 8;
    int cant = (udp % 3) + 2;
    
    int *x, *y, *z;
    
    char a = 'A';
    
    x = f1(cant);
    
    for (int i=0; i<cant; i++ )
        x[i] = a + i; //el vector de x esta en el heap

    f2( y, a+cant );

    cout << "*y: " << *y << " *x: "<< *x << endl;

    z = x++;

    cout <<"*z: " << *z << endl;
  //70 = 69 + 1
    *z = *y + 1;
    //     70               70                      69 
    cout <<"*z: " << *z << " *(x-1): " << *(x-1) << " *y: "<< *y << endl;
    
    a = (char)(*y); //char de 69 = E
    //               E              70                   (66 - 1) = 65
    cout << "a: " << a << " * z: "<< *z <<" *x - 1: " <<  *x - 1 << endl;

    for ( int i = 0;  i < cant;  i++ )
        cout << *(z+i)+i<<" - " ;
                //z+i = "moverme posiciones de memoria en el heap" 
                //*(z+1) = "contenido de esa posicion en el heap"

    // Liberar memoria
    delete x, y, z;

    return 0;
}



