//
//  Foo.h
//  ConstructoresC++
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#ifndef ClaseB_h
#define ClaseB_h


//CASO 1: Constructores por defecto

class ClaseB
{
public:
    int datoB;
};
 

//CASO 2: Constructores sin parametros
/*
class ClaseB
{
public:
    int datoB;
    
    ClaseB();
};
*/

//CASO 3: Inicializa el objeto contenido (claseB) en el
//       constructor de la clase que lo contiene (ClaseA)
/*
class ClaseB
{
public:
    ClaseB(int dato);
    int datoB;
};*/

//CASO 4: Inicializa varios objetos contenidos, en el
//       constructor de la clase que los contiene (ClaseA)

/*
class ClaseB
{
public:
    ClaseB(int dato);
    int datoB;
};
*/

#endif /* ClaseB_h */
