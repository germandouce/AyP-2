#include <iostream>

using namespace std;


//TIPOS DE DATOS
//Enteros, Flotantes, vacios, EXISTEN BOOLEANOS!!
//ej:
void tipos_de_datos(){
    char c ='A'; //si es un solo char lleva 'simple'
    cout <<c << '\n';   //imprime 'a', si quiero usar cout xxa 2 cosas va de nuevo el <<
    cout <<(int)c; //casteo a entero. imprime el valor ascii de 'a' 
}



//VARIABLES
void variables(){
    //Buena practica es con guion bajo
    int x, y;   //x e y son dos enteros ojo tienen basura!
    int w = 5, z;
    cout <<"w vale: " << w << "\nLa bsaura de z es: "<< z; //imprime basura por z!!
}



//CONSTANTES!!
void constantes(){
    const char NOMBRE[22] = "soy un char cte de 6!"; //lleva el 0 al final!!
    cout <<"Nombre es: " << NOMBRE <<endl;
    
    //Existen strings en c++!!!! ventaja!!
    const string NOMBRE_CTE ="Soy un string cte!";
    cout <<"CTE: " << NOMBRE_CTE <<endl;

    const int IVA = 21;
    cout <<"El iva vale " << IVA << "%"<< endl; 
}



//ENTRADA Y SALIDA
void entrada_salida(){
    int valor;
    std :: cin >> valor;  //la flecha << indica a donde mando
    //el std podria no ir pero es buena practica ya q indica 
    //q el ingreso es x la standard

    //char codigo = 'J';
    std :: cout <<"Valor: "<< valor << std::endl;
    
    //el std puede ir o no, en este caso solo indica q es se sale por en standard namespace
}



//COMENTARIOS
/*Mas
de una
linea*/



//MODIFICADORES
//short - long-unsigned(solo positivo) - signed



//TIPOS DE DATOS DERIVADOS
//1
void tipos_de_datos_derivados_1(){
    
    //VECTORES O ARRAYS
    int vec [10]; //me reservo 10 espacios
    vec[0] = 5; //carga un 5 en la primera posicion
    vec[9] = 3; //carga un 3 en la ultima posicion
    //OJO TERMINA EN 9!!!!!!!!
    cout<< vec[3] <<endl; //imprime el valor q esta en la 4ta posicion
    //imprime basura xq no hay nada

    //ESTRUCTURAS O STRUCTS
    struct Empleado{
        int legajo;
        float sueldo;
    };

    Empleado empleado_nuevo; // creo un struct de tipo empleado
    empleado_nuevo.legajo = 325;
    empleado_nuevo.sueldo = 40200.30;
    
    cout << empleado_nuevo.legajo <<endl;
    cout << empleado_nuevo.sueldo <<endl;

}



void tipos_de_datos_derivados_2(){
    
    //Enumerados
    enum Estado{
        ROJO,
        AMARILLO,
        VERDE,
    };
    Estado semaforo_1;
    semaforo_1 = VERDE;
    //si el if/ for / while tienen una sola sentencia
    // los {brackets} pueden no ir. Por buena practica 
    //usarlos siempre aunq no sean necesarios!!
    if (semaforo_1 == VERDE)//{
        //avanzar()
        cout << "Avanzar! \n";
    //}

    //matriz de enteros, de 3 filas por 5 columnas
    //OJO ARRANCA EN [0][0]!!!
    int matriz[3][5];
    //defino CANTIDAD DE FILAS Y COLUMNAS!
    
    //Cargo la matriz 
    for (int i = 0; i <3; i++){
        for (int j = 0; j <5; j++){
            matriz[i][j] = 1;
        }
    }
    //OJO, es una menos xq arranca en 0!
    matriz[2][4] = 8;

    for (int i = 0; i <3; i++){
        for (int j = 0; j <5; j++){
            cout << matriz[i][j];
        }
        cout << '\n';
    }
    cout <<matriz[2][4];

}



//OPERADORES
void operadores(){
    //Artitmeticos y de asignacion
    //+, =, -,,*, /, %,
    //ojo no existe division entera ( // )!! 
    int x= 8, y= 5;
    float z = x/y;
    cout <<"diviendo sin castear x/y = " << z << endl;  //Como divide dos enteros,
    //el resultado da en entero
    //Si quiesiera resultado en foat tengo q castear 
    //aunq sea uno de ellos
    
    float f = (float)x/y;
    cout <<"casteo x, x/y = " << f << endl;
    
    float g = x/(float)y;
    cout <<"casteo y, x/y = " << g << endl;

    //Logicos y otros
    // not (!), and (&&), or (||), menos (-)

    //Comparacion 
    // ==, <=, =<, 
    //tamanio de un dato = sizeof(tio o variable)

    //imprime el tamanio en bytes de un int generico
    cout << "Un entero generico ocupa " << sizeof(int) << " bytes";

}



//ESTRUCTURAS DE CONTROL

//IF-ELSE
void un_if_else(){
    
    //if simple
    int x = 8;
    if (x<4){
        cout << "Recurse";
    }
    else{
        cout <<"Final";
    }
    
    cout << endl;

    //else if
    if (x<4){
        cout << "Recursa";
    }
    else if (x<7){
        cout << "Final";
    }
    else{
        cout << "Promociona";
    }
}

//SWITCH-BREAK
void un_switch(){
    // Ejemplo switch (pasa un valor numérico a palabras”)
    int x;
    cout << "Ingrese un valor del 1 al 5: ";
    cin >> x;
    
    //SWITCH 1
    //ejecuta solo la q corresponde al numero
    switch (x) {
        case 1: cout << "uno "; break;
        case 2: cout << "dos "; break;
        case 3: cout << "tres "; break;
        case 4: cout << "cuatro "; break;
        case 5: cout << "cinco "; break;
        default : cout << "Opcion no valida ";
    }

    //SWITCH 2
    //mucho mejor xa rangos!!
    //de 1 a 3 es malo de 4 a 6 regular etc
    int nota;
    cout << "Ingrese la nota: ";
    cin >> nota;
    switch ( nota ) {
        case 1:
        case 2:
        case 3: cout << "malo "; break ;
        case 4:
        case 5: cout << "regular "; break ;
        case 6:
        case 7: cout << "bueno "; break ;
        case 8:
        case 9: cout << "distinguido "; break ;
        case 10: cout << "sobresaliente "; break ;
        default : cout << "Nota invalida ";
    }

}

//WHILE
void un_while(){

}

//Comienza siempre con la ejecucion del main
int main(){
    //cout << "Hello World!" <<endl;
    // aqui << mando la flechas indican a donde mando
    //tipos_de_datos();
    //variables();
    //constantes();
    //entrada_salida();
    //Comentarios
    //Modificadores
    //tipos_de_datos_derivados_1();
    //tipos_de_datos_derivados_2();
    //operadores();

    //--ESTRUCTURAS DE CONTROL--//
    //un_if_else();
    //un_switch();
    //un_while();


    return 0;
}