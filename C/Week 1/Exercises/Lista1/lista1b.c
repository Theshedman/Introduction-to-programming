#include<stdio.h>//bloque de instrucciones.la lógica se ve a golpe de vista, se usa tabulador y no espacios. normalmente no se da garantía de programas, casos de prueba, considerar los casos críticos
void main(void){
	int m, n;
	printf("Ingrese 2 enteros: ");
	scanf("%d %d", &m, &n);
	printf("%d - %d = %d", m, n, m-n);
}
