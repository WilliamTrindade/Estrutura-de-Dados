struct x{
	int info;
	struct x *ant;
	struct x *prox;
	
};
typedef struct x Lista;

//INSERIR NO FINAL DA LISTA DUPLAMENTE ENCADEADA
Lista *insere(Lista *l, int v){
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

//IMPRIMIR
void imprime(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d   -   %d \n", p->info, p);
	}
	printf("\n\n");
}
