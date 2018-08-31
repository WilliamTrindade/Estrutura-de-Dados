#include<stdio.h>
#include<stdlib.h>
void main(){
	int num, *p;
	printf("Informe um numero inteiro: \n");
	scanf("%d", &num);
	p = &num;
	*p = 1;
	printf("\n Novo Valor : %d", num);
}
