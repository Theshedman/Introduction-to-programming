// 03_03.c : Leer dos números, presentar un menú de operaciones, ejecutarlas repetidamente y salir finalmente.
#include<stdio.h>
void main(void){
int m, n, op;
printf("Ingrese un número entero m = ");
scanf("%d",&m);
printf("Ingrese un número entero n = ");
scanf("%d",&n);
do {
// presentar el menú si n !=5
printf("\nElija una operación:\n");
printf("1) Suma: m + n\n");
printf("2) Resta: m – n\n");
printf("3) Multiplicación: m * n\n");
printf("4) División: m/n\n");
printf()
printf("5) Salir:\n");
do {
printf("Elija su opción: "); scanf("%d",&op);
} while (op<0 || op > 5);
// Valida la opción entre 1 y 5
switch(op){
// Ejecuta la operación seleccionada
case 1: printf("suma = %d\n", m+n);
break;
case 2: printf("Resta = %d\n", m-n);
break;
case 3: printf("Multiplicación = %d\n", m*n); break;
case 4: if(n!=0) printf("División = %.2f\n", (float)m/n);
else printf("Divisor es 0\n"); break;
default: printf("Gracias por su visita\n");
}
} while(op!=5);
}
