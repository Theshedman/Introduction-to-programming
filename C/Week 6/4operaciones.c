#include<stdio.h>

float arr[2];

void main (void){

   printf("Ingrese dos números: \n");
   scanf("%f %f", &arr[0], &arr[1]);
   printf("La suma de %.2f y %.2f es: %.2f\n"
   "La resta de %.2f y %.2f es: %.2f\n"
   "La multiplicación de %.2f y %.2f es: %.2f\n"
   "La división de %.2f y %.2f es: %.2f\n",
   arr[0], arr[1], arr[0]+arr[1],
   arr[0], arr[1], arr[0]-arr[1],
   arr[0], arr[1], arr[0]*arr[1],
   arr[0], arr[1], arr[0]/arr[1]);
}
