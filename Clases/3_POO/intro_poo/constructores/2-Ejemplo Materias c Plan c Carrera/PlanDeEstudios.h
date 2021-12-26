//
//  PlanDeEstudios.hpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#ifndef PlanDeEstudios_hpp
#define PlanDeEstudios_hpp

#include <stdio.h>
#include "Materia.h"

class PlanDeEstudios
{
private:
    int cantidadDeMaterias;
    Materia* materias;
    int anio;
    
public:
    PlanDeEstudios(int cantidadDeMaterias,int anio);
    ~PlanDeEstudios();
    int obtenerAnio();
    int obtenerCantidadDeMaterias();
    
    
};

#endif /* PlanDeEstudios_hpp */
