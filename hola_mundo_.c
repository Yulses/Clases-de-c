/*Header (Encabezado)
*Autor: Ulises,Luis
*Fecha: 22/11/2020
*Descripcion: Mi primer programa en C
*/
/////////////////////////////////////
//					Bibliotecas
/////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////
//					Definiciones
/////////////////////////////////////
#define constante 65
#define constanteChar 'a'

/////////////////////////////////////
//			Esqueleto de Funciones
/////////////////////////////////////
void quintaria();
void cuarta();
void tercearia();
void secundaria();
/////////////////////////////////////
//					Funcion Principal
/////////////////////////////////////
int main(){
	printf("hola mundo: %c \n",constante);
	printf("Hola que tal Ulises %c\n",constanteChar);

	quintaria();
	printf("Se terminaron de ejecutar las funciones\n");
	return 1;
}

/////////////////////////////////////
//					Definicion de Funciones
/////////////////////////////////////
void quintaria(){
	// Definicion
	cuarta();
	printf("hola mundo, soy la Funcion quintaria: \n");
	//
}
void cuarta(){
	// Definicion
	tercearia();
	printf("hola mundo, soy la Funcion cuarta: \n");
	//
}
void tercearia(){
	// Definicion
	secundaria();
	printf("hola mundo, soy la Funcion tercearia: \n");
	//
}
void secundaria(){
	// Definicion
	printf("hola mundo, soy la Funcion Secundaria: \n");
	//
}
