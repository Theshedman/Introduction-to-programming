#include<stdio.h>
void main(void){
  int a,b, op;
  printf("Ingrese un número:\n"); scanf("%d", &a);
  printf("Ingrese otro número:\n"); scanf("%d", &b);
  do
  {
    printf("\nIngrese una opción:\n");
    printf("Opción 1:\n");
    printf("Opción 2:\n");
    printf("Opción 3:\n");
    printf("Opción 4:\n");
    printf("Salir:");
    do
    {
    printf("Elija su opción\n");
    scanf("%d", &op);
  }while (op<1||op>5);
    switch (op) {
    case 1: printf("La suma es: %d\n", a+b);
    break;
    case 2: printf("La resta es %d\n", a-b);
    break;
    case 3: printf("La multiplicación %d\n", a*b);
    break;
    case 4: printf("La división %f.\n", (float) a/b);
    break;
    default: printf("Gracias por su visita\n");
  }
} while(op!=5);
}
