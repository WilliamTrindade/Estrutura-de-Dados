#include<stdio.h>
#include<stdlib.h>

struct x{
	int v;
	struct x *esq;
	struct x *dir;
	struct x *ant;
};

typedef struct x arv;
arv *insere(arv *r, int c);
void imprimir(arv *r, int a);
arv *remover(arv *r, int x);

main(){
	arv *r = NULL;
	r = insere(r, 15);
	r = insere(r, 10);
	r = insere(r, 20);
	r = insere(r, 18);
	r = insere(r, 25);	
	r = insere(r, 4);	
	r = insere(r, 12);	
	
	printf("\nprinta--------------\n");
	imprimir(r, 0);
	
	printf("\nremove--------------\n");
	r = remover(r, 10);
	
	printf("\nprinta--------------\n");
	imprimir(r, 0);
	
}
arv *insere(arv *r, int c){
	arv *novo = (arv*) malloc(sizeof(arv));
	novo->v = c;
	novo->esq = NULL;
	novo->dir = NULL;
	novo->ant = NULL;
	
	if(r == NULL){
		r = novo;
	}else{
		arv *aux = r, *ult;
		
		while (aux != NULL){
			ult = aux;
			//verifica se vai para a esquerda ou direita
			if(c < aux->v)
				aux = aux->esq;
			else
				aux = aux->dir;	
		}
		aux = ult;
		if(c < aux->v) {
			aux->esq = novo;
			aux->ant = ult;
		}else {
			aux->dir = novo;	
			aux->ant = ult;
		}
	}
	
	//retorna o r
	return r;
}

void imprimir(arv *r, int a){
	int i;
	if(r!=NULL){
		printf("\n");
		for(i=0;i<a;i++) printf(" ");
		printf("%d",r->v);
		imprimir(r->esq,a++);
		imprimir(r->dir,a++);
	}
}

arv *remover(arv *r, int x){
	arv *menorADireita = (arv*) malloc(sizeof(arv));
	arv *topo = (arv*) malloc(sizeof(arv));
	
	topo = r;

	//busca o numero
	while(r != NULL && x != r->v){
		if(x > r->v) r = r->dir;
		if(x < r->v) r = r->esq;
	}
	menorADireita = r->dir;
	
	if(r == topo){
		while(menorADireita->esq != NULL){
			menorADireita = menorADireita->esq;
		}
		menorADireita->esq = r->esq;
		return topo->dir;
	}else{
		while(menorADireita->esq != NULL){
			menorADireita = menorADireita->esq;
		}
		menorADireita->esq = r->esq;
		if(r->ant->dir == r){
			r->ant->dir = r->dir;
		}else if(r->ant->esq == r){
			r->ant->esq = r->dir;
		}		
		return topo;
	}
}
