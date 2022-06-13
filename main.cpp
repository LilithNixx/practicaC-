/* Construir un programa para una competencia de atletiscmo, el programa
debe gestionar una serie de atletas caracterizados por su numero de atleta,
nombre y tiempo de carrera, al final el programa debe mostrar los datos del 
atleta ganador de la carrera*/

#include <iostream>
#include "atleta.h"
use namespace std;

int main(int argc, char** argv) {
	
	Atleta* arrAtletas;
	int nAtletas, numAtleta;
	string nombre;
	float tiempoCarrera;
	
	cout<<"Ingrese el numero de atletas a competir: ";
	cin<<nAtletas;
	
	arrAtletas = new Atletas[nAtletas];
	
	for (int i = 0; i < nAtletas; i++){
		cin.ignore();
		cout<<"Numero de atleta: ";
		cin<<numAtleta;
		cout<<"Nombre de atletla: ";
		getline(cin, nombre);
		cout<<"Tiempo de carrera: ";
		cin<<tiempoCarrera;
		
		//inicializar arreglo con el constructor:
		arrAtletas[i] = Atleta(numAtleta, nombre, tiempoCarrera);
	}
	
	indiceAtleta = Atleta::indiceGanador(arrAtletas, numAtletas);
	cout<<"El atleta ganador es: "<<endl;
	(arrAtletas+indiceAtleta)->mostrarDatos();
	
	
	return 0;
}
