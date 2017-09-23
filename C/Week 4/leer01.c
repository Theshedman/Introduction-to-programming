#include<stdio.h>
#include<math.h>
void main (void) {
  float angle, sinus, cosinus, tangent;
  printf("Digite el valor del ángulo en radianes:\n");
  scanf("%f", &angle);
  sinus = sin(angle);
  cosinus = cos(angle);
  tangent = tan(angle);
  printf("El seno del ángulo es: %f\n",sinus);
  printf("El coseno del ángulo es: %f \n",cosinus);
  printf("El tangente del ángulo es: %f\n",tangent);
}
