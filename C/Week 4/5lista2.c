#include<stdio.h>

void main (void)
{
int n;
printf("Ingrese un número entero positivo: ");
scanf("%d", &n);
if (n%5!=0 && n%9!=0)
  printf("%d no es múltiplo de 5 ni 9.\n", n);
  else if (n%5==0 && n%9!=0)
    printf("%d es múltiplo de 5 pero no de 9.", n);
    else if (n%5!=0 && n%9==0)
      printf("%d es múltiplo de 9 pero no de 5.", n);
    else
      printf("%d es múltiplo de 5 y 9.", n);
}
