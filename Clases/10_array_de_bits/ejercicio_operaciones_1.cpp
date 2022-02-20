#include <iostream>
#include <iomanip>
using namespace  std;

//DESCOMENTAR EL CODIGO ABAJO RESPUESTA PARA PRINTEAR POR PANTALLLA
int main(){
    
    unsigned char x = 0x06, y = 0x10, z = 0xb1;
    unsigned char u, v, w;
    //x = x << 8  ;
    u = ~z;
    v = x & y;
    w = x | z;
    
    //EJEMPLO:
    // cout << (int)x <<" "<< (int)y << " " << (int)z << endl;
    // cout << (int)u << " " << (int)v << " " << (int)w << endl;
    // cout<<std::hex<<(int)x;
    //Ejercicios power

    //conjunto
    //1000 1001
    // 8    9 
    //7    3  0
    
    //__codigo para ver si un ele esta en el conjutno. En este caso el elemento 7_______
    unsigned char conjunto = 0x89, mascara = 0x01, mascara_corrida = mascara << 7;
    
    unsigned char res;
    
    res = conjunto & mascara_corrida;
    int res_2 = int(res);
    //RESULTADO:
    //cout<<std::hex<<res_2;
    //  8   0
    //1000 0000
    //esta!

    //_____codigo para dar de alta el 2.____________

    unsigned char mascara_corrida_2 = mascara << 2;

    unsigned char alta_2 = mascara_corrida_2 | conjunto;
    //RESULTADO:
    // cout<< "en int " <<(int)alta_2<<endl;
    // cout<< "en hexa " <<std::hex<<(int)alta_2;
    //  8     d
    //1000 1101
    //7    32 0 

    //_____codigo para dar de baja el 3.____________

    unsigned char mascara_corrida_3; //pongo un 1 en la pos q quiero bajar
    unsigned char not_mascara_corrida_3; //le hago not xa q quede todo en 1 y 0 en la q bajo
    
    mascara_corrida_3 = mascara << 3; //0000 1000 
    not_mascara_corrida_3 = ~mascara_corrida_3; //1111 0111

    unsigned char nuevo_conjunto = alta_2;
    unsigned char baja_3 = not_mascara_corrida_3 & nuevo_conjunto;
    
    //RESPUESTA:
    //cout<< "en int " <<(int)baja_3<<endl;
    //cout<< "en hexa " <<std::hex<<(int)baja_3;
    //133
    //  8    5
    //1000 0101
    //7     2 0 
    return 0;
}   