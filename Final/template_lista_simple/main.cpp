#include "lista_template.h"

using namespace std;


int main(){

    Lista<string> ingredientes_queso;
    // ingredientes_queso->insertar("leche",0);
    string alimento = "leche";
    cout<<"inserta3";
    ingredientes_queso.insertar(&alimento);
    cout<<"inserta3";
    cout<<ingredientes_queso.consulta(1);
    //Alimento alimentote = Alimento("queso", 2000, ingredientes_queso);

    return 0;
}
    