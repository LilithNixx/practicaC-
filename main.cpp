#include <iostream>
#include "Punto.h"
using namespace std;

//Creacion de objetos:

int main(int argc, char** argv) {
	//clase nombre(valores de los atributos);
	Punto p1(2,1); //creacion de objeto estatico.
	
	//usar los metodos:
	//para usar el valor de un objeto estatico se usa .
	cout<<"El valor de X es:"<<p1.getX()<<endl;
	cout<<"El valor de Y es:"<<p1.getY()<<endl;
	
	Punto* p2 = new Punto(); //creacion de objeto dinamico.
	
	//para establecer el valor de un objetivo dinamico se usa ->
	p2->setX(5); 
	p2>setY(3);
	
	cout<<"El valor de X es: "<<p2->getX()<<endl;
	cout<<"El valor de Y es: "<<p2->getY()<<endl;
	
	
	
	return 0;
}
