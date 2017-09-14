#include<stdio.h>//mejorar

void main ()
{
  int nota1, nota2, nota3, nota4, promedio;
  float elegido;

  printf("Ingrese las notas de las primeras tres prácticas calificadas del estudiante:\n");
  scanf("%d %d %d", &nota1, &nota2, &nota3);
  if(nota1>20 || nota2>20 || nota3>20)
  printf("Ingrese correctamente las notas.\n");
  int intermedio = 20;
  do {
    intermedio --;
  promedio = (nota1 + nota2 +nota3 + intermedio)/4;
} while (intermedio<=20 && intermedio>0);
  ;
  if (promedio%4)
  printf("El promedio es: %d\n", promedio);
  else
  printf("No imprima.\n" );
}
