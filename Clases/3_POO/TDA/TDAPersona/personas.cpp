#include "personas.h"


// Personas::Personas(int cantidad, int edad, string nombre, fecha fecha_nacimiento){

// }

Personas::Personas(int miembros){
    cantidad = miembros;
    personas = new Persona[miembros];
}

void Personas::cargar_elemento(Persona persona, int pos){
    personas[pos] = persona;
}

void Personas::mostrar_vector(){
    for (int i = 0; i<cantidad; i++){
		personas[i].mostrar();;
	}    
}