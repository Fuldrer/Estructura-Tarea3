// EjemplosArreglos.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>



int numeros[10];

void buscarnum(int num){
	int x;
	for (x = 0; x < 10; x++){
		if (num == numeros[x])
			std::cout << "El numero hallado es:" << numeros[x]<<std::endl;
	}
	std::cout << "No se Encontro ningun numero" << std::endl;
}

void borrar(int num){
	for (int x = 0; x < 10; x++){
		if (num == numeros[x]){
			numeros[x] = NULL;
		}
	}
	std::cout << "El numero no se esta en el arreglo para borrarlo" << std::endl;
}

void remplazarnum(int num, int pos){
	for (int x = 0; x < 10; x++){
		if (num == numeros[x]){
			std::cout << "El Numero ya existe" << std::endl;
		}
		else{
			if (pos < 10){
				numeros[pos] = num;
			}
			else{
				std::cout << "No se pudo agregar el numero" << std::endl;
			}
		}
	}
}

void printnum(){
	for (int x = 0; x < 10; x++){
		std::cout << numeros[x] << std::endl;
	}
}
int main(int argc, _TCHAR* argv[])
{
	srand(time(NULL));
	
	for (int x = 0; x < 10; x++){
		numeros[x] = std::rand() % 20 + 1;
	}

	remplazarnum(20, 2);
	borrar(5);
	buscarnum(12);
	printnum();
	return 0;
}