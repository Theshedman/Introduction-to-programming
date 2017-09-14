#include<stdio.h>

void main (void){

int year;
printf("Ingrese un año mayor que 1600:\n");
scanf("%d", &year);
if (year%4==0)
{
    if(year%100==0)
    {
        if(year%400==0)
            printf("El año es bisiesto.");
        else
            printf("El año no es bisiesto.");
    }
    else
        printf("El año es bisiesto.");
    }
else
  printf("El año no es bisiesto.");
}
