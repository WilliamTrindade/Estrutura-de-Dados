#include<stdio.h>
#include<stdlib.h>
#define n 10

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
	List *p;
	for(p=x;p!=NULL;p=p->prox) {
		printf("%d", p->valor);
	}
}

// pega o tamanho
int size(List *x) {
	List *p;
	int i;
	for(p=x;p!=NULL;p=p->prox) ++i;
	return i;
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
	
	// retorna o tamanho
	int tam = size(lista);
	printf("\nTamanho: %d", tam);
	
	return 0;
}
