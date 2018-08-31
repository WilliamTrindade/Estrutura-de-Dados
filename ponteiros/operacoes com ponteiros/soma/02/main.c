#include<stdio.h>
#include<stdlib.h>
void main(){
	int a = 11, *p = &a;
	printf("Valor de p: %x \n", p);
	p++;
	printf("Proxima posicao: %x \n", p);
	system("pause");
}
