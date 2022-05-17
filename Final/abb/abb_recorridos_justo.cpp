//_____________________ RECORRDIOS EN ARBOLES ___________________


//____________________EN ORDEN_________________________

//CONSIGNA CAMPUS
/*
PRE: Recibe el nodo raiz
POST: Imprime los valores almacenados en el orden indicado (EN ORDEN)
*/
void recorrido_en_orden(Nodo* raiz){

    if (raiz != NULL){
        
        //voy al subarbol izquierdo
        recorrido_en_orden( raiz -> obtener_izquierdo() );
        
        //imprimo el dato
        cout << raiz -> obtener_dato()<<" ";

        //voy al subarbol derecho
        recorrido_en_orden( raiz -> obtener_derecho() );
    }

}


// _______________________ PRE ORDEN _________________________
//CONSIGNA CAMPUS
/*
PRE: Recibe el nodo raiz
POST: Imprime los valores almacenados en el orden indicado (PRE ORDEN)
*/
void recorrido_pre_orden(Nodo* raiz){
    
    if (raiz == NULL){
        return;
    }
    
    //imprimo el dato del nodo
    cout << raiz -> obtener_dato() << " ";
 
    //voy al subarbol izquierdo
    recorrido_pre_orden( raiz -> obtener_izquierdo() );
 
    //voy al subarbol derecho
    recorrido_pre_orden( raiz -> obtener_derecho() );
}

//_______________________POS ORDEN____________________________

//CONSIGNA CAMPUS
/*
PRE: Recibe el nodo raiz
POST: Imprime los valores almacenados en el orden indicado (POS(T) ORDEN)
*/
void recorrido_pos_orden(Nodo* raiz){

    if ( raiz == NULL){
        return;
    }    

    //voy al subarbol izquierdo
    recorrido_pos_orden ( raiz -> obtener_izquierdo() );
    
    ////voy al subarbol derecho
    recorrido_pos_orden ( raiz -> obtener_derecho() );
    
    //imprimo el nodo 
    cout<< raiz -> obtener_dato() << " ";

}
