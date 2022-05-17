#include "lista_template.h"

using namespace std;

/* IMPLEMENTACION EN LISTAS
1) Método que, dadas dos posiciones, intercambia sus datos.
2) Método que une la lista original con otra que se pasa por parámetro, modificando a la
lista que llama. La lista pasada por parámetro va al final.
3) Método que une la lista original con otra que se pasa por parámetro y devuelve un
puntero a la nueva lista. La lista pasada por parámetro va al final.
4) Método que revierte la lista, modificándola (el último elemento pasa al primer lugar, etc).
5) Método que revierte la lista en una nueva lista, y devuelve un puntero de la misma.
6) Método que recibe una lista por parámetro, ambas (la original y la del parámetro) están
ordenadas, se hace un merge entre las dos, modificando la original, que tiene que quedar
ordenada y sin elementos repetidos. Para comparar se usa un método de Dato
(comparar), ejemplo a.comparar_con(b). Este método devuelve -1 si a es menor que b; 1,
si a es mayor que b; y 0 si son iguales.
7) Método que elimina un dato: se pasa un dato por parámetro y se elimina la primera
ocurrencia. Usar el método comparar. Si no lo encuentra no hace nada.
8) Método que elimina todas las ocurrencias del dato.
9) Método que recibe una lista por parámetro y devuelve un puntero a una nueva lista que
es A – B (los elementos de A que no están en B), donde A es la lista original y B es la del
parámetro.
*/

//Los metodos van dsps van definidos dsps del destructor e implementados al final de todo

int main(){
    
    //_________________________EJERCICIOS PDF - CLASE____________________________
    // 1) Insertar productos
    // Dadas las primitivas de listas vistas en clase, se pide escribir el método de instancia void 
    // insertarProductos() que inserte entre cada par de elementos de la lista, el producto de tales elementos.
    // Por ejemplo:
    // -Si la lista es [2,5,4,3], la lista debería quedar como [2,10,5,20,4,12,3].
    // -Si la lista es [3,3,3], la lista debería quedar como [3,9,3,9,3].
    // -Si la lista es [], la lista debería quedar como [].
    // -Si la lista es [4], la lista debería quedar como [4].
    // Lista<int>* numeros= new Lista<int>;

    // numeros -> alta(9);
    // numeros -> alta(3);
    // numeros -> alta(2);
    // numeros -> alta(10);

    // numeros ->insertar_productos();
    // numeros -> reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros -> siguiente() <<endl;
    // }

    //2) Continuos Divisibles
    //Dadas las primitivas de listas vistas en clase, decimos que un par de números (a, b) son contiguos 
    //divisibles en la lista si a aparece justo antes que b y a es divisible por b. De acuerdo a esta 
    //definición, se pide escribir el método de instancia 
    //void separarContiguosDivisibles() que por cada par (a, b) de contiguos divisibles de la lista, 
    //se agrega entre ellos el número a/b.
    //Por ejemplo:
    //-Si la lista es [20, 10, 6, 3], los pares de contiguos divisibles son (20,10) y (6,3), y por lo tanto la lista debería quedar como [20, 2, 10, 6, 2, 3].
    // -Si la lista es [20, 10, 2, 3], los pares de contiguos divisibles son (20,10) y (10,2), y por lo tanto la lista debería quedar como [20, 2, 10, 5, 2, 3].
    // -Si la lista es [7, 6, 2, 7, 6], el ́único par de contiguos divisibles es (6,2) con lo cual la lista debería quedar como [7, 6, 3, 2, 7, 6].
    // -Si la lista es [1, 1], el par (1,1) es de contiguos divisibles y por lo tanto la lista debería quedar como [1, 1, 1].
    // -Si la lista es [50, 5], el par (50,5) es de contiguos divisibles y por lo tanto la lista debería quedar como [50, 10, 5].
    // Notar que la nueva lista contiene el par de contiguos consecutivos (10,5), sin embargo,
    // este par no se separa por no ser parte de la lista original.
    
    // Lista<int>* numeros= new Lista<int>;

    // numeros -> alta(20);
    // numeros -> alta(10);
    // numeros -> alta(6);
    // numeros -> alta(3);
    // numeros -> alta(7);
    // numeros -> separar_contiguos_divisibles();
    // numeros -> reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros -> siguiente() <<endl;
    // }

    
    // 3) Eliminar Y Retornar Impares
    //Dadas las primitivas de listas vistas en clase se pide escribir el método de instancia 
    //que elimine de la lista original todos los elementos que se encuentren en posiciones impares y los 
    //retorne en una nueva lista manteniendo el orden entre los elementos.
    
    //----------OOOOOOOOOOOOJOOOOOOOOOOOOOOOO ARRANCA EN 0!!!!!!!!!!!!!!---
    
    //IMPLEMENTADO COMO SI ARRANCARA EN 1!!!!!!!!!!!

    // Por ejemplo:
    // -Si la lista es [2,5,4,3], la lista deber a quedar como [2,4] y debe devolver [5,3]
    // -Si la lista es [3,8,3], la lista deber a quedar como [3,3] y debe devolver [8]
    // -Si la lista es [], la lista deber a quedar como [] y debe devolver []
    // -Si la lista es [4], la lista deber a quedar como [4] y debe devolver []

    // Lista<int>* numeros= new Lista<int>;
    
    // numeros -> alta(2);
    // numeros -> alta(5);
    // numeros -> alta(4);
    // numeros -> alta(3);

    // numeros -> reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros -> siguiente() <<" ";
    // }
    // cout<<endl;
    // cout<<"elimino y retorno"<<endl;

    // Lista<int>* impares= new Lista<int>;    
    
    // impares = numeros -> eliminar_y_retornar_impares();

    // cout<<"original"<<endl;
    // numeros -> reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros -> siguiente() <<" ";
    // }
    // cout<<endl;
     
    // cout<<"impares"<<endl;
    // impares -> reiniciar();
    // while (impares -> hay_siguiente()){
    //     cout << impares -> siguiente() <<" ";
    // }


    //________________________EJERCICIOS MODELO SLACK____________________________

    // -------------- 1) Método que, dadas dos posiciones, intercambia sus datos. -----------
    
    // Lista<string>* palabras= new Lista<string>;
    // palabras->insertar("0",1);
    // palabras->alta("2");
    // palabras->alta("3");
    // palabras->alta("4");
    // palabras->insertar("1",2);
    
    // palabras->insertar("5",6);
    // palabras->insertar("6",7);

    // palabras->eliminar(1);
    // palabras -> reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras -> siguiente() <<endl;
    // }

    // cout<<"intercambio.."<<endl;
    // palabras->intercambiar(1,6);
    // palabras -> reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras -> siguiente() <<endl;
    // }        

    // ----- 2) Método que une la lista original con otra que se pasa por parámetro, modificando a la 
    // lista que llama. La lista pasada por parámetro va al final.  ------------

    // Lista<string>* palabras= new Lista<string>;
    // palabras->alta("1");
    // palabras->alta("2");
    // palabras->alta("3");
    // palabras->insertar("4",4);

    // Lista<string>* palabras_posta= new Lista<string>;
    // palabras_posta->alta("al final");
    // palabras_posta->alta("mas al final");
    // palabras_posta->alta("ultimaaa");
    
    // palabras ->colocar_al_final(palabras_posta);

    // cout<<"Palabras orig modificada:"<<endl;
    // while ( palabras -> hay_siguiente() ){
    //     cout<< palabras -> siguiente() <<endl;
    // }
    
    // cout<<"___Palabras posta:____"<<endl;
    // while ( palabras_posta-> hay_siguiente() ){
    //     cout<< palabras_posta -> siguiente() <<endl;
    // }
    
    
    //3) -------- Metodo que une la lista original con otra que se pasa por parámetro y devuelve un
    //puntero a la nueva lista. La lista pasada por parámetro va al final. -------------

    // Lista<string>* palabras= new Lista<string>;
    // palabras->alta("1");
    // palabras->alta("2");
    // palabras->alta("3");
    // palabras->insertar("4",4);
    
    // Lista<string>* palabras_posta= new Lista<string>;
    // palabras_posta->alta("al final");
    // palabras_posta->alta("mas al final");
    // palabras_posta->alta("ultimaaa");
    
    // Lista<string>* palabras_nueva= new Lista<string>;

    // palabras_nueva = palabras -> colocar_al_final_y_obtener_nueva(palabras_posta);

    // cout<<"palabras orishinal"<<endl;
    // palabras -> reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras->obtener_siguiente()->obtener_dato() <<endl;
    // }
    // cout<<"lista nueva con coloco al final"<<endl;
    
    // palabras_nueva -> reiniciar();
    // while (palabras_nueva -> hay_siguiente()){
    //     cout << palabras_nueva->obtener_siguiente()->obtener_dato() <<endl;
    // }
    // cout<<"___palabras posta q agregue___"<<endl;
    
    // palabras_posta -> reiniciar();
    // while (palabras_posta -> hay_siguiente()){
    //     cout << palabras_posta->obtener_siguiente()->obtener_dato() <<endl;
    // }
    

    //4) -------- Método que revierte la lista, modificándola (el último elemento pasa al primer lugar, etc).
    // In place ----------------------------------------------------

    //Lista<string>* palabras= new Lista<string>;
    // palabras->alta("1");
    // palabras->alta("2");
    // palabras->alta("3");
    // palabras->insertar("0",1);
    
    // palabras -> reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras -> obtener_siguiente()->obtener_dato() <<endl;
    // }

    // palabras -> revertir();
    
    // cout<<"reverti"<<endl;
    // palabras->reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras->obtener_siguiente()->obtener_dato() <<endl;
    //}
    
    //5) Método que revierte la lista en una nueva lista, y devuelve un puntero de la misma.    
    
    // Lista<string>* palabras= new Lista<string>;
    // palabras->alta("1");
    // palabras->alta("2");
    // palabras->alta("3");
    // palabras->insertar("0",1);

    // Lista<string>* palabras_revertida_nueva = palabras ->revertir_y_obtener_nueva();
    
    // palabras->reiniciar();
    // while (palabras -> hay_siguiente()){
    //     cout << palabras -> siguiente() <<endl;
    // }

    // cout<<"reverti"<<endl;
    
    // palabras->reiniciar();
    // while (palabras_revertida_nueva -> hay_siguiente()){
    //     cout << palabras_revertida_nueva -> siguiente() <<endl;
    // }
    
    // 6) Método que recibe una lista por parámetro, ambas (la original y la del parámetro) están
    // ordenadas, se hace un merge entre las dos, modificando la original, que tiene que quedar
    // ordenada y sin elementos repetidos. Para comparar se usa un método de Dato
    // (comparar), ejemplo a.comparar_con(b). Este método devuelve -1 si a es menor que b; 1,
    // si a es mayor que b; y 0 si son iguales.
    
    // Lista<int>* numeros= new Lista<int>; 
        
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(1,1);
    // numeros->insertar(2,2);
    // numeros->alta(3);
    // numeros->alta(3);
    // numeros->alta(3);
    // numeros->alta(3);
    // numeros->alta(3);
    // numeros->alta(3);
    // numeros->alta(4);
    // numeros->alta(5);
    
    // Lista<int>* numeros_2 = new Lista<int>;    
    // numeros_2->insertar(1,1);
    // numeros_2->insertar(1,1);
    // numeros_2->insertar(1,1);
    // numeros_2->alta(2);
    // numeros_2->alta(3);
    // numeros_2->alta(4);
    // numeros_2->alta(5);        

    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->obtener_siguiente()->obtener_dato() <<endl;
    // }
    
    // numeros->unifica_y_ordena(numeros_2);
    
    // cout<<"numeros_2"<<endl;
    // numeros_2 ->reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2->siguiente() <<endl;
    // }
    
    // cout<<"numeros_final"<<endl;
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->obtener_siguiente()->obtener_dato() <<endl;
    // }

    // 7) Método que elimina un dato: se pasa un dato por parámetro y se elimina la primera
    //ocurrencia. Usar el método comparar. Si no lo encuentra no hace nada.

    // Lista<int>* numeros = new Lista<int>;    
    // numeros->insertar(5,1);
    // numeros->alta(4);
    // numeros->alta(5);
    // numeros->alta(4);
    // numeros->alta(5);
    // numeros->alta(5);
    // numeros->alta(7);

    // numeros->reiniciar();
    // cout<<"numeros_antes"<<endl;
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->siguiente() <<" ";
    // }
    // cout<<endl;
    // numeros->eliminar_primera_ocurrencia_dato(4);

    // cout<<"numeros_dsps"<<endl;
    
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->siguiente() <<" ";
    // }

    //8) Método que elimina todas las ocurrencias del dato.
    
    // Lista<int>* numeros = new Lista<int>;    
    // numeros->insertar(5,1);
    // numeros->alta(4);
    // numeros->alta(4);
    // numeros->alta(5);
    // numeros->alta(4);
    // numeros->alta(4);
    // numeros->alta(5);
    // numeros->insertar(1,1);

    // numeros->reiniciar();
    // cout<<"numeros_antes"<<endl;
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->obtener_siguiente()->obtener_dato() <<endl;
    // }
    
    // // numeros->eliminar_todas_ocurrencias_dato(4);
    // // numeros->eliminar_todas_ocurrencias_dato(5);
    // numeros->eliminar_todas_ocurrencias_dato(1);

    // cout<<"numeros_dsps"<<endl;
    
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->obtener_siguiente()->obtener_dato() <<endl;
    // }
    // numeros->reiniciar();
    // if (!numeros -> hay_siguiente() ) {
    //     cout<<"vacia"<<endl;
    // }

    //9) Método que recibe una lista por parámetro y devuelve un puntero a una nueva lista que
    //es A – B (los elementos de A que no están en B), donde A es la lista original y B es la del
    //parámetro.

    //Lista<int>* numeros = new Lista<int>;    
    // numeros->insertar(7,1);
    // numeros->alta(7);
    // numeros->alta(7);
    // numeros->alta(7);
    // numeros->alta(7);
    // // numeros->insertar(1);
    // // numeros->insertar(1);
    // // numeros->insertar(2);

    // Lista<int>* numeros_2 = new Lista<int>;    
    // numeros_2->alta(1);
    // numeros_2->alta(5);
    // numeros_2->alta(3);
    // numeros_2->alta(4);
    // numeros_2->alta(2);
    // numeros_2->alta(7);    
    
    // Lista<int>* numeros_nuevo = new Lista<int>;    
    // numeros_nuevo = numeros -> restar_elementos_lista(numeros_2); 

    // numeros->reiniciar();
    // cout<<"numeros_1: "<<endl;
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->obtener_siguiente()->obtener_dato() <<", ";
    // }
    // cout<<endl;
    // cout<<"numeros_2: "<<endl;
    // numeros_2->reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2->obtener_siguiente()->obtener_dato() <<", ";
    // }
    // cout<<endl;
    // cout<<"numeros_nueva: "<<endl;
    // while (numeros_nuevo -> hay_siguiente()){
    //     cout << numeros_nuevo->obtener_siguiente()->obtener_dato() <<", ";
    // }
    // numeros_nuevo->reiniciar();
    // if (!numeros_nuevo -> hay_siguiente() ) {
    //     cout<<"vacia"<<endl;
    // }
    

    //_________________________ EJERCICIOS FINAL______________________________

    //FINAL
    
    //________________UNIR__________________________________

    // Lista<int>* numeros= new Lista<int>; 

    // numeros->insertar(1,1);
    // numeros->alta(2);
    // numeros->alta(3);
    // numeros->alta(4);
    // numeros->alta(5);

    // Lista<int>* numeros_2 = new Lista<int>; 

    // numeros_2 -> alta(132);
    // numeros_2 -> insertar(13,2);
    
    // numeros -> unir (numeros_2);

    // cout<<"numeros"<<endl;
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->siguiente()<<" ";
    // }
    
    // cout<<endl;
    
    // cout<<"numeros_2"<<endl;
    // numeros_2 -> reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2 -> siguiente()<<" ";
    // }
    // cout<<endl;

    //________________________________ INCLUYE______________________________
    // Lista<int>* numeros= new Lista<int>; 

    // numeros->insertar(1,1);
    // numeros->alta(2);
    // numeros->alta(2);
    // numeros->alta(4);
    // numeros->alta(5);
    // numeros->alta(5);
    // numeros->alta(3);

    // Lista<int>* numeros_2 = new Lista<int>; 

    // numeros_2 -> alta(2);
    // numeros_2 -> alta(2);
    // numeros_2 -> insertar(4,3);
    // numeros_2 -> insertar(5,4);
    // numeros_2 -> insertar(5,5);
    // //numeros_2 -> insertar(3,3);
    
    // bool esta = numeros -> incluye(numeros_2);

    // if (esta){
    //     cout<<"INCLUYE"<<endl;
    // }
    // else{
    //     cout<<"NO INCLUYE";
    // }
    // cout<<endl;

    // cout<<"numeros"<<endl;
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->siguiente()<<" ";
    // }
    
    // cout<<endl;
    
    // cout<<"numeros_2"<<endl;
    // numeros_2 -> reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2 -> siguiente()<<" ";
    // }
    // cout<<endl;


    //_______________________ revertir_final ____________________________

    // Lista<int>* numeros_2 = new Lista<int>; 

    // numeros_2 -> alta(1);
    // numeros_2 -> alta(2);
    // numeros_2 -> insertar(3,3);
    // numeros_2 -> insertar(4,4);
    // numeros_2 -> insertar(5,5);

    // cout<<"numeros_2"<<endl;
    // numeros_2 -> reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2 -> siguiente()<<" ";
    // }
    // cout<<endl;

    // numeros_2 ->revertir_final();


    // cout<<"numeros_2"<<endl;
    // numeros_2 -> reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2 -> siguiente()<<" ";
    // }

    //_______________________ PRUEBAS VARIAS _______________________________

    //Lista<int>* numeros= new Lista<int>; 
    
    // Lista<int> numeros;

    // numeros.alta(1);

    // Lista<int> numeros_2 = numeros;

    // //numeros_2 = numeros;

    // numeros_2.alta(2);

    // cout<<"numeros "<<endl;
    // numeros.reiniciar();
    // while (numeros.hay_siguiente()){
    //     cout << numeros.siguiente()<<" ";
    // }
    
    // cout<<endl;
    
    // cout<<"numeros_2"<<endl;
    // numeros_2.reiniciar();
    // while (numeros_2.hay_siguiente()){
    //     cout << numeros_2.siguiente()<<" ";
    // }

    // numeros->insertar(1,1);
    // numeros->alta(2);
    // numeros->alta(3);
    // numeros->alta(4);
    // numeros->alta(5);

    //Lista<int>* numeros_2 = new Lista<int>; 

    
    // ///___________NO FUNCIONA!!!!!!!!!! ___________________
    // numeros_2 = numeros;

    // numeros_2 -> alta(100);

    // cout<<"numeros"<<endl;
    // numeros->reiniciar();
    // while (numeros -> hay_siguiente()){
    //     cout << numeros->siguiente()<<" ";
    // }
        
    // cout<<endl<<"numeros_2"<<endl;

    // numeros->reiniciar();
    // while (numeros_2 -> hay_siguiente()){
    //     cout << numeros_2 -> siguiente() <<" ";
    // }
    // cout<<"end"<<endl;

    // return 0;   
}