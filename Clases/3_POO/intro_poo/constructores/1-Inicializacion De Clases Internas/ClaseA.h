//
//  Bar.h
//  ConstructoresC++
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#ifndef ClaseA_h
#define ClaseA_h

#include "ClaseB.h"

//CASO 1: Constructores por defecto

class ClaseA
{
public:
    ClaseB claseB;
    int datoA;
};


//CASO 2: Constructores sin parametros
/*
class ClaseA
{
public:
    ClaseB claseB;
    
    ClaseA();
};
*/

//CASO 3: Inicializa el objeto contenido (claseB), en el
//       constructor de la clase que lo contiene (ClaseA)
/*
class ClaseA
{
public:
    ClaseB claseB;
    ClaseA(int dato);
};
*/

//CASO 4: Inicializa varios objetos contenidos, en el
//       constructor de la clase que los contiene (ClaseA)
/*
class ClaseA
{
public:
    ClaseB unObjeto;
    ClaseB otroObjeto;
    ClaseA(int dato);
};
*/


#endif /* ClaseA_h */
