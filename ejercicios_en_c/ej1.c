#include "stdio.h"
int algo=0;
int suma(int a);
int main(int argc, char** argv){
	int resultado;
	resultado=suma(1000);
	printf("el resultado es %d \n", resultado);
}

int suma(int a){
	
	int i;
	for(i=1;i<=a;i++)
		{if (i%3==0 || i%5==0)
			{
			algo=algo+i;
			}
		}
	return algo;
} 
//
