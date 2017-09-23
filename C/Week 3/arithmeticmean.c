/*
 * Programa en C donde se ingresa números reales y se busca el promedio,
 * la varianza y la desviación estándar.
 */
#include <stdio.h>
#include <math.h>
#define MAXSIZE 10

void main()
{
    float x[MAXSIZE];
    int  i, n;
    float promedio, varianza, std_deviation, sum = 0, sum1 = 0;

    printf("Digite la cantidad de datos \n");
    scanf("%d", &n);
    printf("Ingrese los %d números reales \n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%f", &x[i]);
    }
    /*  Compute the sum of all elements */
    for (i = 0; i < n; i++)
    {
        sum = sum + x[i];
    }
    promedio = sum / (float)n;
    /*  Compute  variance  and standard deviation  */
    for (i = 0; i < n; i++)
    {
        sum1 = sum1 + pow((x[i] - promedio), 2);
    }
    varianza = sum1 / (float)n;
    std_deviation = sqrt(varianza);
    printf("El promedio de los números es %.3f.\n", promedio);
    printf("La varianza de los números es %.4f.\n", varianza);
    printf("La desviación estándar es %.4f.\n", std_deviation);
}
