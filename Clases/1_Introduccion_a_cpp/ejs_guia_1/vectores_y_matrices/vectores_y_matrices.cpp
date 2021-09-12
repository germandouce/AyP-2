//FUNCIONES

#include <iostream>
#include <string>

using namespace std;

/*30)
Dados dos vectores A y B, de N elementos cada uno, se desean calcular:
a.El vector suma. 
b.El producto escalar.
*/
//Para hacer mas facil, harcodeo los vectors con 10 ele cada uno
// const int N = 10;
 
// void imprimir_vector(int vec[], int tam){
//     cout <<"[";
//     for(int i = 0; i < tam-1; i++){ //el -1 es una pavada para imprimirlo lindo
//         cout << vec[i]<<",";
//     }
//     cout << vec[tam-1] << "]";
// }

// int main(){
//     int vec_a[N] = {1,2,3,4,5,6,7,8,9,10};
//     int vec_b[N] = {2,2,2,2,2,2,2,2,2,2};

//     int vec_suma[N];
//     int pi_canonico[N];
    
//     for(int i = 0; i <N; i++){
//         vec_suma[i] = vec_a[i] + vec_b[i];
//         pi_canonico[i] = vec_a[i]*vec_b[i];
//     }
    
//     imprimir_vector(vec_suma, N);
//     cout <<endl;
//     imprimir_vector(pi_canonico, N);

// }


/*31)
Por cada alumno que rindió un examen de inglés se lee el número de padrón,
y la nota obtenida. Se desea saber la cantidad de alumnos que rindieron 
el examen y el porcentaje de alumnos que obtuvieron cada nota.
*/
//un vector xa notas y otro para alumnos
//Podria hacerse un con struct alumno.

// int const MAX_ALUMNOS = 100;
// int const SALIR = 0;

// void ingreso_datos(int padrones[], int notas[10], int &tot_al){
//     int opc =1;
//     while (opc!=SALIR){
//         tot_al +=1;

//         int padron = 0;
//         cout <<"Ingrese padron: ";
//         cin>>padron;
//         int nota = 0;
//         cout <<"Ingrese nota de "<< padron <<": ";
//         cin>>nota;

//         for (int i = 1; i <=10; i++){
//             if(nota == i){
//                 notas[i-1]+=1;   //+1 alumno q saco esa nota
//             }
//         }
//         cout<<"Otro? 1-Si 0-No: ";
//         cin >> opc;
//     }
// }

// int main(){

//     int padrones[MAX_ALUMNOS];
//     int notas[10] ={0,0,0,0,0,0,0,0,0,0}; //cada casillero corresponde a una nota del 1 al 10
//     int tot_al = 0;
//     int porcentajes[10]; //un casillero por % de notas 1 al 10
//     ingreso_datos(padrones, notas, tot_al);
    
//     for (int i=0; i<10; i++){
//         porcentajes[i] = ((float)notas[i]/tot_al)*100;
//     }

//     cout <<"Rindieron " <<tot_al<<" alumnos"<<endl;
//     cout<<"los porcentajes fueron: "<<endl;
//     for (int i = 1; i <=10; i++){
//         cout << i<<": "<< porcentajes[i-1] <<"%"<<endl;   //+ alumno q saco esa nota
//         }
//     }

//No se si habia una manera mucho mejor...