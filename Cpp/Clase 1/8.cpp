#include<iostream>
#include<cmath>
int main(){
	int a=2;
	
	for(float i=0.0; i <= 10; i +=1/pow(2,i)){
		std::cout << i << std::endl;
	}
// 0+ 1/1+1/2+1/4+1/8
}
