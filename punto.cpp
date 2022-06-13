#include "punto.h" //se incluye la clase

//con Punto:: indicamos la clase a la que pertenecen.
void Punto::setX(int valorX){
	x = valorX;
} 

void Punto::setY(int valorY){
	y = valorY;
}
		
int Punto::getX(){
	return x;
} 
		
int Punto::getY(){
	return y;
}
