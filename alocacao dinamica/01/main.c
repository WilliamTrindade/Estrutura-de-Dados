#include<stdio.h>
#include<stdlib.h>
main(){
	/*
	ALOCACAO DINAMICA DE UM VETOR INT COM 25 POSICOES
	ATRIBUI UM VALOR PARA A POSICAO 10
	DEPOIS LIBERA
	*/
	int *vet = NULL;
	vet = (int*) malloc(25 * sizeof(int));
	vet[10] = 34;
	free(vet);
}
