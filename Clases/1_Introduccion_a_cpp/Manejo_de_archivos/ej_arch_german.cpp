#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string NOMBRE_ARCH = "datos_ger.txt";

int main(){
    ifstream archivo_de_texto(NOMBRE_ARCH);
    string palabra;

    if (!archivo_de_texto.fail()){
        while(archivo_de_texto >> palabra){
            cout << palabra<< " ";
        }
    }
    else{
        cout<<"No se pudo abrir el archivo correctamente";
    }
    archivo_de_texto.close();
}