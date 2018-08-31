struct x{
	int info;
	struct x *ant;
	struct x *prox;
	
};
typedef struct x Lista;

//BUSCA NA LISTA DUPLAMENTE ENCADEADA
Lista *buscaeprinta(Lista *l, int v){
	Lista *p;
	for(p=l; p!=NULL; p=p->prox){
		if(p->info == v){
			printf("Busca feita: Valor: %d - Endereco: %d \n\n", v, p);
			return p;
		}
	}
	printf("Busca feita: Valor nao encontrado \n\n", v, p);
	return NULL;
}

Lista *busca(Lista *l, int v){
	Lista *p;
	for(p=l; p!=NULL; p=p->prox){
		if(p->info == v){
			return p;
		}
	}
	return NULL;
}


//INSERIR NO FINAL DA LISTA DUPLAMENTE ENCADEADA
Lista *inseref(Lista *l, int v){
	Lista *novo = (Lista*) malloc (sizeof(Lista));
	if(l == NULL){
		novo->prox=NULL;
		novo->info=v;
		return novo;
	}
	
	Lista *p;
	
	for(p=l;p->prox!=NULL;p=p->prox);
	
	if(p != NULL){
		p->prox = novo;
	}
	novo->info = v;
	novo->prox = NULL;
	novo->ant = p;
	
	return l;
}

//INSERIR NO INCIO DA LISTA DUPLAMENTE ENCADEADA
Lista *inserei(Lista *l, int v){
	Lista *novo = (Lista*) malloc (sizeof(Lista));
	novo->info = v;
	novo->prox = l;
	novo->ant = NULL;
	if(l != NULL){
		l->ant = novo;
	}
	return novo;
}
//IMPRIMIR
void imprime(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d   -   %d \n", p->info, p);
	}
	printf("\n\n");
}
