#include<stdio.h>
void main(void){
  int n;
  printf("Escriba solo uno de los números 0 o 1");
  scanf("%d",&n);
  if (n==0){
    printf("0: CERO\n");
  }
  else printf("Ese número no es cero\n");/*Crear un programa que
  diga Ese numero X no es cero, donde X es el llamado.
  escribir un número en romanos.*/
}
!=//diferente
==//igual
&&//y lógico
||//o lógico
//preguntar página 2 del archivo If Swith
float division(int dividendo, int divisor)
{
	if (divisor) {
		return dividendo / divisor;
	} else {
		printf ("No se puede dividir por cero\n");
		return 0;
	}
}
