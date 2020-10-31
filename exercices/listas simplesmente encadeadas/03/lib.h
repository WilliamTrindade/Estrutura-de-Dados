struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

//INSERIR NO FINAL
Lista *insere(Lista *l, int i){
	Lista *novo;
	Lista *p;
	
	if(l==NULL){
		novo=(Lista*) malloc(sizeof(Lista));
		novo->prox=NULL;
		novo->info=i;
		return novo;
	}
	
	for(p=l;p->prox!=NULL;p=p->prox);
	
	//acessar os campos da struct
	novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;
	novo -> prox = NULL;
	
	p->prox = novo;
	return l;
	
}

//IMPRIMIR for 
void imprimea(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d   -   %d \n", p->info, p);
	}
	printf("\n\n");
}
