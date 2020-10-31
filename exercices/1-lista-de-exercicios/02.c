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
	List *p;
	for(p=x;p!=NULL;p=p->prox) {
		printf("%d", p->valor);
	}
}

// busca
List *search(List *x, int v) {
	List *p;
	for(p=x;p!=NULL;p=p->prox) {
		if(p->valor == v) {
			return p;
		}
	}
	return NULL;
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
	
	// retorna a busca
	List *res;
	res = search(lista, pesquisa);
	if(res!=NULL) printf("\nElemento: %d", res->valor);
	else printf("\nNulo!");
	
	return 0;
}
