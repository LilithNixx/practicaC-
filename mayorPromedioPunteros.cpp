/*Hacer una estructura llamada alumno, en la cual se tendrán los siguientes campos:
nombre, edad, promedio, pedir datos al usuario para 3 alumnos, comprobar cuál de los
3 tiene el mejor promedio e imprimir los datos.
Nota: usar punteros a estructuras*/

#include <iostream>
#include <conio.h>
using namespace std;

struct alumno {
	char nombre[30];
	int edad;
	float promedio;
}alu[3], *puntero_alumno = &alu[0];

//prototipo:
void pedirDatos();
void mejorPromedio(alumno *);

int main(){
	
	pedirDatos();
	mejorPromedio(puntero_alumno);
	
	getch();
	return 0;
}

void pedirDatos(){
	for(int i = 0; i < 3; i++){
		fflush(stdin);
		cout<<"nombre: ";
		cin.getline((puntero_alumno + i)->nombre, 30, '\n');
		cout<<"Edad: ";
		cin>>(puntero_alumno + i)->edad;
		cout<<"Promedio: ";
		cin>>(puntero_alumno + i)->promedio;
	}
}

void mejorPromedio(alumno *puntero_alumno){
	float mayor = 0;
	int pos = 0; //se necesita la posicion para poder imprimir
	for (int i = 0; i < 3; i++){
		if((puntero_alumno->promedio + i) > mayor){
			mayor = (puntero_alumno + i)->promedio;
			pos = i; //posicion del mayor promedio.
		}
	}
	
	cout<<"El alumno "<<(puntero_alumno + pos)->nombre<<"tiene el promedio mas alto"<<endl;
	cout<<"Su promedio es: "<<(puntero_alumno + pos)->promedio<<endl;	
}
