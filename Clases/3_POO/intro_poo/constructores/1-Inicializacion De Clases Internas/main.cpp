//
//  main.cpp
//  ConstructoresC++
//
//  Created by Carolina Pistillo on 16/9/19.
//  Copyright © 2019 Carolina Pistillo. All rights reserved.
//

#include "ClaseA.h"
#include<iostream>

using namespace std;

//CASO 1: Constructores por defecto
//ClaseA claseA;

int main()
{
    ClaseA claseA;
    
    cout<<claseA.claseB.datoB<<endl;
    
    return 0;
}
 

//CASO 2: Constructores sin parametros
/*
int main()
{
    ClaseA claseA;
    
    cout<<claseA.claseB.datoB<<endl;

    return 0;
    
}
*/

//CASO 3: Inicializa el objeto contenido (claseB) en el
//       constructor de la clase que lo contiene (ClaseA)
/*
int main()
{
    ClaseA claseA(3);
    
    cout<<claseA.claseB.datoB<<endl;
    
    return 0;
    
}
*/

//CASO 4: Inicializa varios objetos contenidos, en el
//       constructor de la clase que los contiene (ClaseA)
/*
int main()
{
    ClaseA claseA(4);
    
    cout<<claseA.unObjeto.datoB<<endl;
    cout<<claseA.otroObjeto.datoB<<endl;
    
    return 0;
    
}*/



