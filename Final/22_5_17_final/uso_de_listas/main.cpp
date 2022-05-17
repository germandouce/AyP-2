#include "lista_template.h"
#include "Red_social.h"

using namespace std;

// La clase Lista tiene implementados los métodos que figuran en el archivo lista_con_actual.h que incluye nodo.h 
//(notar que, con respecto al ej. 1, se le agrega un atributo (actual) y tres métodos).

// Considerar como implementada la clase Persona a partir de la siguiente interfaz:
// class Persona {
// public:
// /* Crea una Persona con su nombre, edad y una lista de intereses */
// Persona (string nombre, int edad, Lista<string>* intereses);

// /* devuelve el nombre de la Persona */
// string obtener_nombre(); 
// /* devuelve la edad */
// int obtener_edad (); 
// /* devuelve un ptr a lista de intereses */
// Lista<string>* obtener_intereses (); 
// };

// Implementar el método recomendar_personas de la clase Red_social, según:
// class Red_social {
// public:
// /* 
// Post: busca en “personas” aquellas que tienen por lo menos dos intereses de la lista 
// “gustos” y una edad menor o igual a edad_maxima y mayor o igual a edad_minima.
// Devuelve un puntero a una lista con las personas que cumplen con estas características.
// */
// Lista<Persona *>* recomendar_personas (Lista<Persona *>*  personas, 
// Lista<string>* gustos, int edad_maxima, int edad_minima);
// };
// };

int main(){

    Lista<string>* gustos = new Lista<string>;
    gustos -> alta("computacion");
    gustos -> alta("comida");
    gustos -> alta("deportes");
    gustos -> alta("natacion");
    gustos -> alta("birra");

    //CUMPLE todo
    Lista<string>* intereses_german = new Lista<string>;
    intereses_german -> alta("computacion");
    intereses_german -> alta("natacion");
    intereses_german -> alta("birra");

    Persona* german = new Persona("german", 21, intereses_german);

    //CUMPLE 2
    Lista<string>* intereses_pepe = new Lista<string>;
    intereses_pepe -> alta("computacion");
    intereses_pepe -> alta("comida");

    Persona* pepe = new Persona("Pepe", 23, intereses_pepe);

    
    //NO CUMPLE INTERESES, hay menos de 2
    Lista<string>* intereses_carlos = new Lista<string>;
    intereses_carlos -> alta("computacion");
    intereses_carlos -> alta("algebra lineal");

    Persona* carlos = new Persona("Carlos", 22, intereses_carlos);


    //NO CUPLE EDAD SI INTERESES
    Lista<string>* intereses_mirtha = new Lista<string>;
    intereses_mirtha -> alta("birra");
    intereses_mirtha -> alta("comida");

    Persona* mirtha = new Persona("German", 200, intereses_mirtha);

    Lista<Persona*>* personas = new Lista<Persona*>;
    personas -> alta(german);
    personas -> alta(carlos); 
    personas -> alta(pepe);
    personas -> alta(mirtha); 


    Red_social instagram = Red_social();
    
    Lista<Persona*>* pipol = new Lista<Persona*>;
    
    pipol = instagram.recomendar_personas(personas,
    gustos,50,18);
    
    pipol->reiniciar();
    if (pipol->devolver_longitud()){  
        while(pipol->hay_siguiente())
        cout<<"- " << pipol -> siguiente() -> obtener_nombre() <<endl;
    }
    else{
        cout<<"nadie :("<<endl;
    }
}