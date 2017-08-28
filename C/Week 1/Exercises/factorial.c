#include<stdio.h>/*comentario de prueba*/
int main()
{
    int n,i;
    unsigned long long factorial =1;

    printf("Ingrese un entero: ");
    scanf("%d",&n);

    // mostrar error si el usuario ingresa un entero negativo
    if (n < 0)
        printf("Error! Factorial de un número negativo no existe.");

    else
    {
        for(i=1; i<=n; ++i)
        {
            factorial *= i;             //factorial = factorial*i
        }
        printf("Factorial de %d = %llu", n, factorial);
    }
  return 0;
}
