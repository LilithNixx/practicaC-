//Librerias
#include <iostream> //permite que el programa tenga entradas y salidas de datos
#include <math.h>  //permite realizar operaciones matematicas.
#include <conio.h> //para usar la funcion getch()
#include <stdlib.h> //para usar la funcion system("pause");
#include <time.h> //para generar numeros aleatorios.
#include <string.h> //para trabajar con strings y sus funciones.

//para imprimir en pantalla sin usar std::
using namespace std;
 
int main(){
	
	//imprimir en pantalla:
	cout<< "Hello world :D"<<endl; //<<endl o \n hacen un espacio
	
	//tipos de datos básicos:
	int numero = 15;
	cout<<numero;
	float flotante = 10.45;
	cout<<flotante;
	double mayor = 16.3456;
	cout<<mayor;
	char letra = 'a';
	cout<<letra;
	
	//entrada de datos:
	float num;
	cout.precision(2); //para disminuir los decimales un flotante
	cout<<"Digite un numero: ";
	cin>>num;
	cout<<"El numero que digito es: "<<num;
	
	//Operaciones:
	int n1, n2, suma = 0, mul = 0, div = 0, resta = 0, potencia;
	cout<<"Digite un numero: "; 
	cin>>n1;
	cout<<"Digitr otro numero: "; cin>>n2;
	
	suma = n1 + n2;
	resta = n1 - n2;
	mul = n1 * n2;
	div = n1 / n2;
	potencia = pow(n1, 2); //el segundo elemento es la potencia.
	
	cout<<"Suma: "<<suma<<endl;
	cout<<"Resta: "<<resta<<endl;
	cout<<"Multiplicacion: "<<mul<<endl;
	cout<<"Division: "<<div<<endl;
	//cout<<"Raiz cuadrada: "<<squrt(n1)<<endl;
	cout<<"Potencia: "<<potencia;
	
	//generar numeros aleatorios:
	srand(time(NULL));
	int dato = 1 + rand()%(100);//genera solo 1 numero entre 1 y 100
	cout<<"El dato generado es el: "<<dato;
	
	//condicionales: (==, <, <=, >, >=, !=, &&, ||)
	
	if (n1 > n2){
		cout<<"Mayor: "<<n1;
	}
	else if (n1 == n2){
		cout<<"Son iguales";
	}
	else {
		cout<<"Mayor: "<<n2;
	}

	//casos:
	int n;
	cout<<"Digite un numero del 1 al 3";
	cin>>n;
	
	switch(n){
		case 1: cout<<"opcion 1"; break;
		case 2: cout<<"opcion 2"; break;
		case 3: cout<<"opcion 3"; break;
		default: cout<<"No existe"; break;
	}

	//ciclos:
	
	//while:
	int i = 1;
	while(i <= 10){
		cout<<i<<endl;
		i++;
	}
	
	//getch(); permite que el ejecutable no se cierre automaticamente sino despues de que se precione una tecla
	//system("pause"); hace lo mismo que getch().
	
	//do-while:
	
	do {
		cout<<i<<endl;
		i++;
	}while(i <=10);
	
	//for:
	for(int a=1; a<=10; a++){
		cout<<a<<endl;
	}
	
	//Vectores:
	int vectorEnteros[10];
	char vectorLetras[10];
	float vectorFlotantes[] = {1.2, 3.4, 5.3, 6.7};
	
	cout<<vectorFlotantes[0]<<endl;
	
	//Matrices:
	
	//Agregar elementos:
	//forma 1:
	int matriz[2][2] = {1,2 , 3,4}; //cada grupo es una fila.
	cout<<matriz[0][1];
	//forma 2:
	int matriz2[2][3] = {{1,2,3} , {4,5,6}};
	cout<<matriz2[0][0];
	//forma 3:
	int matriz3[2][3] = {1,2,3,
						 4,5,6};
	for(int fila = 0; fila < 2; fila++){
		for (int col = 0; col < 3; col++){
			cout<<matriz3[fila][col];
		}
		cout<<"\n";
	}
	
	//cadenas de caracteres:	
	char palabra[] = "Sol";
	char palabra2[] = {'a', 'b', 'C'};
	char nombre[30];
	
	/*si uso cin solo imprime la primer palabra hasta un espacio por eso usamos gets():
	pero gets toma mas memoria de la asignada, por eso mejor es usar cin.getline()*/
	cin.getline(nombre, 20, '\n'); //nombre de la variable, cantidad de elementos, cuando termina.
	
	//calcular longitud (valor entero):
	int longitud = strlen(palabra);
	cout<<"Numero de elementos: "<<longitud;
	
	//copiar una cadena:
	char palabra3[20];
	strcpy(palabra3, palabra); //cadena vacia, cadena que queremos copiar.
	
	//concatenar cadenas:
	char concatenadas[] = "Daniela ";
	strcat(concatenadas, palabra);
	cout<<concatenadas<<endl;
	 
	//invertir una cadena:
	strrev(palabra);
	cout<<palabra<<endl;
	
	//pasar de minuscula a mayuscula:
	strupr(palabra);
	cout<<palabra<<endl;
	
	//pasar de mayuscula a minuscula:
	strlwr(palabra);
	cout<<palabra<<endl;
	
	//pasar de string a entero (atoi) o flotante (atof) - (stdlib.h):
	char cad1[] = "123";
	char cad2[] = "1.23";
	int l, m;
	l = atoi(cad1);
	cout<<n<<endl;
	m = atof(cad2);
	cout<<m<<endl;
	 
	return 0;
}
