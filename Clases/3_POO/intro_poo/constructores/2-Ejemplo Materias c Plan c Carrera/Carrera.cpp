//
//  Carrera.cpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#include "Carrera.h"

Carrera::Carrera(std::string nombre,int cantidadDeMaterias,int anio) : planDeEstudios(cantidadDeMaterias,anio)
{
    this->nombre = nombre;
}

PlanDeEstudios Carrera::obtenerPlanDeEstudios()
{
    return this->planDeEstudios;
}
