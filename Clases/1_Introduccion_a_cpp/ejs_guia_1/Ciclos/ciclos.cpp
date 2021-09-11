#include <iostream>
#include <string>

using namespace std;



/*13)
Imprimir  por  pantalla  una  lista  de  20  números  consecutivos, los 
cuales comienzan con un número ingresado por teclado.
*/
// int main(){
//     int num;
//     cout << "Ingrese un numero: ";
//     cin >> num;
//     for(int i=0; i <20; i++){
//         cout << num + i <<"-";
//     }
    
//     return 0;
// }



/*14)
Leer un número N y calcular su factorial. 
*/
// int factorial(int num){
//     if (num ==0){
//         return 1;
//     }
//     else{
//         //cout << factorial(num-1) <<endl;
//         return num*factorial(num-1);
//     }
// }

// int main(){
//     int num;
//     cout << "Ingrese un numero: ";
//     cin >> num;
    
//     cout << factorial(num);
    
//     return 0;
// }




/*15)
Leer una serie de números reales, terminando la serie con un cero. Imprimir los datos a 
medida que se los ingresa junto con la suma parcial de los mismos. 
*/
// int main(){
//     int num = 3;
//     cout << "Ingrese numeros, corte con 0: \n";
//     int tot = 0;
//     while (num != 0){
//         cin >> num;
//         tot += num;
//         cout <<"Ult numero: " << num <<endl
//         <<"Suma parcial: " << tot <<endl;
//     }

//     return 0;
// }




/*16)
Dada una serie de números reales, determinar el valor máximo, el mínimo y las 
posiciones en que estos se encontraban en la serie. El programa deberá ir 
preguntando si hay más números para ingresar.
*/
// const int SALIR = 0;

// int main(){
//     int hola = 0;
//     int num;
//     cout << "Ingrese numeros: ";
//     cin >> num;

//     int max = num;
//     int min = num;
    
//     cout <<"Desea ingresar mas numeros? 1-Si 0-No: "<<endl;
//     int opc;
//     cin >> opc;
    
//     int pos = 1;
//     int pos_max = pos;
//     int pos_min = pos;
    
//     while (opc !=SALIR){
//         cout << "Ingrese el " << pos + 1 << " numero: ";
//         cin >> num;
//         pos +=1;
//         if (num> max){
//             max = num;
//             pos_max = pos;
//         }
//         if (num < min ){
//             min = num;
//             pos_min = pos;
//         }

//         cout <<"Desea ingresar mas numeros? 1-Si 0-No: "<<endl;
//         cin >> opc;
//     }

//     cout << "el maximo fue " << max <<" en la posicion " << pos_max <<endl;
//     cout << "el minimo fue " << min <<" en la posicion " << pos_min;

//     return 0;
//     }
//Hubiese sido mas comodo, L-Gante y facil con un array



/*17)
Leer un valor N y luego N números enteros. Se pide imprimir el mayor y el menor
y las veces que aparece cada uno
*/
// void ingreso_num(int vec[10], int n){
//     cout << "Ingrese "<< n <<" numeros enteros"<<endl;
//     cout << "numero 1: ";
//     int num = 0;
//     cin >> num;
//     vec[0]=num;

//     for (int i = 1 ; i <n; i++){
//         cout << "numero "<< i+1 <<": ";
//         cin >> num;
//         vec[i]=num;
//     }
// }

// void max_min(int vec[10], int n, int &maxi, int &mini){
    
//     int num = vec[0];
//     maxi = num;
//     mini = num;

//     for (int i = 0 ; i < n; i++){
//         num = vec[i];
//         if (num> maxi){
//             maxi = num;
//         }
//         if (num < mini ){
//             mini = num;
//         }
//     }
// }    

// void contar_apariciones(int vec[10], int n, int maxi, int mini, int &apar_max, int &apar_min){
//     int num = 0;    
//     for (int i = 0 ; i < n; i++){
//         num = vec[i];
//         if (num == maxi){
//             apar_max += 1;
//         }
//         if (num == mini ){
//             apar_min +=1;
//         }
//     }
// }

// int main(){
    
//     int n = 0;
//     cout << "Ingrese un valor: ";
//     cin >> n;
//     int vec[n];
    
//     ingreso_num(vec, n);

//     int maxi;
//     int mini;
//     max_min(vec, n, maxi, mini);
    
//     int apar_max = 0;
//     int apar_min = 0;
//     contar_apariciones(vec,n, maxi, mini, apar_max, apar_min);

//     cout << "el maximo fue " << maxi <<" y aparecio " << apar_max <<" veces"<<endl;
//     cout << "el minimo fue " << mini <<" y aparecio " << apar_min <<" veces";
    
//     return 0;

// }