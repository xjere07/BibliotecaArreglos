
#ifndef ARREGLOS_H
#define ARREGLOS_H


#define CUADRADO(x) ((x)*(x))

#define PI 3.1416

//#define DEBUG
									//	Declara funciones
int sumaArreglo(int arr[], int n); 
int maximo(int arr[], int n);
int min(int arr[], int n);
void cuadradoArreglo(int arr[], int n);
void imprimirArreglo(int arr[], int n);
int busquedaLineal(int arr[], int n, int objetivo);

int busquedaBinariaInterativa(int arr[], int n, int objetivo);
int busquedaBinariaRecursiava(int arr[], int n, int objetivo, int inicio, int fin);

void bubbleSort(int arr[], int n);
void selectionSort(int arr[], int n);
void insertionSort(int arr[], int n);


void merge(int arr[], int inicio, int mit, int fin);
void mergeSort(int arr[], int inicio, int fin);

void intercambiar(int &a, int &b);
int particionar(int arr[], int inicio, int fin);
void quickSort(int arr[], int inicio, int fin);

#endif 
