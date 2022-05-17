//_____________________ RECORRDIOS EN ARBOLES ___________________


//____________________EN ORDEN_________________________
//CARO ORIGINAL
template <class T>
void BST<T>::print_in_order(BSTNode<T>* node)
{
    if (node != NULL)
    {
        print_in_order(node->get_left());
        std::cout<<node->get_data()<<' ';
        print_in_order(node->get_right());
    }
}

template <class T>
void BST<T>::print_in_order()
{
    this->print_in_order(this->root);
}

//CARO EN ESPANOL Y SIN TEMPLATE (MIO)
void recorrido_en_orden(Nodo* nodo){

    if (nodo != NULL){
        recorrido_en_orden( nodo -> obtener_izquierdo() );
        cout << nodo -> obtener_dato()<<" ";
        recorrido_en_orden( nodo -> obtener_derecho() );
    }

}

//GeekForGeeks ORIGINAL
void printInorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    /* first recur on left child */
    printInorder(node->left);
 
    /* then print the data of node */
    cout << node->data << " ";
 
    /* now recur on right child */
    printInorder(node->right);
}



//ESTO NO VA SI SE RECIBE RAIZ
void recorrido_en_orden(){
    
    this -> recorrido_en_orden(this -> raiz);
}

//JORGE
Void recorrido_en_orden(Nodo* nodo){
    recorrido_en_orden(obtener_izquierdo);
    cout << nodo -> obtener_dato() << endl;
    recorrido_en_orden(obtener_derecho);
}

//CONSIGNA CAMPUS
/*
PRE: Recibe el nodo raiz
POST: Imprime los valores almacenados en el orden indicado (EN ORDEN)
*/
void recorrido_en_orden(Nodo* raiz){

    if (raiz != NULL){
        recorrido_en_orden( raiz -> obtener_izquierdo() );
        cout << raiz -> obtener_dato()<<" ";
        recorrido_en_orden( raiz -> obtener_derecho() );
    }

}


// _______________________ PRE ORDEN _________________________
//GEEKSFORGEEKS ORIGINAL
void printPreorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    /* first print data of node */
    cout << node->data << " ";
 
    /* then recur on left subtree */
    printPreorder(node->left);
 
    /* now recur on right subtree */
    printPreorder(node->right);
}

//GEEKSFORGEEKS ESPANOL (MIO)
void recorrido_pre_orden(Nodo* nodo){
    
    if (nodo == NULL){
        return;
    }
    
    //imprimo el dato del nodo
    cout << nodo -> obtener_dato() << " ";
 
    //voy al subarbol izquierdo
    recorrido_pre_orden( nodo -> obtener_izquierdo() );
 
    //voy al subarbol derecho
    recorrido_pre_orden( nodo -> obtener_derecho() );
}

//Jorge
Void recorrido_pre_orden(Nodo* nodo){
    cout <<nodo -> obtener_dato() << endl;
    recorrido_pre_orden(obtener_izquierdo);
    recorrido_pre_orden(obtener_derecho);
}

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
//GeekForGeeks Original
void printPostorder(struct Node* node)
{
    if (node == NULL)
        return;
 
    // first recur on left subtree
    printPostorder(node->left);
 
    // then recur on right subtree
    printPostorder(node->right);
 
    // now deal with the node
    cout << node->data << " ";
}


//GeekForGeeks ESPANOL
void recorrido_pos_orden(Nodo* nodo){
    
    if (nodo == NULL){
        return;
    }
    
    //voy al subarbol izquierdo
    recorrido_pos_orden( nodo -> obtener_izquierdo() )

    //voy al subarbol derecho
    recorrido_pos_orden( nodo -> obtener_derecho() )

    //imprimo el dato del nodo
    cout << nodo -> obtener_dato() <<" ";
}

//Jorge
Void imprimir(Nodo* nodo){

    imprimir(obtener_izquierdo);
    Imprimir(obtener_derecho);
    Cout << nodo -> obtener_dato() << endl;
}

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
