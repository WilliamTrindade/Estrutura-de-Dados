#include<stdio.h>
#include<stdlib.h>
#define n 10
#include"lib.h"

void main(){
	int vetor[n] = {}, i=0;
	
	while(1){
		printf("Insercao em Fila de Prioridade - Implementada em Vetores\n\n");
		i = inserir(vetor, i);
		imprimir(vetor);
	}
}
