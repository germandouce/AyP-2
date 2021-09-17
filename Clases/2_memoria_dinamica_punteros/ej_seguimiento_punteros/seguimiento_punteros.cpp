#include <iostream>

using namespace std;
            //3
int* f1(int cant){

    return new int[cant]; //guarda en la heap un espacio de 3*int
}
            //y     68
void f2 (int* &p, int a){
    cout<<"a en f2: " <<a <<endl;
    p = new int;    //crea un esapcio en el heap xa un int
    *p = a++; // guarda en la heap. primero asigna a *p 68 y dsps incrementa 1 a "a"-> a= 69 
    cout<<" *p vale: " <<*p <<endl;
    cout <<"esto es f2: " << *p << " " << (char)a << endl;
}
int main(){
    int udp = 7; //1
    int cant = (udp % 3) + 2;
    int *x, *y, *z;
    char a = 'A';
            //3
    x = f1(cant); // vec [3] en la heap
    
    for (int i=0; i<cant; i++ )
        x[i] = a + i;   //x = {65,66,67}
    cout <<"cant: " <<cant;
    cout <<"a: "<<(int)a;
    f2(y, a+cant); //a+cant = 68 
    //f2 imprime esto:
    //68       " "    //69 (E)

    cout <<"dudaaa" << *y << " "<< *x << endl;
        //69      " " 

    z = x++;
    
    cout << *z << endl;
    *z = *y + 1;
    cout << *z << " " << *(x-1) << " "<< *y << endl;
    a = (char)(*y);
    cout << a << " "<< *z <<" " <<  *x - 1 << endl;
    for ( int i = 0;  i < cant;  i++ )
        cout << *(z+i)+i<<" " ;
    delete x;
    delete y;
    delete z;
    return 0;
}