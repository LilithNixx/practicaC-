#include <iostream>
use namespace std;

class Vehiculo {
	private:
		string marca;
		string modelo;
		float precio;
	
	public:
		Vehiculo (string marca, string modelo, float precio){
			this->marca = marca;
			this->modelo = modelo;
			this->precio = precio;
		}
		Vehiculo(){ //constructor por defecto.
			
		}
		~Vehiculo(){ //Destructor (por haber un arreglo)
			
		}
		getPrecio();
		void imprimir();
		static int indiceMBarato(Vehiculo v[], int n);
};
