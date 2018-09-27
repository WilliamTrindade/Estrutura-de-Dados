#include<stdio.h>
#include<stdlib.h>

struct x{
	int v;
	struct x *esq;
	struct x *dir;
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
	r = remover(r, 20);
	
	printf("\nprinta--------------\n");
	imprimir(r, 0);
	
}



arv *insere(arv *r, int c){
	arv *novo = (arv*) malloc(sizeof(arv));
	novo->v = c;
	novo->esq = NULL;
	novo->dir = NULL;
	
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
		if(c < aux->v) aux->esq = novo;
		else aux->dir = novo;	
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
	
	//busca o numero
	while(r != NULL && x != r->v){
		if(x > r->v) r = r->dir;
		if(x < r->v) r = r->esq;
	}
	
	menorADireita = r;
	menorADireita = r->dir;
	while(menorADireita->esq != NULL){
		menorADireita = menorADireita->esq;
	}
	menorADireita->esq = r->esq;
	
	return r->dir;
	r->esq = NULL;
	r->dir = NULL;
	r->v = 0;
}
