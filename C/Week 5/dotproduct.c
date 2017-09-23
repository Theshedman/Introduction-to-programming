#include<stdio.h>
#include<ctype.h>

void main (void){

  int i, dimension, dotproduct=0, decision;
  int a[dimension], b[dimension];

  printf("Ingrese la dimensión del espacio euclidiano del vector: \n");
  scanf("%d", &dimension);

  printf("Muy bien.\n"
  "Ingrese el primer vector\n");
  scanf("%d", &a[dimension]);
  printf("Ingrese el segundo vector\n");
  scanf("%d", &a[dimension]);

  for(i=0; i<=n-1, i++){
    dotproduct = dotproduct + a[i]*b[i]
  }
  printf("El producto interno es: %d\n", dotproduct);

/*do {
printf("¿Desea calcular otro producto interno? (s/n)\n");
scanf("%c", &decision);
getchar();
}while(decision=='s');

(while(decision=='n'){

}*/
}
