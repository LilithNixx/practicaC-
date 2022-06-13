#include <iostream>
use namespace std;

class Atleta {
	private:
		int numAtleta;
		char nombre;
		float tiempoCarrera;
	
	public:
		Atleta(int numAtleta, char nombre, float tiempoCarrera){
			this->numAtleta = numAtleta;
			this->nombre = nombre;
			this->tiempoCarrera = tiempoCarrera;
		}
		Atleta(){
			
		}
		~Atleta(){
			
		}
		 float getTiempoCarrera();
		 void mostrarDatosGanador();
		 //pertenece a la clase y no a los objetos:
		 static int indiceGanador(Atleta arrAtletas[], int numAtletas);
};
