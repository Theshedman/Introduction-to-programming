#include<stdio.h>

void main (void)
{
int n1, n2, n3;
printf("Ingrese tres números: ");
scanf("%d %d %d", &n1, &n2, &n3);
if (n1>n2 && n1>n3)
  printf("El número mayor es: %d\n", n1);
  else if (n2>n1 && n2>n3)
    printf("El número mayor es %d", n2);
    else
      printf("El número mayor es %d\n", n3);
}
