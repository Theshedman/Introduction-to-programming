#include<stdio.h>
#include<math.h>
#define PI 3.1416
#define FR 1.333
int main()
{
  float r,volumen;

  printf("Ingrese el tamaño del radio: ");
  scanf("%f",&r);
  volumen = FR * PI * pow(r,3);//preguntar al profesor

  printf("su volumen es:%.2f",volumen);

  return 0;
}
