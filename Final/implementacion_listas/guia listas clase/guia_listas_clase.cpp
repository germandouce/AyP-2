//_________________________EJERCICIOS PDF - CLASE __________________________________

template<typename Dato>
void Lista<Dato>::insertar_productos(){
    //Voy avanzando de a 2 porque ingora al q esta insertando
    for (int pos = 1; pos+1 <= longitud; pos+=2 ){
        //Hago el prodcuto y el alta
        alta( devolver_dato(pos) * devolver_dato(pos+1), pos+1 );
    }
}


template<typename Dato>
void Lista<Dato>::separar_contiguos_divisibles(){
    
    //solucion pibardos
    // int anterior;
    // int posterior;
    // int pos = 1;
    // while (pos + 1 <= longitud){

    //     anterior = devolver_dato(pos);
    //     posterior = devolver_dato(pos + 1);
        
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
        if ( ( devolver_dato(pos) % devolver_dato(pos + 1) ) == 0 ){
            
            alta (devolver_dato(pos) / devolver_dato(pos + 1), pos+1);
            pos+=2;
        }
    }

}


template<typename Dato>
Lista<Dato>* Lista<Dato>::eliminar_y_retornar_impares(){
    Lista<int> * impares = new Lista<int>;

    int pos = 1; //cont de posicion "real", enq pos estoy parado respecto a la que modifico
    //int pos = 1; //si tomo pos 0...
    int cont = 1;    //un cont para moverme en la original tal cual vino. Cant de elementos totales
    //int cont = 0; //si tomo pos 0...
    
    int pos_impares = 1; //y el pos_impares xa la de impares
    //(suponiendo que no tengo insertar al final )
    int cantidad = longitud;     //Neceito guardar la longitud original xq se modifica mi lista al sacar impares
    
    //< si arranco en 0
    while ( cont<= cantidad ){
        //Cicla tantas veces como la longitud de la lista

        if ( cont%2 != 0 ){ //si me paro sobre un no par (impar) tomo como q la pos 1 es 0 en realidad
            impares -> insertar( devolver_dato(pos) ); //+1 si arranco en 0
            
            //impares -> alta( devolver_dato(pos), pos_impares );
            //pos_impares ++;

            eliminar(pos);  //+1 si arranco en 0
            //no avanzo pos xq lo saque. "se incrementa solito"
        }
        else{
            //Si no fue impar sigo avanzando en la actual xq no elimine nada
            pos++;
        }
        //en clqr caso me sigo moviendo sobre la original
        cont++;
    }

    return impares;
}