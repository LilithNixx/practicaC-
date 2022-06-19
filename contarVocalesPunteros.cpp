//Pedir su nombre al usuario y devolver el numero de vocales que hay usando puntero
#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

//prototipos:
void pedirNombre();
int contarVocales(char*);

//variables globales:
char nombre[30];

int main(){
	pedirNombre();
	contarVocales(nombre);
	
	return 0;
}

void pedirNombre(){
	
	cout<<"Ingrese su nombre: "<<endl;
	cin.getline(nombre, 30, '\n');
	strupr(nombre); //tranformar a mayuscula
	cout<<"Su nombre tiene "<<contarVocales(nombre)<<" vocales."<<endl;
}

int contarVocales(char *nombre){
	int vocal;
	
	while (*nombre){  //mientras nombre no sea nulo '\0'
		switch(*nombre){
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U': vocal++;
		}
		nombre++;
	}
	return vocal;
}
