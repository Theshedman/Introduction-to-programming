#include<stdio.h>
#include<math.h>
void main (void){
  float side1, side2, side3, cathet1, cathet2;

  printf("Ingrese los tres lados:\n");
  scanf("%f %f %f", &side1, &side2, &side3);

  if(side1>0 && side2>0 & side3>0)
  {
    if (side1+side2>side3 && side1+side3>side2 & side2+side3>side1)
      {
        printf("Es un triángulo.\n");
          if ((side1>side2 && side1>side3) && side1 == pow( pow(side2,2) + pow (side3,2) ,0.5))
            printf("Es un triángulo rectángulo y su hipotenusa es %f\n", side1);
            else if ((side2>side1 && side2>side3) && side2 == pow( pow(side1,2) + pow (side3,2) ,0.5))
            printf("Es un triángulo rectángulo y su hipotenusa es %f\n", side2);
            else if ((side3>side1 && side3>side2) && side3 == pow( pow(side1,2) + pow (side2,2) ,0.5))
            printf("Es un triángulo rectángulo y su hipotenusa es %f\n", side3);
            else
            printf("El triángulo no es rectángulo.\n");
        }
    else
    printf("No es un triángulo.\n");
  }
  else
  printf("Ingrese correctamente.\n");
////////////////////////////////////////////////////////////////////////////////////////////////////////////////
  //if (pow(menor,2) + pow(medio,2) > pow(mayor,2) || pow(menor,2) + pow(medio,2) < pow(mayor,2) )
  //cathet1 = medio;
  //cathet2 = menor;

  //hyp = sqrt(pow(cathet1,2) + pow(cathet2,2) );
  //else printf("Es un triángulo rectángulo de hipotenusa %f", hyp);
}
