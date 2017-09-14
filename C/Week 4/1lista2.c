#include<stdio.h>
void main(void){

int a,b,s,r,m;
float d;
//char k[20];
printf("Ingrese los números:");
//scanf("%d %d %s", &a, &b, &k);
scanf("%d %d", &a, &b);
if(b==0){
  printf("La suma es %d\nLa resta es %d\nEl producto es 0\nDivisión entre 0\n", a+b, a-b);
}
else if (a%b==0){
  printf("La suma es %d\nLa resta es %d\nEl producto es %d\nLadivisión es %d\n.", a+b, a-b, a*b, a/b);
  }
else
  printf("La suma es %d\nLa resta es %d\nEl producto es %d\nLadivisión es %f\n", a+b, a-b, a*b, a/(float)b);
}
