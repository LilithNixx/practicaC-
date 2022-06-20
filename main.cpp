/*definir una plantilla dentro de un archivo de cabecera llamado "intercambio.h"
que úeda intercambiar el valor de dos elementos del mismo tipo.*/

#include <iostream>
#include "intercambio.h"
using namespace std;

int main(int argc, char** argv) {
	int dato1, dato2;
	float datof1, datof2;
	char datoc1, datoc2;
	//Itercambiar enteros:
	cout<<"Ingrese dos numeros enteros: "<<endl;
	cin>>dato1; cin>>dato2;
	cout<<"Usted ingreso "<<endl;
	cout<<"Dato1: "<<dato1<<endl;
	cout<<"Dato2: "<<dato2<<endl;
	cout<<"\n";
	intercambio(dato1, dato2);
	cout<<"Ahora "<<endl;
	cout<<"Dato1: "<<dato1<<endl;
	cout<<"Dato2: "<<dato2<<endl;
	cout<<"\n\n";
	//Intercambiar flotantes:
	cout<<"Ingrese dos numeros flotantes: "<<endl;
	cin>>datof1; cin>>datof2;
    cout<<"Usted ingreso "<<endl;
	cout<<"Dato1: "<<datof1<<endl;
	cout<<"Dato2: \n"<<datof2<<endl;
	cout<<"\n";
	intercambio(datof1, datof2);
    cout<<"Ahora "<<endl;
	cout<<"Dato1: "<<datof1<<endl;
	cout<<"Dato2: "<<datof2<<endl;	
	cout<<"\n\n";
	//Intercambio de caracteres:
	cout<<"Ingrese dos caracteres: "<<endl;
	cin>>datoc1; cin>>datoc2;
    cout<<"Usted ingreso "<<endl;
	cout<<"Dato1: "<<datoc1<<endl;
	cout<<"Dato2: \n"<<datoc2<<endl;
	cout<<"\n";
	intercambio(datoc1, datoc2);
    cout<<"Ahora ";
	cout<<"Dato1: "<<datoc1<<endl;
	cout<<"Dato2: "<<datoc2<<endl;	
		
	return 0;
}
