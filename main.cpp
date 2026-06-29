#include "arreglos.h"
#include <iostream>

using namespace std; 

int main(){
	int numeros[] = {5, 8, 10, 15, 20, 32};
	int arreglo[] = {10, 12, 11, 4, 8}; 
	const double euler = 2.7182; 
	
//	cout << "Suma del arreglo: " << sumaArreglo(numeros, 5) << endl;
//	cout << "Maximo del arreglo: " << maximo(numeros, 5) << endl; 
//	cout << "Cuadrado del arreglo: " << endl; 
//	cuadradoArreglo(numeros, 5); 
//	imprimirArreglo(numeros, 5);
//	
//	cout << "Valor de PI: " << PI << endl; 
//	cout << "Valor de euler: " << euler << endl;

	cout << "Elemento encontrado en la posicion: " << busquedaLineal(numeros, 6, 20) << endl; 
	cout << "Elemento encontrado en la posicion: " << busquedaBinariaInterativa(numeros, 6, 20) << endl; 
	cout << "Elemento encontrado en la posicion: " << busquedaBinariaRecursiava(numeros, 6, 20, 0, 5) << endl; 
	
//	cout << "Arreglo desordenado: " << endl;
//	imprimirArreglo(arreglo, 5); 
//	
//	bubbleSort(arreglo, 5); 
//	
//	cout << "Arreglo ordenado: " << endl; 
//	imprimirArreglo(arreglo, 5); 


//	cout << "Arreglo desordenado: " << endl;
//	imprimirArreglo(arreglo, 5); 
//	
//	selectionSort(arreglo, 5); 
//	
//	cout << "Arreglo ordenado: " << endl;  
//	imprimirArreglo(arreglo, 5); 

	
//	cout << "Arreglo desordenado: " << endl;
//	imprimirArreglo(arreglo, 5); 
//	
//	insertionSort(arreglo, 5); 
//	
//	cout << "Arreglo ordenado: " << endl; 
//	imprimirArreglo(arreglo, 5); 

//	cout << "Arreglo desordenado: " << endl;
//	imprimirArreglo(arreglo, 5); 
//	
//	mergeSort(arreglo, 0, 4); 
	
//	cout << "Arreglo ordenado: " << endl; 
//	imprimirArreglo(arreglo, 5); 

	cout << "Arreglo desordenado: " << endl;
	imprimirArreglo(arreglo, 5); 
	
	quickSort(arreglo, 0, 4); 
	
	cout << "Arreglo ordenado: " << endl; 
	imprimirArreglo(arreglo, 5); 
	
	return 0;
}


