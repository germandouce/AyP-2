#include "vector.h"
#include <iostream>

// Constructor sin parametros
Vector :: Vector( ) {
	longitud = 0;
	datos = 0;
}

//Inicializar datos
void Vector :: inicializar_datos(Dato* datos) {
	for (int i = 0; i<longitud; i++){
		datos[i] = 1;
	};
}

// Constructor con parametros
Vector :: Vector (int tam ) {
	longitud = tam;
	datos = new Dato[tam];
	inicializar_datos (datos);
}

// mostrar
void Vector :: 	mostrar(){
	for (int i = 0; i<longitud; i++){
		std::cout<< datos[i] << " ";
	}
	std::cout<< std::endl;
}
// insertar
void Vector :: insertar ( Dato d, int pos) {
	datos[pos] = d;
}

// obtener
Dato Vector :: obtener ( int pos) {
	return datos[pos];
}

//copiar datos
void Vector :: copiar_datos(Dato* aux, int tam) {
	for (int i = 0; i<tam; i++){
		aux[i] = datos[i];
	};
}

// redimensionar
void Vector :: redimensionar ( int tam ) {
	if ( longitud != tam) {
		Dato* aux = new Dato[tam];
		copiar_datos (aux, tam);
		if (longitud > 0)
			delete [ ] datos;
		longitud = tam;
		datos = aux;
	}
}

// Destructor
Vector :: ~Vector ( ) {
	if (longitud > 0)
		delete [ ] datos;
}

// Constructor de copia
Vector :: Vector ( const Vector & vec ) {
	this->longitud = vec.longitud;
	if (longitud > 0) {
		datos = new Dato[ longitud ];
		copiar_datos ( vec.datos, longitud);
		// Se copian los valores a esa nueva porcion de memoria	
	}
	else datos = 0;
}

//Sobrecarga del operador igual
void Vector :: operator= ( const Vector & vec ) {
	if (longitud > 0)
		delete [ ] datos;
	this->longitud = vec.longitud;
	if (longitud > 0) {
		datos = new Dato[ longitud ];
		//copiar_datos ( vec.datos, longitud);
	}
	else datos = 0;
}
