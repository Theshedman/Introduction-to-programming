#include<stdio.h>
//#include<string.h>
int  main ()
{
  char x[50];
  //int edad;
  printf("Hola, ¿cuál es tu nombre?");
  gets(x);
  //scanf("%s",nombre);/*No va el & en scanf*/
  printf("hola %s como estas.",x);
  //system("pause");
  return 0;
}
//#include<stdio.h>

//int main(){
//  char b[50];
//printf("cual es tu nombre:");
//gets(b);

//printf("tu nombre es:%s",b);

//  return 0;
//}
