#include "arreglos.h"
#include <stdio.h>
#include <stdlib.h>
//	Implementa funciones

// Cambio externo
int sumaArreglo(int arr[], int n){
	int suma = 0;  
	for(int i = 0;i < n;suma += arr[i++]);
	return suma; 
}

int maximo(int arr[], int n){
	int max = arr[0]; 
	for(int i = 1;i < n;i++){
		if(arr[i] > max){
			max = arr[i];
		}
		#ifdef DEBUG
			printf("Maximo: %d", max);
		#endif
	}
	return max;
}

int min(int arr[], int n){
	int min = arr[0]; 
	for(int i = 1;i < n;i++){
		if(arr[i] < min){
			min = arr[i];
		}
		#ifdef DEBUG
			printf("Maximo: %d", min);
		#endif
	}
	return min;
}

void cuadradoArreglo(int arr[], int n){
	for(int i = 0;i < n;i++){
		arr[i] = CUADRADO(arr[i]); 
	}	
}

void imprimirArreglo(int arr[], int n){
	for(int i = 0;i < n;i++){
		printf("%d, ", arr[i]);
	}
	printf("\n");
}

int busquedaLineal(int arr[], int n, int objetivo){
	for(int i = 0;i < n;i++){
		if(arr[i] == objetivo) return i; 
	}
	return -1;
}

int busquedaBinariaInterativa(int arr[], int n, int objetivo){
	int inicio = 0, fin = n - 1, mit; 
	
	while(inicio <= fin){
		mit = (inicio + fin) / 2;
		if(arr[mit] == objetivo) return mit; 
		if(arr[mit] < objetivo) inicio = mit +1;
		else fin = mit - 1;  
		
	}
	return -1; 
}

int busquedaBinariaRecursiava(int arr[], int n, int objetivo, int inicio, int fin){
	
	if(inicio > fin) return -1; 
	
	int mit = (inicio + fin) / 2; 
	if(arr[mit] == objetivo) return mit; 
	if(arr[mit] < objetivo) inicio = mit + 1;
	else fin = mit - 1; 
	
	return busquedaBinariaRecursiava(arr, n, objetivo, inicio, fin); 
}

void bubbleSort(int arr[], int n){
	int aux;
	for(int i = 0; i < n - 1;i++){
		for(int j = 0;j < n - i -1;j++){
			if(arr[j] > arr[j + 1]){
				aux = arr[j + 1]; 
				arr[j + 1] = arr[j]; 
				arr[j] = aux; 
			}
		}
	}
}

void selectionSort(int arr[], int n){
	int min, minIdx;
	for(int i = 0;i < n - 1;i++){
		min = arr[i]; 
		minIdx = i; 
		for(int j = i;j < n;j++){
			if(arr[j] < min){
				min = arr[j]; 
				minIdx = j;
			}
		}
		arr[minIdx] = arr[i]; 
		arr[i] = min; 
	}
}

void insertionSort(int arr[], int n){
	int aux;  
	for(int i = 1;i < n;i++){
		int j = i - 1; 
		aux = arr[i]; 
		while(arr[j] > aux && j != -1){
			arr[j + 1] = arr[j--]; 	
			imprimirArreglo(arr, n); 
//			j--;		
		}
		arr[j + 1] = aux; 
		imprimirArreglo(arr, n); 
	}
}

void merge(int arr[], int inicio, int mit, int fin){
	int i = 0, j = 0;
	int k = inicio;  // ? Empieza a escribir desde la posición actual
	int n1 = mit - inicio + 1;
	int n2 = fin - mit; 
	
	int *arrIzq = (int *) malloc(n1 * sizeof(int)); // Mejor usar sizeof
	int *arrDer = (int *) malloc(n2 * sizeof(int)); 
	
	for(i = 0; i < n1; i++) 
		arrIzq[i] = arr[inicio + i]; 
	for(i = 0; i < n2; i++) 
		arrDer[i] = arr[mit + 1 + i]; // ? Índice corregido
	
	i = 0;
	while(i < n1 && j < n2){
		if(arrIzq[i] <= arrDer[j]){
			arr[k] = arrIzq[i]; 
			i++; // ? Solo avanzas i si tomas de izquierdo
		} else {
			arr[k] = arrDer[j]; 
			j++; // ? Solo avanzas j si tomas de derecho
		}
		k++; // Siempre avanzas la posición de escritura
	} 
	
	// Copia los elementos restantes
	while(i < n1) arr[k++] = arrIzq[i++]; 
	while(j < n2) arr[k++] = arrDer[j++];
	
	free(arrIzq); 
	free(arrDer); 
}

void mergeSort(int arr[], int inicio, int fin){
	if(inicio >= fin) return; // ? Condición al inicio para mayor claridad
	
	int mit = (inicio + fin) / 2; 
	
	mergeSort(arr, inicio, mit); 
	mergeSort(arr, mit + 1, fin); 
	
	merge(arr, inicio, mit, fin); 
}

void intercambiar(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int particionar(int arr[], int inicio, int fin){
    int pivote = arr[fin];
    int i = inicio - 1;

    for(int j = inicio; j < fin; j++){
        if(arr[j] <= pivote)
            intercambiar(arr[++i], arr[j]);
    }
    intercambiar(arr[++i], arr[fin]);
    imprimirArreglo(arr, fin - inicio + 1);
    return i;
}

void quickSort(int arr[], int inicio, int fin){
    if(inicio >= fin) return;
    int posPivote = particionar(arr, inicio, fin); 
    
    quickSort(arr, inicio, posPivote - 1);
    quickSort(arr, posPivote + 1, fin);
}
