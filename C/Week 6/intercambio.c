#include<stdio.h>

float arr[0];

void main (void){

   printf("Ingrese un número de dos cifras: \n");
   scanf("%f", &arr[0]);
   printf("La suma de %.2f y %.2f es: %.2f\n"
   "La resta de %.2f y %.2f es: %.2f\n"
   "La multiplicación de %.2f y %.2f es: %.2f\n"
   "La división de %.2f y %.2f es: %.2f\n",
   arr[0], arr[1], arr[0]+arr[1],
   arr[0], arr[1], arr[0]-arr[1],
   arr[0], arr[1], arr[0]*arr[1],
   arr[0], arr[1], arr[0]/arr[1]);
}
