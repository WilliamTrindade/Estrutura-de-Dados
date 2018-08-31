#include<stdio.h>
#include<stdlib.h>
void main(){
	int idade = 10;
	int *pIdade = &idade;
	
	//printa a idade
	printf("%d \n", idade);
	
	//printa a posição da memoria da idade
	printf("%x \n", &idade);
	
	//printa o ponteiro
	printf("%d \n", pIdade);
	
	//* printa o valor pelo endereco
	printf("%d \n", *pIdade);
	
	//%d = inteiro
	//%x = exadecimal
}
