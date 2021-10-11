//
//  PlanDeEstudios.cpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#include "PlanDeEstudios.h"

const std::string SIN_NOMBRE = "Sin definir";
const int SIN_CODIGO = -1;

PlanDeEstudios::PlanDeEstudios(int cantidadDeMaterias,int anio)
{
    this->cantidadDeMaterias = cantidadDeMaterias;
    this->materias = new Materia[cantidadDeMaterias];
    this->anio = anio;
    for(int i=0;i<cantidadDeMaterias;i++)
    {
        this->materias[i].setNombre(SIN_NOMBRE);
        this->materias[i].setId(SIN_CODIGO);
        
    }
}

int PlanDeEstudios::obtenerAnio()
{
    return this->anio;
}

int PlanDeEstudios::obtenerCantidadDeMaterias()
{
    return this->cantidadDeMaterias;
}


PlanDeEstudios::~PlanDeEstudios()
{
    
}


