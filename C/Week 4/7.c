//Programa para representar un número del 1 al 200 en nnúmeros romanos.
#include <stdio.h>

void main()
{
	int x,cent,decent,unit;
	printf("Digite un número para convertirlo a numeración romana: ");
	scanf("%d", &x);
	cent=x/100;
	decent=(x%100)/10;//obtiene las decenas
	unit=(x%100)%10;//obtiene el resto con 10.

	switch (cent) {
		case 1:printf("C");break;
		case 2:printf("CC");break;
		case 3:printf("CCC");break;
		case 4:printf("CD");break;
		case 5:printf("D");break;
		case 6:printf("DC");break;
		case 7:printf("DCC");break;
		case 8:printf("DCCC");break;
		case 9:printf("CM");break;
	}
	switch(decent){
		case 1:printf("X");break;//si no coloco break, se ejecutan las demás operaciones.
		case 2:printf("XX");break;
		case 3:printf("XXX");break;
		case 4:printf("XL");break;
		case 5:printf("L");break;
		case 6:printf("LX");break;
		case 7:printf("LXX");break;
		case 8:printf("LXXX");break;
		case 9:printf("XC");break;
	}
	switch(unit){
		case 1:printf("I");break;
		case 2:printf("II");break;
		case 3:printf("III");break;
		case 4:printf("IV");break;
		case 5:printf("V");break;
		case 6:printf("VI");break;
		case 7:printf("VII");break;
		case 8:printf("VIII");break;
		case 9:printf("IX");break;
	}
	printf(" es el número en numeración romana.\n");
}
