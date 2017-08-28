#include<stdio.h>
#include<math.h>
int main ()
{
  float a;
  float b;
  float c;
  float p;//preguntar que significa igualar a 0.
  float heron;
  
  bool isValidTriangle(int a, int b, int c){

  int longestSide = a;
  if (b > longestSide )
      longestSide = b;
  if(c > longestSide )
      longestSide = c;

  return (longestSide < a + b + c - longestSide);
  }

  printf("Ingrese la longitud del primer lado del triángulo\n");
  scanf("%f", &a );
  printf("Ingrese la longitud del segundo lado del triángulo\n");
  scanf("%f", &b );
  printf("Ingrese la longitud del tercer lado del triángulo\n");
  scanf("%f", &c );
  p = (a + b + c)/2.0;
  heron = (sqrt)(p*(p-a)*(p-b)*(p-c));
  printf("El área del triángulo de lados %.2f %.2f %.2f es %.2f:\n", a, b, c, heron );

  return(0);

}
