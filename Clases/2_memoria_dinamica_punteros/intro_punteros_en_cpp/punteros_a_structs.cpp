//PUNTEROS A ESTRUCTURAS COMPLEJAS

#include <iostream>
#include <string>

using namespace std;

struct Empleado{
    int legajo;
    string nombre;
    float sueldo;
};

int main(){
    
    //Creo un vector q contendra elementos de tipo empleado
    //en el heap
    Empleado *vec_empleados = new Empleado[2];
   
    //Si queremos crear una variable de tipo empleado
    //de forma dinamica...
    //tipo de dato
    Empleado * pe = new Empleado;

    //Para acceder a cada uno de los campos
    //hay q usar el operador desreferencacion
    //xq es pe es un puntero cuyo contenido esta
    //en el heap

    (*pe).legajo = 145;

    //Esta linea se interpreta:
    //*pe es la variable a la cual apunta pe, en este
    //caso una del tipo 'Empleado'

    //cout << (*pe).legajo;

    //Manera alternativa mas usada para acceder a traves del
    //puntero al struct es -> que reemplaza (*pe). por pe->

    pe -> nombre = "German";
    //(*pe).nombre = "German"
    pe -> sueldo = 12;

    vec_empleados[1] = *pe;
    vec_empleados[0].sueldo = pe -> sueldo;

    cout << "legajo: "<< vec_empleados[1].legajo<<endl;
    cout <<"legajo_2: " << vec_empleados->legajo << endl;    
    cout<<"Nombre: "<< vec_empleados[1].nombre<<endl
    <<"Sueldo: " <<vec_empleados[1].sueldo<<endl;


    //para liberar memoria es igual q con cualqueir otra
    //variable simple
    //Observar que despues de liberar el heap me imprime 
    //basura
    delete pe;
    delete [] vec_empleados;

    cout<<pe -> nombre<<endl;
    cout<< vec_empleados[1].legajo<<endl;
    cout<< vec_empleados[1].nombre<<endl;

}
