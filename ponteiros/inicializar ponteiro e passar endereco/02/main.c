#include<stdio.h>
#include<stdlib.h>
void main(){
	int a = 10;
	float b = 20.10;
	int *x = &a;
	float *y = &b;
	
	printf("Valores : \na = %d \nb = %f \n\n", a, b);
	printf("Enderecos : \na = %d \nb = %d \n\n", &a, &b);
	printf("Valor dos Ponteiros : \nx = %d \ny = %d \n\n", x, y);
	printf("Endereco dos ponteiros : \na = %d \nb = %d \n\n", &x, &y);
	printf("Valores apontados : \na = %d \nb = %f \n\n", *x, *y);
	
}
