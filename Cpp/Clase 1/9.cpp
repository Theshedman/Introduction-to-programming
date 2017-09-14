#include<iostream>
#include<cmath>

float maximo(float a, float b);

int main(){
	float a = 2.5;
	float b = 8.3;
	std::cout << maximo(a,b) << std::endl;
}
//maximo devuelve flotante
float maximo(float a, float b){
	float resultado;
	resultado = (a>b)?a:b;
	return(resultado);
}
/*lo_que_me_bota NOMBRE()arg1,arg2, ...){
//codigo
}
*/
