#include <iostream>
#include "atleta.h"
use namespace std;

float Atleta::getTiempoCarrera(){
	return tiempoCarrera;
}

void Atleta::mostrarDatosGanador(){
	cout<<"Numero de atleta ganador: "<<numAtleta<<endl;
	cout<<"Nombre del atleta ganador: "<<nombre<<endl;
	cout<<"Tiempo de carrera: "<<tiempoCarrera()<<endl;
}

int Atleta::indiceGanador(Atleta arrAtletas[], int numAtletas){
float tiempo;
int indice = 0;

//el primer tiempo del 1er atleta
tiempo = atletas[0].getTiempoCarrera;
for(int i = 0; i < numAtletas; i++){
	if(arrAtletas[i].getTiempoCarrera < tiempo){
		tiempo = arrAtleta[i].getTiempoCarrera;
		indice = i;
	}
	return indice;
}
}
