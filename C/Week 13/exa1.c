#include <stdio.h>
#include <stdlib.h>

void ingresar(int* arr);
void imprimir(int* arr, int n);

void main(){
	int * arr_notas = malloc(sizeof(int));
	ingresar(arr_notas);
}

void ingresar(int* arr){
	int valor_ingresado, index = 0;
	printf("Ingresar nota: ");
	scanf("%d", &valor_ingresado);
	
	while(valor_ingresado >= 0){
		while(valor_ingresado > 20){
			printf("Nota no admisible. Ingresar otra: ");
			scanf("%d", &valor_ingresado);
		}
		// ya tengo una nota admisible
		arr[index] = valor_ingresado;
		// Imprimir el arreglo actual
		imprimir(arr, index + 1);
		// acrecentar el arreglo
		arr = realloc(arr, (index+2)*sizeof(int));
		index++;
		
		printf("Ingresar nota: ");
		scanf("%d", &valor_ingresado);
		
	}
}

void imprimir(int* p, int n){
	int i;
	for(i = 0; i<n; i++){
		printf("%d ", *(p + i));
	}
	printf("\n");
}
