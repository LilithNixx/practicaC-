//Rellenar un arreglo con n numeros, y utilizando puntertos
//determinar el menor elemento
#include <iostream>
using namespace std;

int main (){
	int *puntero, array[5], menor;
	
	//Ingresar datos:
	cout<<"Ingrese los numeros: "<<endl;
	for (int i = 0; i < 5; i++)	{
		cin>>array[i];
	}
	
	//Igualar el puntero a la posicion inicial del arreglo para recorrerlo
	puntero = array;
	
	//calcular menor
	for (int x = 1; x < 5; x++){
		 menor = array[0];
		if (array[x] < menor){
			menor = array[x];
		}
		puntero++;
	}
	
	//mostrar menor
	cout<<"El menor numero ingresado en el array es el: "<<menor<<endl;
	
	
	return 0;
}



