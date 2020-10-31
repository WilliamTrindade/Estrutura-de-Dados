#include<stdio.h>
#include<stdlib.h>
#include "lib.h"
#define n 10
//Faça um algoritmo para criar uma lista encadeada e inserir elementos (nós) nela.
//Uma particularidade que esta lista deve ter é que o último elemento nunca aponta para NULL, 
//mas sim para o primeiro elemento.

main(){
	printf("\tINSERIR NO FINAL DA LISTA SIMPLESMENTE ENCADEADA CIRCULAR\n\n");
	
	Lista *a;
	a = NULL;
	
	//INSERE N VALORES NA LISTA ENCADEADA
	int i;
	for(i=0;i<n;i++){
		a = insere(a, i);
	}
	
	imprime(a);
}
