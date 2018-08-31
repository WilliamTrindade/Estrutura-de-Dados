struct x{
	int info;
	struct x *ant;
	struct x *prox;
	
};
typedef struct x Lista;

//INSERIR NO INCIO DA LISTA DUPLAMENTE ENCADEADA
Lista *insere(Lista *l, int v){
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
