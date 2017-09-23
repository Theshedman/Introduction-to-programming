#include<stdio.h>
#include<math.h>
void main(void) {
int n, i, j, ai, aj;

printf("Ingrese un entero >=0: ");
scanf("%d", &n);
for(i=n; i>=-n; i--){
ai=fabs(i);
for(j=-n; j<=n; j++){
aj=fabs(j);
if(ai+aj<=n) printf("*");
else printf(" ");
}
printf("\n");
}
}
