#include<stdio.h>
void main(void){
  int m, n, MCD, i;
  printf("Ingrese dos números enteros: ");
  scanf("%d %d", &m, &n);
  for (i=1; i<= m && i<= n; i++)
  {
  if(m%i==0 && n%i==0)
      MCD = i;
  }
  printf("El máximo común divisor de %d y %d es %d\n", m, n, MCD);
}
