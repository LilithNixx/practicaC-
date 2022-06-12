#include <iostream>

using namespace std;

//prototypes:
void burbuja(int &numeros1);
void insercion(int &numeros1);
void seleccion(int &numeros1);
void intercambio(float &x, float &y);
void ordenacionShell(float arreglo, int elem);
void quicksort(float a[], int primero, int ultimo);

//Metodos de ordenamiento:
int main(){
	int numeros1[] ={4,1,2,3,5};
	
	//Metodo de burbuja:
	burbuja(*numeros1);
	
	cout<<"Metodo de burbuja."<<endl;
	cout<<"Orden Ascendente: ";
	for (int m =0; m<5; m++){
		cout<<numeros1[m]<<" ";
	}
	cout<<"Orden Descendente: ";
	for (int m =4; m>=0; m--){
		cout<<numeros1[m]<<" ";
	}
	
	//Metodo por insercion:
	insercion(*numeros1);

	cout<<"Ordenamiento por insercion."<<endl;
    cout<<"Orden Ascendente: ";
	for (int i = 0; i < 5; i++){
		cout<<numeros1[i]<<" ";
	}
	
	cout<<"Orden Descendente: ";
	for (int j = 4; j >= 0; j--){
		cout<<numeros1[j]<<" ";
	}
	
	
	//Ordenamiento por seleccion:
	seleccion(*numeros1);
	
	cout<<"Metodo por seleccion."<<endl;
	cout<<"Orden Ascendente: ";
	for (int h = 0; h < 5; h++){
		cout<<numeros1[h]<<" ";
	}
	
		cout<<"Orden Descendente: ";
	for (int s = 4; s >= 0; s--){
		cout<<numeros1[s]<<" ";
	}
	
	//Ordenamiento Shell:
	float numeros[] = {4.3,1,3,5,2,0.6,4.5};
	ordenacionShell(*numeros, 7);
	
	cout<<"Ordenamiento Shell.";
	cout<<"Orden Ascendente: ";
	for (int i = 0; i < 7; i++){
		cout<<numeros[i]<<" ";
	}
	
	cout<<"Orden Descendente: ";
	for (int i = 6; i >= 0; i--){
		cout<<numeros[i]<<" ";
	}
	
	//metodo quick Sort:
	float arregloQuickSort[] = {2,4,1,0.4, 9, 8.7, 0.1};
	
	quicksort(arregloQuickSort, 0, 7);
	
	cout<<"Ordenamiento Quick Sort.";
	cout<<"Orden Ascendente: ";
	for (int i = 0; i < 7; i++){
		cout<<arregloQuickSort[i]<<" ";
	}
	
	cout<<"Orden Descendente: ";
	for (int i = 6; i >= 0; i--){
		cout<<arregloQuickSort[i]<<" ";
	}
	
	
	
	
	
	return 0;
}


//-------------- funciones --------------//

void burbuja(int &numeros1){
	int i,j,aux;
	
	for (i =0; i<5; i++){
		for (j =0; j<5; j++){
			if(numeros1[j] > numeros1[j+1]){
				aux = numeros1[j];
				numeros1[j] = numeros1[j+1];
				numeros1[j+1] = aux;
			}
		}
	}
}

void insercion(int &numeros1){
		int i, pos, aux;
	
	for (i = 0; i<5; i++){
		pos = i; //apunta a la posicion
		aux = numeros1[i];
		
		//numeros[pos-1] es el numero a la izquierda y aux es el actual
		while((pos>0) && (numeros1[pos-1] > aux)){
			numeros1[pos] = numeros1[pos-1];
			pos--;
		}
		numeros1[pos] = aux;
	}
}

void seleccion(int &numeros1){
		int i,j,aux,min;
	
	for(i=0; i<5; i++){
		min = i; //se supone que el primer elemento es el minimo.
		for(j=i+1; j<5; j++){
			if(numeros1[j] < numeros1[min]){
				min = j;
			}
		}
		aux = numeros1[i];
		numeros1[i] = numeros1[min];
		numeros1[min] = aux;
		
	}
}

void intercambio(float &x, float &y){
	float aux;
	aux = y;
	x = y;
}

void ordenacionShell(float arreglo, int elem){
	int salto, i, j, k;
	salto = elem/2;
	
	while(salto > 0){
		for(i = salto; i < elem; i++){
			j = i - salto;
			while(j >= 0){
				k = j + salto;
				if (arreglo[j] <= arreglo[k]){ //elementos ordenados
					j = -1;
				}
				else { //elementos no ordenados
					intercambio(arreglo[j], arreglo[k]);
					j -= salto;
				}
			}	
		}
	}salto = salto/2;
}

void quicksort(float a[], int primero, int ultimo){
	int i,j,central;
	float pivote;
	
	central = (primero+ultimo)/2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do {
		while(a[i] < pivote) i++;
		while(a[j] > pivote) j--;
		
		if (i < j){
			intercambio(a[i], a[j]);
		}
	}while(i <= j);
	
	if(primero < j){
		quicksort(a, primero, j); //ordenamos la sublista izquierda
	}
	if (i < ultimo){
		quicksort(a, i, ultimo); //ordenamos la sublista derecha
	}
}
