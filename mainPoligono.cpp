#include <iostream>
#include "poligono.h"
#include "triangulo.h"
#include "rectangulo.h"
using namespace std;


int main(int argc, char** argv) {
	
	Poligono* poligonos[2];	//crear objeto
	
	poligonos[0] = new Rectangulo(7,3); //instanciar un rectangulo
	poligonos[1] = new Triangulo(3,4,4);
	
	for (int i = 0; i < 2; i++){
		cout<<"Area: "<<poligonos[i]->area()<<endl;
		cout<<"Perimetro: "<<poligonos[i]->perimetro()<<endl;
	} //polimorfismo
	
	return 0;
}
