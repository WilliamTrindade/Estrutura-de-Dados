#include<stdio.h>
#include<stdlib.h>
#include "lib.h"
#define n 10
//Fa�a um algoritmo para criar uma lista encadeada e inserir elementos (n�s) nela.
//Uma particularidade que esta lista deve ter � que o �ltimo elemento nunca aponta para NULL, 
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
