#include<stdio.h>
#include<stdlib.h>
#define n 3
#include"lib.h"
	
main(){
	int *x;
	//ALOCA N POSICOES
	x = (int*) malloc(n * 4);
	inserir(x);
	apresentar(x);	
	liberar(x);
	apresentar(x);	
}
