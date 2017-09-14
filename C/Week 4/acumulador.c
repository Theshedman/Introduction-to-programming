#include <stdio.h>//como puedo hallar el promedio.
int main()
{
   char seguir;
   int acumulador, numero, promedio;
   acumulador = 0;
   do
   {
      printf("Introduzca un número entero: ");
      scanf( "%d", &numero);

      acumulador += numero;

      printf("¿Desea introducir otro número (s/n)?:");
      fflush(stdin);
      scanf("%c", &seguir);
   } while (seguir != 'n');

      promedio=acumulador/n;
   /* Mientras que el usuario desee introducir
      más números, el bucle iterará. */
   printf("La suma de los números introducidos es: %d", promedio );
   return 0;
}
