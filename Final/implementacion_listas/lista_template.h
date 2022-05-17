#ifndef _LISTA_TEMPLATE_H_
#define _LISTA_TEMPLATE_H_

#include "nodo_template.h"
#include <iostream>

using namespace std;

template <typename Dato>

class Lista {

private:
    // ATRBUTOS

    // NODOS LISTA COMUN
    Nodo<Dato>* primero;
    Nodo<Dato>* ultimo;
    Nodo<Dato>* actual;
    Nodo<Dato>* anterior;

    int longitud;

public:
    // CONSTRUCTOR
    // PRE: -
    // POST: crea una lista vacia
    Lista();

    // Constructor de copia
    // PRE: lista es una Lista valida
    // POS: crea una Lista igual a lista
    Lista (const Lista<Dato>& lista);

    // PRE: -Recibe un dato d
    // POST: da de alta un nuevo elemento al final de la lista
    void alta(Dato d);

    // PRE: 0 < pos <long
    // POST: elimina el elemento de la posicion pos de la lista
    void eliminar(int pos);

    // PRE: -
    // POST: devuelve true si la lista está vacia
    bool esta_vacia();

    // devuelve el dato en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: devuelve el dato que esta en la posicion pos (la 1 es la primera)
    Dato obtener_dato(int pos);

    // PRE: -
    // POST: devuelve la longitud de la lista, es decir, la cantidad de 
    //elementos de la lista
    int obtener_longitud();

    // PRE: -
    // POST: devuelve el nodo actual
    Nodo<Dato>* obtener_nodo_actual();

    // consulta si hay un elemento siguiente (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si el actual no apunta a NULL, false de lo contrario
    bool hay_siguiente();

    // devuelve el siguiente elemento (el dato que esta en actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el dato que hay en actual y avanza.
    Dato siguiente();

    // devuelve el siguiente nodo (el nodo que apunta actual)
    // PRE: hay_siguiente tiene que haber devuelto true previamente
    // POS: devuelve el nodo actual y avanza
    Nodo<Dato>* obtener_siguiente();

    // consulta si hay un elemento anterior (si el actual no apunta a NULL)
    // PRE:
    // POS: devuelve true si anterior no apunta a NULL, false de lo contrario
    bool hay_anterior();

    // PRE: -
    // POST: devuelve el nodo anterior
    Nodo<Dato>* obtener_anterior();

    // reinicia el puntero actual a la primera posición (o nulo si la lista es vacía).
    // PRE:
    // POS: pone el puntero a la primera posición o apuntando a NULL
    void reiniciar();

    // PRE: -
    // POST: avanza
    void avanzar();

    // DESTRUCTOR
    ~Lista();
    
    // insertar un dato en cierta posicion
    // PRE: d dato valido y 0 < pos <= longitud + 1
    // POS: inserta el Dato d en la posicion pos (la 1 es la primera),
    //      inrementa en 1 la longitud
    void insertar(Dato d, int pos);

    
    // cambia el dato que esta en cierta posicion
    // PRE: 0 < pos <= longitud
    // POS: cambia el dato que esta en la posicion pos (la 1 es la primera)
    void cambiar_dato(Dato d, int pos);

    //_________________________EJERCICIOS PDF - CLASE______________________________________
    // INSERTAR PRODUCTOS
    // PRE: -
    // POS: Dadas las primitivas de listas vistas en clase, se pide escribir el método de instancia void 
    //insertarProductos() que inserte entre cada par de elementos de la lista, el producto de tales elementos.
    void insertar_productos();

    // CONTINUOS DIVISIBLES
    // PRE: -
    // POS:
    // Decimos que un par de números (a, b) son contiguos divisibles en la lista si a aparece justo antes que b y a es divisible por b.
    // Por cada par (a, b) de contiguos divisibles de la lista, agrega entre ellos el número a/b a%b == 0
    void separar_contiguos_divisibles();

    
    // ELIMINAR Y RETORNAR IMPARES
    // PRE:
    // POS: Elimine de la lista original todos los elementos que se encuentren en posiciones impares y los 
    //retorne en una nueva lista manteniendo el orden entre los elementos.
    Lista<Dato>* eliminar_y_retornar_impares();


    //_________________________ EJERCICIOS MODELOS_________________________________________

    // 1 - Metodo que, dadas dos posiciones, intercambia sus datos.
    // PRE: Recibe 2 enteros pos_1 y pos_2 con las 2 posiciones que se desea intercambiar
    // 0 < pos < longitud
    // POS: Intercambia los datos de las posiciones que recibio
    void intercambiar(int pos_1, int pos_2);

    // 2 - Método que une la lista original con otra que se pasa por parámetro, modificando a la
    // lista que llama. La lista pasada por parámetro va al final. Es in place
    void colocar_al_final(Lista<Dato>* lista_al_fnal);

    // 3 - Método que une la lista original con otra que se pasa por parámetro y devuelve un
    // puntero a la nueva lista. La lista pasada por parámetro va al final.
    //La lista original queda intacta. 
    //Se crea una nueva lista q tiene la nueva al final y se deveulve esta nueva lista creada
    //La lista que va al final tambien queda intacta
    Lista<Dato>* colocar_al_final_y_obtener_nueva(Lista<Dato>* lista_al_fnal);    
    
    //4 - Método que revierte la lista, modificándola (el último elemento pasa al primer lugar, etc).
    //es in place
    //PRE:
    //POS: Revierte la lista inplace
    void revertir();

    //5 - Método que revierte la lista en una nueva lista, y devuelve un puntero de la misma.
    //PRE: -
    //POS: Revierte la lista devolviendola en una nueva. Quedan 2 listas, la vieja q queda como
    //estaba y la nueva q es la vieja revertida
    Lista<Dato>* revertir_y_obtener_nueva();

    //6 - Método que recibe una lista por parámetro, ambas (la original y la del parámetro) están
    // ordenadas, se hace un merge entre las dos, modificando la original, que tiene que quedar
    // ordenada y sin elementos repetidos. Para comparar se usa un método de Dato
    // (comparar), ejemplo a.comparar_con(b). Este método devuelve -1 si a es menor que b; 1,
    // si a es mayor que b; y 0 si son iguales.
    //______________________________________________________________________________________________________
    //REVISAR (VER MEJOR OPCION XA ORDENAR, YA SE Q FUNCA) !!!!!!!!!!!!!!!!!!!
    void unifica_y_ordena(Lista<Dato>* lista_parametro);

    // PRE: - 
    // POS: Elimina todos los elementos repetidos (deja solo una aparicion de los mismos)
    void eliminar_repetidos();

    // PRE: - 
    // POS: Ordena la lista de menor a mayor
    void ordenar_de_min_a_max();

    // 7 - Método que elimina un dato: se pasa un dato por parámetro y se elimina la primera
    //ocurrencia. Usar el método comparar. Si no lo encuentra no hace nada.
    //PRE: Recibe un dato por parametro
    //POS: Elimina la primera ocurrencia de ese dato y se usa el metodo comparar. Si no lo
    //encuentra no hace nada
    void eliminar_primera_ocurrencia_dato(Dato d);

    //8 - Método que elimina todas las ocurrencias del dato.
    //PRE: Recibe un dato por parametro
    //POS: Elimina todas las ocurrenciaas de ese dato y se usa el metodo comparar. Si no lo
    //encuentra no hace nada
    void eliminar_todas_ocurrencias_dato(Dato d);

    // 9 - Método que recibe una lista por parámetro y devuelve un puntero a una nueva lista que
    // es A - B (los elementos de A que no están en B), donde A es la lista original y B es la del
    // parámetro.
    //PRE: La lista original 'A' recibe una lista 'B' por parametro
    //POST: Devuelve un ptro a una nueva lista que es A - B (Los elementos de A que no estan en B)
    //Los de la original - los de la parametro
    //Con que haya una sola aparicion en B de un elemento de A, este ya no va a la nueva.
    Lista<Dato>* restar_elementos_lista(Lista<Dato>* l);

    void unir(Lista<Dato>*lista);

    //POST: Recibe una lista por parametro e indica si esta
    // incluida (devuelve true) o no (devuelve false) en la lista
    //que llama al metodo
    //Para comparar se usa el siguiente metodo
    //a.comparar(b)
    //DEevyelve blabla es con datos
    bool incluye(Lista<Dato> *lista);


    /*
    PRE: no recibe nada
    POST: Revierte la lista ( la modifica). El ultimo elemento pasa al
    primer lugar, el penultimo al segundo etc
    */
    void revertir_final();

private:
    //devuelve un puntero al Nodo en cierta posicion
    //PRE: 0 < pos <= longitud
    //POS: devuelve un puntero al Nodo que esta en la posicion pos (la 1 es la primera)
    Nodo<Dato>* obtener_nodo(int pos);
};


template <typename Dato>
Lista<Dato>::Lista() {
    primero = nullptr;
    actual = nullptr;
    longitud = 0;
    ultimo = nullptr;
    anterior = nullptr;
}

//constructor de copia

//Jorge
// Lista::Lista(const Lista &list){

// 	cantidad = list.cantidad;
// 	primero = new Nodo(list.primero -> obtener_dato());
// 	Nodo* anterior_original = list.primero;
// 	Nodo* anterior = primero;

// 	if (cantidad != 1){

// 		for(int i = 1; i < cantidad; i++){

// 			Nodo* siguiente = new Nodo(anterior_original -> obtener_siguiente() -> obtener_dato());
// 			anterior -> cambiar_siguiente(siguiente);
// 			anterior = anterior -> obtener_siguiente();
// 			anterior_original = anterior_original -> obtener_siguiente();
// 		}
// 	}
// 	cout << "constructor de copia" << endl;
// }

//constructor de copia
// template <typename Dato>
// Lista<Dato>::Lista(const Lista<Dato>& lista){

//     cout << "constructor de copia" << endl;
	
//     longitud = lista.longitud;
// 	primero = new Nodo<Dato>(lista.primero -> obtener_dato());
//     ultimo = new Nodo<Dato>(lista.ultimo -> obtener_dato());
// 	Nodo<Dato>* anterior_original = lista.primero;
// 	Nodo<Dato>* anterior = primero;

// 	if (longitud != 1){

// 		for(int i = 1; i <= longitud; i++){

// 			Nodo<Dato>* siguiente = new Nodo<Dato>(anterior_original -> obtener_siguiente() -> obtener_dato());
// 			anterior -> cambiar_siguiente(siguiente);
// 			anterior = anterior -> obtener_siguiente();
// 			anterior_original = anterior_original -> obtener_siguiente();
// 		}
// 	}
// }

template <typename Dato>
void Lista<Dato>::alta(Dato d){

    Nodo<Dato>* nuevo_nodo = new Nodo<Dato>(d);
    
    // Si la lista esta vacia    
    if(primero == nullptr){

        nuevo_nodo -> cambiar_siguiente(primero);
        primero = nuevo_nodo;
        actual = primero;
        ultimo = actual;
    }

    //Si la lista no esta vacia
    else{
        //PARA LISTA (DE)
        Nodo<Dato>* anterior = ultimo;

        //coloco sig al anteultimo
        anterior->cambiar_siguiente(nuevo_nodo);
        
        //coloco anterior al nuevo (DE)
        nuevo_nodo->cambiar_anterior(ultimo);   
        ultimo = nuevo_nodo;
    }
    longitud++;

    // cout<<"primero: "<<primero->obtener_dato()<<endl;
    // if (primero->obtener_siguiente()){
    //     cout<<"sig del primero: "<<primero->obtener_siguiente()->obtener_dato()<<endl;
    // }
    // if (ultimo->obtener_anterior()){
    // cout<<"anterior del ultimo: "<<ultimo->obtener_anterior()->obtener_dato()<<endl;
    // }
    // cout<<"ultimo: "<<ultimo->obtener_dato()<<endl;
    // if (ultimo->obtener_siguiente()){
    //     cout<<"sig del ultimo: "<<ultimo->obtener_siguiente()->obtener_dato()<<endl;
    // }

}

template <typename Dato>
void Lista<Dato>::eliminar(int pos) {

    Nodo<Dato>* eliminado = primero;

    if (pos == 1){
        primero = eliminado->obtener_siguiente();
        if(primero != nullptr){ // si no hay un unico numero
            primero ->cambiar_anterior(nullptr);
        }
    }
    else if (pos == longitud){
        eliminado = ultimo;
        ultimo = ultimo -> obtener_anterior();
        ultimo->cambiar_siguiente(nullptr);
    }
    else {
        Nodo<Dato>* anterior = obtener_nodo(pos - 1);
        eliminado = anterior -> obtener_siguiente();
                
        //le pongo siguiente al anterior del borrado (si no es el primero, no es pos ==1)
        anterior -> cambiar_siguiente(eliminado -> obtener_siguiente() ); 
        
        //le pongo anterior al siguiente del borrado SI NO ES ULTIMO
        eliminado -> obtener_siguiente() -> cambiar_anterior(anterior);
    }
    longitud--;

    //cout<<"sig ult: "<<ultimo -> obtener_siguiente()->obtener_dato()<<endl;
    delete eliminado;
    eliminado = nullptr;

    //CORROBORAR
    // if (primero->obtener_anterior()){
    //     cout<<"ant del primero: "<<primero->obtener_anterior()->obtener_dato()<<endl;
    // }
    // cout<<"primero: "<<primero->obtener_dato()<<endl;
    // if (primero->obtener_siguiente()){
    //     cout<<"sig del primero: "<<primero->obtener_siguiente()->obtener_dato()<<endl;
    // }
    // if (ultimo->obtener_anterior()){
    // cout<<"anterior del ultimo: "<<ultimo->obtener_anterior()->obtener_dato()<<endl;
    // }
    // cout<<"ultimo: "<<ultimo->obtener_dato()<<endl;
    // if (ultimo->obtener_siguiente()){
    //     cout<<"sig del ultimo: "<<ultimo->obtener_siguiente()->obtener_dato()<<endl;
    // }
    
}

template <typename Dato>
bool Lista<Dato>::esta_vacia() {

    return (longitud == 0);
}

template <typename Dato>
Dato Lista<Dato>::obtener_dato(int pos) {

    Nodo<Dato>* aux = obtener_nodo(pos);
    return aux -> obtener_dato();
}

template <typename Dato>
int Lista<Dato>::obtener_longitud() {

    return (longitud);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_nodo_actual() {

    return actual;
}

template <typename Dato>
bool Lista<Dato>::hay_siguiente() {

    return (actual != nullptr);
}

template <typename Dato>
Dato Lista<Dato>::siguiente() { 
    
    Nodo<Dato>* nodo_siguiente = obtener_siguiente();
    Dato elemento = nodo_siguiente ->obtener_dato();
    
    return elemento;
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_siguiente() {

    anterior = actual;
    Nodo<Dato>* aux = actual;
    actual = actual->obtener_siguiente();

    return aux;
}

template <typename Dato>
bool Lista<Dato>::hay_anterior() {

    return (anterior != nullptr);
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_anterior(){

    return anterior -> obtener_anterior();

}

template <typename Dato>
void Lista<Dato>::reiniciar(){

    actual = primero;
    anterior = nullptr;
}


template <typename Dato>
void Lista<Dato>::avanzar() {

    anterior = actual;
    actual = actual -> obtener_siguiente();

}

template <typename Dato>
Lista<Dato>::~Lista() {

    while ( !esta_vacia() ) {
        eliminar(1);
    }
}

template <typename Dato>
Nodo<Dato>* Lista<Dato>::obtener_nodo(int pos) {

    Nodo<Dato>* aux = primero;
    for(int i = 1; i < pos; i++)
        aux = aux -> obtener_siguiente();
    
    return aux;
}

template <typename Dato>
void Lista<Dato>::insertar(Dato d, int pos){   

    Nodo<Dato> * nuevo = new Nodo<Dato>(d);
    Nodo<Dato> * siguiente = primero;

    // si lo quiero insertar en la primera posicion

    if ( pos == 1){
        primero = nuevo;
        actual = primero;

        // (DE)
        if ( !esta_vacia()){  //Si hay al menos un elemento, tengo que cambiarle el anterior
            siguiente -> cambiar_anterior(nuevo);
        }
        else{
            ultimo = nuevo;
        }
    }
    // si lo quiero insertar en cualquier otro lado
    else {
        Nodo<Dato> * anterior = obtener_nodo(pos - 1); //encuentro el anterior
        siguiente = anterior -> obtener_siguiente(); //encuentro el siguiente
        anterior->cambiar_siguiente(nuevo); //le cambio el sig al anterior
        
        //coloco anterior al nuevo (DE)
        nuevo->cambiar_anterior(anterior); 
        
        //Si no lo agrego al final (Para dar de alta en longitud + 1, como si fuera insertar)
        //le pongo anterior al siguiente (DE)
        if ( pos != longitud +1){    
            siguiente -> cambiar_anterior(nuevo); //le cambio el anterior al siguiente 
        }
        else{
            //Si fue a la ultima posicion (DE)
            ultimo = nuevo;
        }

    }
    nuevo -> cambiar_siguiente(siguiente); // le coloco el sig al actual
    longitud++;

    //CORROBORAR
    // if (primero->obtener_anterior()){
    //     cout<<"anterior del primero: "<<primero->obtener_anterior()->obtener_dato()<<endl;
    // }
    // if (obtener_nodo(2)){
    //     cout<<"anterior del segundo: "<<obtener_nodo(2)->obtener_anterior()->obtener_dato()<<endl;
    // }
    
    // cout<<"primero: "<<primero-> obtener_dato()<<endl;
    
    // if (primero->obtener_siguiente()){
    //     cout<<"sig del primero: "<<primero->obtener_siguiente()->obtener_dato()<<endl;
    // }

    // if (ultimo->obtener_anterior()){
    //     cout<<"anterior del ultimo: "<<ultimo->obtener_anterior()->obtener_dato()<<endl;
    // }
    
    // cout<<"ultimo: "<<ultimo->obtener_dato()<<endl;
    // if (ultimo->obtener_siguiente()){
    //     cout<<"sig del ultimo: "<<ultimo->obtener_siguiente()->obtener_dato()<<endl;
    // }
}

template<typename Dato>
void Lista<Dato>::cambiar_dato(Dato d, int pos){
    
    obtener_nodo(pos) -> cambiar_dato(d);

}


//_________________________EJERCICIOS PDF - CLASE __________________________________

template<typename Dato>
void Lista<Dato>::insertar_productos(){
    //Voy avanzando de a 2 porque salto al q esta insertando. Se ejecuta siempre y cuando dsps de 
    //avanzar si sumo 1 queda dentro de la lista
    for (int pos = 1; pos+1 <= longitud; pos+=2 ){
        //Hago el prodcuto y el alta
        insertar( obtener_dato(pos) * obtener_dato(pos+1), pos+1 );
    }
}  


template<typename Dato>
void Lista<Dato>::separar_contiguos_divisibles(){
    
    // solucion pibardos
    // int anterior;
    // int posterior;
    // int pos = 1;
    // while (pos + 1 <= longitud){

    //     anterior = obtener_dato(pos);
    //     posterior = obtener_dato(pos + 1);
        
    //     if ( (anterior % posterior) == 0){
    //         alta( anterior / posterior, pos + 1 );
    //         pos +=2;
    //     }
    //     else{
    //         pos++;
    //     }
    // }

    //solucion profe
    for ( int pos = 1; (pos <= longitud) && (pos + 1 <= longitud); pos +=1){
        //(Se controla si la lista tiene longitud par o impar)
        if ( ( obtener_dato(pos) % obtener_dato(pos + 1) ) == 0 ){
            
            insertar(obtener_dato(pos) / obtener_dato(pos + 1), pos+1);
            pos+=2;
            //solo avanzo de a 2 si fueron divisibles los continuos
        }
    }

}


template<typename Dato>
Lista<Dato>* Lista<Dato>::eliminar_y_retornar_impares(){
    Lista<int> * impares = new Lista<int>;

    int pos = 1; //cont de posicion "real", en q pos estoy parado respecto a la que modifico
    //int pos = 1; //si tomo pos 0...
    int cont = 1;    //un cont para moverme en la original tal cual vino. Cant de elementos totales
    //int cont = 0; //si tomo pos 0...
    
    int pos_impares = 1; //y el pos_impares xa la de impares
    //(suponiendo que no tengo insertar al final )
    int cantidad = longitud;     
    //Neceito guardar la longitud original xq se modifica mi lista al sacar impares
    
    // si arranco en 0
    while ( cont<= cantidad ){
        //Cicla tantas veces como la longitud de la lista

        if ( cont%2 != 0 ){ //si me paro sobre un no par (impar) tomo como q la pos 1 es 0 en realidad
            impares -> alta( obtener_dato(pos) ); //+1 si arranco en 0
            
            //impares -> alta( obtener_dato(pos), pos_impares );
            //pos_impares ++;

            eliminar(pos);  //pos+1 si arranco en 0
            //no avanzo pos xq lo saque. "se incrementa solito". El prox va a estar en posicion pos
        }
        else{
            //Si no fue impar sigo avanzando en la actual xq no elimine nada
            pos++;
        }
        //en clqr caso me sigo moviendo sobre la original para recorrer todos los numeros
        //simplemente me sirve para manejar pares e impares. Hace uno si uno no.
        cont++;
    }

    return impares;
}


template<typename Dato>
void Lista<Dato>::intercambiar(int pos_1, int pos_2) {
    //Guardo dato pos 1
    Dato aux_dato_1 = obtener_dato(pos_1);
    
    //Coloco el dato de la pos 2 en la pos 1
    cambiar_dato(obtener_dato(pos_2), pos_1);

    //Coloco el dato de la pos 1 en la pos 2
    cambiar_dato(aux_dato_1, pos_2);
}

template<typename Dato>
void Lista<Dato>::colocar_al_final(Lista<Dato>* lista_al_fnal){
    
    for(int i=1; i<= lista_al_fnal->obtener_longitud(); i++ ){
        Dato dato = lista_al_fnal -> obtener_dato(i);        
        alta(dato); //en la original
    }
}

template<typename Dato>
Lista<Dato>* Lista<Dato>::colocar_al_final_y_obtener_nueva(Lista<Dato>* lista_al_fnal){
    
    Lista<Dato> *lista_nueva = new Lista<Dato>;
    
    for (int i=1; i<=longitud;i++){
        //Cargo la lista a obtener con la original
        lista_nueva -> alta( obtener_dato(i) );
    }

    //le agrego la que va al final
    lista_nueva -> colocar_al_final(lista_al_fnal);

    return lista_nueva;
}   

template<typename Dato>
void Lista<Dato>::revertir(){
    
    //inicializar actual, anterior y siguiente
    
    ultimo = primero;
    actual = primero;
    
    Nodo<Dato>* siguiente = nullptr;
    Nodo<Dato>* anterior = nullptr;

    reiniciar();
    while ( hay_siguiente() ) {
        // guardo el siguiente
        siguiente = actual -> obtener_siguiente();
                        
        // doy vuelta el siguiente del actual
        actual -> cambiar_siguiente(anterior);
        
        //doy vuelta el anterior del actual
        //DE
        actual-> cambiar_anterior(siguiente);
        
        // Avanzo (No me sirve funcion porque cambie el siguiente y el anterior)
        anterior = actual;
        actual = siguiente;
    }

    primero = anterior;


    //______ALTERNATIVA FRAN SOBRAL_________
    // cout<<"================================"<<endl;
    // int tam = obtener_longitud();

    // for (int i=1; i<=(tam/2);i++){

    //     intercambiar(i, tam-(i-1));
        
    //     //FRAN CON SU LISTILLA:
    //     //intercambiar(i, tam-(i+1));
    // }

    // if (primero->obtener_anterior()){
    //     cout<<"ant del primero: "<<primero->obtener_anterior()->obtener_dato()<<endl;
    // }
    // cout<<"primero: "<<primero->obtener_dato()<<endl;
    // if (primero->obtener_siguiente()){
    //     cout<<"sig del primero: "<<primero->obtener_siguiente()->obtener_dato()<<endl;
    // }
    // if (ultimo->obtener_anterior()){
    //     cout<<"anterior del ultimo: "<<ultimo->obtener_anterior()->obtener_dato()<<endl;
    // }
    // cout<<"ultimo: "<<ultimo->obtener_dato()<<endl;
    // if (ultimo->obtener_siguiente()){
    //     cout<<"anterior del ultimo: "<<ultimo->obtener_siguiente()->obtener_dato()<<endl;
    // }
}


template<typename Dato>
Lista<Dato>* Lista<Dato>::revertir_y_obtener_nueva(){

    Lista<Dato>* nueva_lista_revertida = new Lista<Dato>;

    for(int i=longitud; i>0; i--){
        Dato dato = obtener_dato(i);        
        nueva_lista_revertida -> alta(dato); 
    }
    
    return nueva_lista_revertida;
}


template<typename Dato>
void Lista<Dato>::eliminar_repetidos(){
    
    //Esto funciona SOLO SI LOS REPETIDOS ESTAN TODOS JUNTOS XQ HACE ALGO ASI:
    //Es inefienite pero funciona
    for (int i=1; i<=longitud;i++){
        //Xa cada elemento que encuentro
        int j = i+1;
        while(j<=longitud){
            //Compara con todos los elementos de la lista desde a partir de ese en 
            //adelante xa cada uno, es imposible que la repetcion venga antes pues
            //arrancaa dde adelante y estan ordenados previamente.
            if( (obtener_nodo(i) -> comparar_con(obtener_dato(j)) == 0)){
                //Si es igual                                     y no es el mismo
                cout<<"elimno: "<<obtener_dato(j)<<endl;
                eliminar(j);
                //No sumo xq "avanza solo"
            }
            else{
                j++;
            }
        }
    }

}

template<typename Dato>
void Lista<Dato>::ordenar_de_min_a_max(){
    
    for (int i=1; i<= longitud; i++){
        for (int j=1; j<longitud; j++){
        //Compara con todos los elementos de la lista menos 1
            //Comparo dato por dato
            // if (obtener_dato(j) > obtener_dato(j+1)){
            if ( obtener_nodo(j) -> comparar_con(obtener_dato(j+1) ) == 1){
                //Si es mayor lo intecambio por el siguiente 
                intercambiar(j,(j+1));
            }
        }
    }
}

template<typename Dato>
void Lista<Dato>::unifica_y_ordena(Lista<Dato>* lista_parametro){
    
    //ELIMNAR SOLO FUNCIONA POR ESTAR ORDENADA ANTES CON REPES TOODOS JUNTOS

    colocar_al_final(lista_parametro);
    
    ordenar_de_min_a_max();

    eliminar_repetidos();
}

template <typename Dato>
void Lista<Dato>::eliminar_primera_ocurrencia_dato(Dato d){
        
    int i=1;
    
    //Busco mientras no lo encuentre o queden elementos
    while (obtener_nodo(i) -> comparar_con(d)!=0 && i<longitud){
        i++;
    }
    //Si es q lo encontro
    if (obtener_nodo(i) -> comparar_con(d) == 0){
        eliminar(i);
    }

}

template <typename Dato>
void Lista<Dato>::eliminar_todas_ocurrencias_dato(Dato d){
    
    int tam_original = longitud;

    int cont = 1; //Recorre la longitud original
    int pos = 1; //lleva la cuenta de la verdadera pos en el elemento
    //Recorro todos los elementos
    while (cont <= tam_original ){
        if (obtener_nodo(pos) -> comparar_con(d) == 0){
            eliminar(pos);
            //No avanzo pos xq lo saque, se incremento "solito"
            //ej elimino el ele 3, el prox pasa a a ser el 3 de la lista actual
        }
        else{
            pos++;
        }
        cont ++;
    }
}

template <typename Dato>
Lista<Dato> * Lista<Dato>::restar_elementos_lista(Lista<Dato>* lista_b){
    Lista<Dato> *nueva_lista = new Lista<Dato>;
    
    int long_b = lista_b -> obtener_longitud();
    //int cont = 0; //xq mi alta agrega al final
    bool esta = false;
    //xa cada elemento a la lista original
    for (int i=1; i<=longitud; i++){
        
        esta = false;
        Dato elemento = obtener_dato(i);

        int j=1;
        //comparo con cada elemento de la lista b para ver si esta. Si esta corto el while
        while (j<=long_b && !esta){

            if( elemento == lista_b -> obtener_dato(j) ){
                esta = true;
            }
            j ++;
        }
        
        if(!esta){
            nueva_lista -> alta(elemento);
            //cont ++;//mi alta agrega al final
        }
    }

    return nueva_lista;
}

//PRE: Recibe un objeto de tipo Lista<Dato>
//POST: modifica la lista que llama al método: le une al final una copia de lista
template<typename Dato>
void Lista<Dato>::unir(Lista<Dato> *lista){

    int longitud_original = longitud;
    
    for(int i=1; i<= lista -> obtener_longitud(); i++ ){
        Dato dato = lista -> obtener_dato(i);        
        insertar(dato,longitud_original + i); //en la original
    }
   
}

template<typename Dato>
bool Lista<Dato>::incluye(Lista<Dato> *lista){
    int cont_lista_grande = 1; 
    int cont_lista_chica;
    bool estan_todos = false;
    bool esta_ant;
    bool esta_actual;

    while( cont_lista_grande + lista->obtener_longitud() <= longitud + 1 && !estan_todos ){
        cont_lista_chica = 1;
        esta_ant = false;
        esta_actual = true;
        cout<<"dato lista grande: "<< obtener_dato(cont_lista_grande)<<endl; 
        while ( cont_lista_chica <= lista -> obtener_longitud() && esta_actual){

            Dato dato_lista_chica = lista ->obtener_dato(cont_lista_chica);
            cout<<"dato lista chica: "<< dato_lista_chica <<endl;
            
            if( obtener_nodo(cont_lista_grande) -> comparar_con(dato_lista_chica) == 0 ) {
                cout<<"esta el :"<< dato_lista_chica <<endl;
                esta_actual = true;
                esta_ant = true;
                cont_lista_chica ++;
                cont_lista_grande++;
            }
            else{
                esta_actual = false;
                cout<<"no esta el: "<< dato_lista_chica <<endl;
                if (!esta_ant){
                    cont_lista_grande++;
                }
            }
            cout<<"cont lista grande: "<<cont_lista_grande<<endl;
        }
        estan_todos = esta_actual;          
    }    
    return estan_todos;
}

template<typename Dato>
void Lista<Dato>::revertir_final(){
    int tam = obtener_longitud();

    for (int i = 1; i <= (tam/2); i++){

        intercambiar(i, tam - (i-1) );
        
    }
}


#endif //_LISTA_TEMPLATE_H_