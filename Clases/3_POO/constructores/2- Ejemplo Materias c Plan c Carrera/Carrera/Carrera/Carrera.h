//
//  Carrera.hpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#ifndef Carrera_h
#define Carrera_h

#include <stdio.h>
#include "PlanDeEstudios.h"

class Carrera
{
private:
    std::string nombre;
    PlanDeEstudios planDeEstudios;
    
public:
    Carrera(std::string nombre,int cantidadDeMaterias, int anio);
    PlanDeEstudios obtenerPlanDeEstudios();
    
};

#endif /* Carrera_h */
