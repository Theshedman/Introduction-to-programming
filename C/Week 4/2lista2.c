#include<stdio.h>
//#include<stdlib.h>
void main (void)
{
char matrix, integrar;
printf("¿Te gustan las matrices? (T/F):");
scanf("%c", &matrix);
printf("¿Te gusta integrar? (T/F):");
scanf("%c", &integrar);
scanf("%c", &integrar);
if (matrix=='T')
  if (integrar=='T')     printf("Estudiemos las curvas de Lamé.\n");
  else                   printf("Aprenderemos el teorema fundamental de cálculo.\n");
else if (integrar=='T')  printf("Juguemos con el Teorema de Stokes.\n");
  else                   printf("Vamos a clases.\n");
  //system("pause");
}
