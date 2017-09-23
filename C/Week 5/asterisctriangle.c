#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
	for(int y = -(n-0); y <= n-0; y++){
		for(int x = -(n-0); x <= n-0; x++){
			if(abs(y) + abs(x) <= n)
				printf("*");
			 else 
				printf(" ");

		}
		// Acabado el 'for' interno debemos imprimir un salto de linea para
		// indicar una variacion en la verical
		printf("\n");
	}
}
