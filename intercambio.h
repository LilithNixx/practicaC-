#include <iostream>
using namespace std;

//plantilla de función:
template <typename G>

void intercambio(G &dato1, G &dato2){
	G aux;
	aux = dato1;
	dato1 = dato2;
	dato2 = aux;
}
