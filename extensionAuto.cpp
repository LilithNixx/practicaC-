#include <iostream>
#include "claseAuto.h"


float Vehiculo::getPrecio(){
	return precio;
}

void Vehiculo::getPrecio(){
	cout<<"Marca: "<<marca<<endl;
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Precio: "<<precio<<endl;
	
}

int Vehiclo::indiceMBarato(Vehiculo v[], int n){
	int indice = 0;
	float precio;
	
	precio = coche[0].getPrecio();
	for (int i = 1; i < n; i++){
		if (v[i].getPrecio() < precio){
			precio = v[i].getPrecio();
			indice = i;		
		}
	}
	
	return indice;
}
