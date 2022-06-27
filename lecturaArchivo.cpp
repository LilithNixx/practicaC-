/*Realice un programa que pida al usuario el nombre o ubicacion de un fichero de text y, a continuacion
de lectura a todo el fichero.*/

#include <iostream>
#include <stdlib.h>
#include <string.h>
#include <fstream>
using namespace std;
void lectura();

int main() {
    
    lectura();
    
    
    system("pause");
    return 0;
}

void lectura(){
    ifstream arch;
    string texto, nombre;

    cout<<"Ingrese el nombre de un fichero o su ubicacion: ";
    getline(cin, nombre);

    arch.open(nombre.c_str(), ios::in);

    if(arch.fail()){
        cout<<"No se pudo abrir el archivo";
        exit(1);
    }

    while (!arch.eof()) {
        getline(arch, texto);
        cout<<texto<<endl;
    }

    arch.close();
}
