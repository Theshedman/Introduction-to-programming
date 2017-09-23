#include<iostream>// corriente de entrada y salida macros de precompilación
//se compila g++ 1.cpp

int main(){//siempre variable entera
	int a;
	std::cout << "Ingrese a:";//std::cout es objeto /siout/
	std::cin >> a;
	std::cout << "a es: " << a << "Imprimiendo más texto" <<
	std::endl;
	//endl equivalente a \n
	//equivalente  a printf
	return 0;
}
