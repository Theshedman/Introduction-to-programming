#include<stdio.h>
#include<math.h>
 void main (void)
 {
   float cateto1;
   float cateto2;
   float hipotenusa;//puede ser double

   printf("Ingrese el primer cateto\n");
   scanf("%f", &cateto1);
   printf("Ingrese el segundo cateto\n");
   scanf("%f", &cateto2); //d es para entero
   hipotenusa = sqrt (cateto1*cateto1+cateto2*cateto2);
   printf("La hipotenusa del triángulo es %.2f\n", hipotenusa );
   //.nf para n decimales.
   return(0);
 }
