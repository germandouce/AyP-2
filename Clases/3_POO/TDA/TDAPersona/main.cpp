#include <iostream>
#include "persona.h"
#include "personas.h"

using namespace std;

int main(){
    fecha fecha_nac_ger;
    fecha_nac_ger.dia = 5;
    fecha_nac_ger.mes = 4;
    fecha_nac_ger.anio = 2001;
    
    Persona German(20, "German", fecha_nac_ger);
    Persona Giselle(18, "Giselle", fecha_nac_ger);
    Persona Nicole(16, "Nicole", fecha_nac_ger);

    // Persona* german = &German;
    // Persona* giselle = &Giselle;
    // Persona* nicole = &Nicole;
    
    Personas familia(3);
    familia.cargar_elemento(German, 0);
    familia.cargar_elemento(Giselle, 1);
    familia.cargar_elemento(Nicole, 2);
    familia.mostrar_vector();
    std::cout<<"termine";



}