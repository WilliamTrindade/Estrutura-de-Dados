#include<stdio.h>
#include<stdlib.h>
#include "lib.h"
#define n 10

Lista * copiar(Lista *a, Lista *b);

main(){
	printf("\tCOPIAR VALORES ENTRE LISTAS\n");
	Lista *a;
	Lista *b;
	
	a = NULL;
	b = NULL;
	
	//INSERE N VALORES NA LISTA ENCADEADA
	int i;
	for(i=0;i<n;i++){
		a = insere(a, i);
	}

	//COPIA O VALOR DA LISTA A PARA A LISTA B
	b = copiar(a, b);
	
	//IMPRIME A LISTA A
	printf("LISTA A \n\n");
	imprime(a);
	
	//IMPRIME A LISTA B
	printf("LISTA B \n\n");
	imprime(b);
	
}

//COPIAR VALORES
Lista * copiar(Lista *a, Lista *b){
	Lista *p;
	
	//if(b==NULL){
	//	b=(Lista*) malloc(sizeof(Lista));
	//}
	
	for(p=a;p!=NULL;p=p->prox){
		
		b = insere(b, p->info);
		
	}
	return b;
}
