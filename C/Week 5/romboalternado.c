#include<stdio.h>
#include<math.h>
void main (void){
  int n, i, j, ai, aj, alterno;
  printf("Ingrese un entero >=0: ");
  scanf("%d", &n);

  for(i=n; i>=-n; i--){
      ai=fabs(i);
      alterno=1;

      for(j=-n; j<=n; j++){
        aj=fabs(j);

        if(ai+aj<=n){
        if(alterno) printf("*");
        else        printf("+");
        alterno= !alterno;
        }else       printf(" ");
      }
printf("\n");
  }
}
