#include <iostream>
#include <string>

using namespace std;

//MEMORIA DINAMICA - PUNTEROS

//La memoria se divide en 4 partes ppales
//*Extra segment (heap)
//*Stack segment (pila): variables locales y lo que este en el main
//*Data segment (constantes y variables globales)
//*Code segment: codigo que se ejecuta


int main(){
    //int a = 8;
    //cout << &a <<endl;
    //imprime la direc de memoria en la que esta almacenada 'a'
    //*a imprime el contenido, que en este caso sera basura
    //PUNTEROS

    int *pi0;
    char *pc;
    float *pf;

    int * pi1, pi2, pi3;
    //solo pi es puntero, pi2, pi3 son int!
    //cout <<pi1 <<" "<<pi2<<" "<< pi3;
    //direc de memoria, basura, basura

    //No es posible asignarle una direc de memoria a
    //un puntero manualmente
    //int * p = 11206656;

    int *p;
    int x = 5;    

    p = &x;
    //el puntero p, la flechita apunta a la direc de
    //de memoria de x. 
    
    *p = 8;
    //como p esta apuntando a la direc de memoria de
    //x, al modificar el contenido de p, modifico x.
    //entonces el valor de x queda en 8
    
    // cout << "Direc de memoria de x: "<< p <<endl;
    // cout << "Direc de memoria de p: "<< &p <<endl;
    // cout << "Contenido de p: " << *p <<endl;
    // cout << "valor de x: " << x <<endl;

    // int vec[3];
    // vec[0]=100;
    // vec[1]=300;
    // cout <<"valor en la 1era pos: " << vec[0] <<endl;
    // cout << "direc de memoria de la primera pos: "<< vec;
    
    //PEDIR MEMORIA AL HEAP
    int* p_heap = new int;
    //guarda en p la direccion de memoria de la variable 
    //anonima y dsps permite acceder y modificar mediante *

    //para liberar memoria 
    // cout << "direccion de memoria de p_heap: "<< p_heap<<endl;
    // cout <<"contenido de p_heap: "<< *p_heap << "(basura)" <<endl;
    delete p;

    //Solicitar una porcion de memoria xa un vector
    int * vec = new int[100];
    //hay que liberar toda la porcion de memoria
    delete [] vec;
    
    int equis = 5, yy =8;

    int * p1 = &equis;

    int * p2 = &yy;

    //p1=p2; 
    //copia la direc de memoria de p2 a p1 y por lo tanto,
    //modifica tambien su contenido

    //*p1 = *p2; 
    //coloca en p1 el contenido de p2 en el contenido de p1
    //pero p1 sigue manteniendo la direc de memoria de antes

    // cout<< "p1: " << p1 << " " <<*p1 << endl
    // <<"p2: " << p2 << " "<< *p2 << endl;

    //Creo un tipo puntero llamado Pint 
    typedef int* Pint;

    Pint a, c, f;
    
    int h = 70;

    f = new int;
    //dejo espacio en heap para un int

    (*f) = h;
    //guardo en el contenido 70 DENTRO DEL HEAP

    // cout << "direc de f: "<< f << endl;
    // cout <<"Contenido de f en el heap: " << *f << endl;
    
    c = new int;
    //asigno a 'c' una direc en el heap 
    a = c;
    //guardo en 'a' la direc que tiene c del heap
    
    // cout << "c: "<<c <<endl
    // <<"a: "<< a;

    *a = 67;
    // como guarde en a la direc de memoria de c
    // en el heap, al modificar el contenido de a
    //tambien modificare el de c

    h++;
    //como h es una variable en el stack
    //solo se modifica su contenido. 
    //el de f (linea 100) queda igual en 67

    // cout <<"c: " <<*c
    // <<" a: "<<*a
    // <<" f: "<<*f <<endl
    // <<"h: "<< h;

    return 0;

    }
