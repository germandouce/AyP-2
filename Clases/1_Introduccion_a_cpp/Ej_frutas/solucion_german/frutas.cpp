using namespace std;

int contar_frutas(frutas vec_frutas[MAX_FRUTAS], int tope){
    int total = 0;
    for (int i = 0; i <tope; i++){
        total += vec_frutas[i].numero;
    }
    return total;
}

void buscar_frutas(string frutita, frutas vec_frutas[MAX_FRUTAS], int tope){
    int pos = -1;
    for (int i = 0; i <tope; i++){
        if (vector_frutas[i].fruta == frutita){
            pos = i;
        }
    } 
    return pos;
}

void ordenar_frutas(){

}
