/*Construir un programa que dada una serie de vehiculos
caracterizados por su marca, modelo y precio, imprima la
propiedades del vehículo más barato. Para ello, se deberán 
leer por teclado las características de cada vehículo y crear 
un clase que represente a cada uno de ellos.*/

#include <iostream>
#include "Vehiculos.h"
using namespace std;

int main(int argc, char** argv) {
	//declarar:
	Vehiculo* vehiculos;
	int numeroVehiculos, indiceB;
	string marca, modelo;
	float precio;
	
	cout<<"Ingrese el numero de vehiculos: ";
	cin>>numeroVehiculos;
	//inicializar arreglo de vehiculos
	vehiculos = new Vehiculo[numeroVehiculos];
	
	//Rellenar datos de cada vehiculo:
	for(int = 0; i < numeroVehiculos; i++){
		cin.ignore(); //liberar buffer
		cout<<"Ingrese la marca: ";
		getline(cin, marca);
		cout<<"Ingrese el modelo: ";
		getline(cin, modelo);
		cout<<"Ingrese el precio: ";
		cin>>precio;
		
		//inicializar el arreglo:
		vehiculos[i] = Vehiculo(marca, modelo,precio); //con el constructor
	}
	
	//Ver el mas barato
	
	indiceB = Vehiculo::indiceMBarato(v, numeroVehiculos);
	cout<<"El vehiculo más barato es: "<<endl;
	(v + indiceB)->mostrarDatos()
	//v[indiceB].mostrarDatos();
	
	delete[] v;
	return 0;
}
