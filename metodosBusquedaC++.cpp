#include <iostream>

using namespace std;

//prototypes:
void secuencial(int a[], int dato);
void binaria(int a[], int dato2);

//Métodos de búsqueda:
int main(){
	
	int a[] = {3,2,5,1,4};
	
	//búsqueda secuencial
	int dato = 4;
	secuencial(a, dato);

	//búsqueda binaria
	int dato2 = 5;
	binaria(a, dato2);

	
	return 0;	
}


void secuencial(int a[], int dato){
	int i = 0;
	char band = 'F';
	
	while((band == 'F') && (i < 5)){
		if(a[i] == dato){
			band = 'V';
		}
		i++;
	}
	if(band == 'F'){
		cout<<"El numero no existe en el arreglo";
	}
	else if (band == 'V'){
		cout<<"El numero ha sido encontrado en las posicion: "<<i-1<<endl;
	}
}

void binaria(int a[], int dato2){
	int inf = 0, sup = 5, mitad;
	char band = 'F';
	
	while((inf <= sup) && (band == 'F')){
		mitad = (inf + sup)/2;
		
		if (a[mitad] == dato2){
			band = 'V';
			cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
			break;
		}
		if (a[mitad] > dato2){
			sup = mitad;
			mitad = (inf + sup)/2;
		}
		if (a[mitad] < dato2){
			inf = mitad;
			mitad = (inf + sup)/2;
		}
		
		if (band == 'V'){
			cout<<"El numero ha sido encontrado en la posicion: "<<mitad<<endl;
		}
		else {
			cout<<"El numero no ha sido encontrado";
		}
	}
	
}
