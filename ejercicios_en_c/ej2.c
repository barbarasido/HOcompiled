#include "stdio.h"
int fibo(int num);
int a=0;
int b=1;
int suma=0;
int fib;
int main(int argc, char** argv){
	int resultado;
	resultado=fibo(1000000);
	printf("el resultado es %d \n", resultado);
}
int fibo(int num){
	
	int i;
	while(b<num)
		{if (b%2==0){
			fib=fib+b;
			}
		suma=a+b;
		a=b;
		b=suma;
		
		
	
		}
	return fib;
} 
