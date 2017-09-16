/*Programa para validar un número flotante*/
#include<stdio.h>
#include<math.h>
void main(void){
	float N;
	do{
		printf("Escriba un número entre e y pi:");
		scanf("%f", &N);
	}
	while (N<2.71828 || N>3.14159);
	printf("Número: %.2f\n", N);
	printf("El seno del número %.2f es %.2f\n", N, sin(N));
}
