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
		printf("%d ", p->valor);
	}
	printf("\n");
}

// order
List *orderL(List *x){
	List *p, *aux;
	for(p=x;p->prox!=NULL;p=p->prox) {
		if(p->valor > p->prox->valor){
			aux = p;
			p->valor = p->prox->valor;
			p->prox->valor = aux->valor;
			//p = orderL(p);			
		}
		
	}
	return x;	
}

int main() {	
	List *lista;
	lista = NULL;
	
	// insere
	int i = n;
	while(i!=0) {
		lista = insere(lista, i);
		--i;
	}
	
	// print
	print(lista);
	
	// order
	lista = orderL(lista);
	
	// print
	print(lista);
		
	return 0;
}
