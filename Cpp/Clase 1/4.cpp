#include<iostream>
# define pi 3.14159

int main(){
	int a=10;
	std::cout << a << std::endl; // 10
	std::cout << a++ << std::endl;//imprime 10 y luego  a= a+1
	std::cout << ++a << std::endl;//imp 12
}
/*
a=10,
preincremento
++a
flecha abajo
a=a+1
post
el orden importa mucho
*/
