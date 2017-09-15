#include<stdio.h>
void main(void){
  int desk, lap, priceDesk, priceLap;
  char catDesk, catLap;
  float pago, descuento;
  printf("Ingrese el número de Desktops y su categoría\n");
  scanf("%d %c", &desk, &catDesk);
  printf("Ingrese el número de laptops y su categoría\n");
  scanf("%d %c", &lap, &catLap);
  //Tarifas
  if(catDesk=='a')      priceDesk=20;
  else if(catDesk=='b') priceDesk=30;
      else              priceDesk=50;
  if(catLap=='a')       priceLap=30;
  else if(catLap=='b')  priceLap=50;
      else              priceLap=100;
  //Descuento

  if(desk+lap<3)        descuento=0;
  else if (desk+lap<6)  descuento=.10;
  else if (desk+lap<10) descuento=.20;
      else              descuento=.25;
  //Pago
  //pago=descuento*priceDesk+lap*priceLap;
  pago=desk*priceDesk+lap*priceLap;// debe decir
  //pago = desk*priceDesk + lap*priceLap; //así dice
  printf("Pago: %f, descuento: %f\n", (1-descuento)*pago, descuento*pago);
}
