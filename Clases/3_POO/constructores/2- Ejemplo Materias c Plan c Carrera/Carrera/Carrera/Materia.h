//
//  Materia.hpp
//  Carrera
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#ifndef Materia_h
#define Materia_h

#include <stdio.h>
#include <string>

class Materia
{
private:
    int id;
    std::string nombre;
    
public:
    Materia();
    void setId(int id);
    void setNombre(std::string nombre);
};

#endif /* Materia_h */
