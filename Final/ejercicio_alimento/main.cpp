#include "lista_template.h"
#include "Buscador_de_comidas.h"

using namespace std;

/*CONSIGNA
1) Considerar como implementada la clase Alimento a partir de la siguiente interfaz:
class Alimento
{
public:
// Crea un alimento con su nombre, la cantidad de calorias y una lista
// de los ingredientes que lo conforman
Alimento (string nombre, unsigned int calorias, Lista<string>* ingredientes);
string obtener_nombre(); // devuelve el nombre del alimento
unsigned int obtener_calorias (); // devuelve la cantidad de calorias
Lista<string>* obtener_ingredientes (); // devuelve un ptr la lista de ingredientes
};

Implementar el método comidas_para_celiacos de la clase Buscador_de_comidas:
class Buscador_de_comidas
{
public:
// Post: busca en “comidas” aquellas que tienen algún ingrediente de la
// lista “ingredientes_permitidos” y ninguno de la lista
“ingredientes_no_permitidos”
// y tienen una caloria menor a “caloria_maxima”.
// Devuelve una lista con los alimentos que cumplen con estas características.
Lista<Alimento *>* comidas_para_celiacos (Lista<Alimento *>* comidas,
Lista<string>* ingredientes_permitidos, Lista<string>*
ingredientes_no_permitidos,
unsigned int caloria_maxima);
};
*/

int main(){

    Lista<string>* ingredientes_permitidos = new Lista<string>;
    ingredientes_permitidos -> alta("leche");
    ingredientes_permitidos -> alta("rabano");
    ingredientes_permitidos -> alta("carne");

    Lista<string>* ingredientes_no_permitidos = new Lista<string>;
    ingredientes_no_permitidos -> alta("azucar");

    //____Comidas___
    //Torta
    Lista<string>* ingredientes_torta = new Lista<string>;
    ingredientes_torta -> alta("chocolate");
    ingredientes_torta -> alta("leche");

    Alimento* torta = new Alimento("torta", 10, ingredientes_torta);

    //Milanesa
    Lista<string>* ingredientes_milanesa = new Lista<string>;
    ingredientes_milanesa -> alta("carne");
    ingredientes_milanesa -> alta("pan");

    Alimento* milanesa = new Alimento("milanga", 100, ingredientes_milanesa);

    //Doy de alta las comidas
    Lista<Alimento*>* comidas = new Lista<Alimento*>;
    comidas ->alta(torta);
    comidas ->alta(milanesa);
    
    // cout<< torta -> obtener_nombre()<<endl;
    // cout<< torta -> obtener_calorias()<<endl;
    // cout<< torta -> obtener_ingredientes()->devolver_dato(1)<<endl;
    // cout<< torta -> obtener_ingredientes()->devolver_dato(2)<<endl;

    Buscador_de_comidas comidas_para_celiacos = Buscador_de_comidas();
    
    Lista<Alimento*>* comidas_para_c = new Lista<Alimento*>;
    
    comidas_para_c = comidas_para_celiacos.comidas_para_celiacos(comidas,
    ingredientes_permitidos, ingredientes_no_permitidos,100);

    if (comidas_para_c->devolver_longitud()){  
        while (comidas_para_c->hay_siguiente()){
            cout<<"1: "<<comidas_para_c->siguiente()->obtener_nombre()<<endl;
        }
    }
    else{
        cout<<"No hay comidas para celiacos"<<endl;
    }
}