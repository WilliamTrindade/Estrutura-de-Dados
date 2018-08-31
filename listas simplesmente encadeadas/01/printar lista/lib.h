struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

//INSERIR NO INICIO
Lista *insere(Lista *l, int i){
	Lista *novo;
	//acessar os campos da struct
	novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;
	novo -> prox = l;
	return novo;
}

//RETIRAR DA LISTA

//IMPRIMIR for 
void imprimea(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d   -   %d \n", p->info, p);
	}
}

//IMPRIMIR while 
void imprimeb(Lista *l){
	Lista *p = l;
	printf    ("INFO -   ENDERECO\n");
	while(p!=NULL){
		printf("%d   -   %d \n", p->info, p);
		p=p->prox;
	}
}
