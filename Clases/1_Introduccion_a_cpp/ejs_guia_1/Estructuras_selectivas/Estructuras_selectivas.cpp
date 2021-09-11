#include <iostream>
#include <string>

using namespace std;

/*6)Leer un número real y decir si es mayor, menor o igual a cero.
*/

// int main(){
//     float num;
//     cout << "Ingrese un numero real: ";
//     cin >> num;
//     if (num>0){
//         cout << "Es mayor a cero";
//     }
//     else if (num<0){
//         cout << "Es menor a cero";
//     }
//     else{
//         cout << "Es igual a cero";
//     }
// }



/*7)
Leer dos números reales e imprimir el mayor de ellos.
*/
// int main(){
//     float num_1, num_2;
//     cout << "Ingrese el primer numero real: ";
//     cin >> num_1;

//     cout << "Ingrese el segundo numero real: ";
//     cin >> num_2;

//     if (num_1>num_2){
//         cout << num_1;
//     }
//     else if (num_2>num_1){
//         cout << num_2;
//     }
//     else{
//         cout << num_1 <<" es igual a " << num_2;
//     }
// }



/*8)
Escribir un algoritmo que determine si un número es par. 
*/
// int main(){
//     int num;
//     cout << "Ingrese un numero: ";
//     cin >> num;
//     if (num%2 ==0){
//         cout << "Es par";
//     }
//     else{
//         cout << "Es impar";
//     }
// }



/*9)
Escribir un algoritmo que determine si un número M es divisible por N.
*/
// int main (){
//     int m; int n;
    
//     cout <<"m = ";
//     cin >> m;
    
//     cout <<"n = ";
//     cin >> n;

//     if(m%n == 0){
//         cout << "Es divisible";
//     }
//     else{
//        cout << "No es divisible";
//     }
// }



/*10) y 11)
Leer dos números y luego una opción que puede ser “ + ”: suma, “ – “: resta, 
“ * ”: multiplicación o “ / “: división. Según la opción elegida realizar el cálculo. 
Formar un menú de 4 opciones y, al elegir una de ellas, saldrá un cartel diciendo qué 
opción se eligió o si fue una opción incorrecta. 
*/

const int SUMA = 1;
const int RESTA = 2;
const int MULTIPLICACION = 3;
const int DIVISION = 4;
const int SALIR = 5;

const int ERROR = -1;
const int OPCIONES_VALIDAS = 5;

void mostrar_menu(){
    cout << endl;
    cout << "MENU" << endl
    << '\t' << "1 - Suma" << endl
    << '\t' << "2 - Resta" << endl
    << '\t' << "3 - Multiplicacion" << endl
    << '\t' << "4 - Division" << endl
    << '\t' << "5- Salir" << endl;
}


int pedir_opcion(){
    int opcion_elegida = ERROR;
    cout << "Ingrese una opcion : ";
    cin >> opcion_elegida;

    return opcion_elegida;
}

void validar_opcion_elegida(int &opcion_elegida){
    bool es_opcion_valida = opcion_elegida > 0 && opcion_elegida <= OPCIONES_VALIDAS;
    while(!es_opcion_valida){
        cout << "Por favor ingrese una opcion valida: ";
        cin >> opcion_elegida;
        es_opcion_valida = opcion_elegida > 0 && opcion_elegida <= OPCIONES_VALIDAS;
    }
}

void sumar(float num_1, float num_2){
    float res =  num_1 + num_2;
    cout <<"Resultado: " << res;
}

void restar(float num_1, float num_2){
    float res =  num_1 - num_2;
    cout <<"Resultado: " << res;
}

void multiplicar(float num_1, float num_2){
    float res = num_1*num_2;
    cout <<"Resultado: " << res;
}

void dividir(float num_1, float num_2){
    float res = num_1/num_2;
    cout <<"Resultado: " << res;
}

void procesar_opcion(int opcion_elegida, float num_1, float num_2){
    switch(opcion_elegida){
        case SUMA:
            sumar(num_1, num_2);
            break;

        case RESTA:
            restar(num_1, num_2);
            break;

        case MULTIPLICACION:
            multiplicar(num_1, num_2);
            break;
        
        case DIVISION:
            dividir(num_1, num_2);
            break;       
    }
}


int main(){
    float num_1, num_2;
    
    cout << "Ingrese primer numero: ";
    cin >> num_1;

    cout << "Ingrese segundo numero: ";
    cin >> num_2;
    
    int  opc = 0;

    // mostrar_menu();
        
    // opc = pedir_opcion();
        
    // validar_opcion_elegida(opc);

    while (opc != SALIR){
                
        mostrar_menu();
        
        opc = pedir_opcion();
        
        validar_opcion_elegida(opc);
        cout << endl;
        procesar_opcion(opc, num_1, num_2);
        cout << endl;
    }
}   