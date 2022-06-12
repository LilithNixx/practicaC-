#include <iostream>
using namespace std;

	//Estructuras o registros:
	
	struct coleccionCD {
		char titulo[30];
		char artista[25];
		int numCanciones;
		float precio;
		char fecha_compra[20];
	}CD1, CD2, CD3;
	//las variables contienen todas las propiedades de la estructura.
	
	struct Persona{
		char nombre[20];
		int edad;
	}
	
	persona1 = {"Alejandro", 20},
	persona2 = {"Ruperto", 15},
	persona3;

	//Estructura anidada:
	struct info_direccion {
		char direccion[30];
		char ciudad[20];
		char provincia[20];
	};
	
	struct empleado {
		char nombre[20];
		struct info_direccion dir_empleado;
		double salario;
	}empleados[2];
	
	
int main(){
	
	cout<<"Nombre: ";
	cin.getline(persona3.nombre, 20, '\n');
	cout<<"Edad: ";
	cin>>persona3.edad;
	
	
	cout<<"Nombre 1: "<<persona1.nombre<<endl;
	cout<<"Edad 1: "<<persona1.edad<<endl;
	
	cout<<"Nombre 2: "<<persona2.nombre<<endl;
	cout<<"Edad 2: "<<persona2.edad<<endl;
	
	cout<<"Nombre 3: "<<persona3.nombre<<endl;
	cout<<"Edad 3: "<<persona3.edad<<endl;
	
	cout<<"\n";
// ----------------------------------------------//

for(int i = 0; i < 2; i++){
	fflush(stdin); //vaciar el buffer y permitir digitar los valores 
	cout<<"Digite su nombre: ";
	cin.getline(empleados[i].nombre, 20, '\n');
	cout<<"Digite su direccion: ";
	cin.getline(empleados[i].dir_empleado.direccion, 30, '\n');
	cout<<"Ciudad: ";
	cin.getline(empleados[i].dir_empleado.ciudad, 20, '\n');
	cout<<"Provincia: ";
	cin.getline(empleados[i].dir_empleado.provincia, 20, '\n');
	cout<<"Salario: ";
	cin>>empleados[i].salario;
	cout<<"\n";
}

for (int i = 0; i < 2; i++){
	cout<<"Nombre: "<<empleados[i].nombre<<endl;
	cout<<"Direccion: "<<empleados[i].dir_empleado.direccion<<endl;
	cout<<"Ciudad: "<<empleados[i].dir_empleado.ciudad<<endl;
	cout<<"Provincia: "<<empleados[i].dir_empleado.provincia<<endl;
	cout<<"Salario: "<<empleados[i].salario;
}


	
	
	
	
	
	return 0;
}
