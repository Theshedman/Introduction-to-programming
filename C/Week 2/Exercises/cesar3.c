#include<stdio.h>
#include<math.h>

int main()
{

float X,Y,X1,X2,Y1,Y2,DISTANCIA;

printf("digame su punto x inicio:");
scanf("%f",&X1);
printf("ahora digame su punto x final:");
scanf("%f",&X2);
printf("digame su punto de y inicio:");
scanf("%f",&Y1);
printf("ahora digame su punto y final:");
scanf("%f",&Y2);
X=X2 -X1;
Y=Y2-Y1;
DISTANCIA = sqrt(pow(X,2) + pow(Y,2) );

printf("la distancia es:%f",DISTANCIA);

  return 0;
}
