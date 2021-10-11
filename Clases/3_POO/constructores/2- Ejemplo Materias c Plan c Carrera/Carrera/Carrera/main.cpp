//
//  main.cpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#include <iostream>
#include "Carrera.h"

const int CANTIDAD_MATERIAS = 46;

using namespace std;

int main()
{
    
    Carrera* carrera = new Carrera("Ingenieria",CANTIDAD_MATERIAS,2009);
    
    cout<<"El plan de estudio es del anio "<<carrera->obtenerPlanDeEstudios().obtenerAnio();
    cout<<" y tiene "<<carrera->obtenerPlanDeEstudios().obtenerCantidadDeMaterias()<<" materias "<<endl;
    
    //cout<<carrera->obtenerPlanDeEstudios().materias[1].nombre;
    
    delete carrera;
    
    return 0;
}
