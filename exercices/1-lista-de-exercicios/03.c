#include<stdio.h>
#include<stdlib.h>
#define n 10
#define pesquisa 9
typedef struct x{
	int valor;
	struct x *prox;
}List;

// insere
List *insere(List *x, int v) {
	if(x == NULL) {
		List *novo;
		novo = (List*) malloc(sizeof(List));
		novo->prox = NULL;
		novo->valor = v;
		return novo;
	}else {
		List *p;
		for(p=x;p->prox!=NULL;p=p->prox);
		List *novo;
		novo = (List*) malloc(sizeof(List));
		novo->prox = NULL;
		novo->valor = v;
		p->prox=novo;	
		return x;
	}
}

// printa
void print(List *x) {
	if(x == NULL) printf("\nLista Nula");
	List *p;
	for(p=x;p!=NULL;p=p->prox) {
		printf("%d", p->valor);
	}
}

// remove
List *removeL(List *x) {
	List *aux;
	while(x!=NULL) {
		aux = x;
		x=aux->prox;	
		free(aux);
	}
	return x;
}

int main() {	
	List *lista;
	lista = NULL;
	
	// insere
	int i;
	while(i!=n) {
		lista = insere(lista, i);
		++i;
	}
	
	// print
	print(lista);
	
	// remove lista
	lista = removeL(lista);
	
	// print
	print(lista);
		
	return 0;
}
