#include <iostream>
#include <string>

using namespace std;

//OPERACIONES CON PUNTEROS

int main(){
    
    //ASIGNACION
    
    //Si la variable no es dinamica, con el 
    //operador &
    int x = 5;
    int *p_1 = &x;
    //Esta forma no es muy utilizada salvo en la didactica

    //Si la variable es dinamica, se crea con el operador new
    int * p_2 = new int;    //guardo un espacio de un int (4 bytes en general)
    //cout << sizeof(p_2);
    // *p_2 = 4;   // debo usar * para la asignacion porque es un puntero
    // cout << "en " << p_2 << " hay un "<<*p_2;

    //Esta forma si es mas utilizada especialmente cuando se crean
    //bloques de memoria
   
    //Hay un solo valor valido que se puede asignar a un puntero que no
    //sea la direccion de memoria de otra variable:
    //el valor nulo. Se realiza poniendo un cero o un NULL a la variable
    p_1 = 0;
    //p_2 = NULL;
    //cout <<*p_2;

    //Mejor practica usar 0, zq la constante NULL no simepre esta definida
    //y puede provocar error
    //La direc nula se usa para saber si el puntero apunta a cierta variable o no.

    //SUMA Y RESTA

    //La suma de un valor a un puntero hace q este avance a las posiciones
    //continuas de memoria
    //cout<<"hello";
    
    int * p_vec_1 = new int[100]; // p apunta al primer lugar del vector
    //p_vec_1++; // p apunta al segundo lugar de vector

    // NO hay q hacer *p_vec_1 porque el array es un puntero al primer elemento
    p_vec_1[0] = 0;
    p_vec_1[1] = 1;

    //cout<<*(p_vec_1+1)<<endl;

    //Con la resta sucede lo contrario, retrocede.
    //OJO, PARA LIBERAR LA MEMORIA EL PUNTERO DEBE APUNTAR A LA PRIMER DIRECCION

    
    //ejemplo:

    if (p_vec_1){ //equivale a p != 0
        //realizar A
       // cout <<"p apunta a cierta direccion valida"<<endl;
       cout<<"hello";
    }
    else{
        //realizar B
        //cout<<"//p n o apunta a ninguna direccion"<<endl;
    };

    delete [] p_vec_1;
    delete p_2;
    p_2 = NULL;

    return 0;
    
}