#include<stdio.h>
#include<math.h>
int main(){
float cateto1,cateto2,hipotenusa;

printf("digite su primer valor:");
scanf("%f",&cateto1);
printf("digite su segundo valor:");
scanf("%f",&cateto2);
hipotenusa = sqrt(pow(cateto1,2)+pow(cateto2,2));

printf("la hipotenusa es: %f",hipotenusa);
  return 0;
}
