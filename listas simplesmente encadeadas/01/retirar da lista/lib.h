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
Lista *retira(Lista *l, int v){
	Lista *ant = NULL;
	Lista *p = l;
	
	while(p != NULL && p->info != v){
		ant = p;
		p = p -> prox;
	}
	if(p == NULL){
		return l;
	}
	if(ant == NULL){
		l = p -> prox;
	}else{
		ant->prox = p->prox;
	}
	
	free(p);
	return l;
}

//IMPRIMIR for 
void imprimea(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d   -   %d \n", p->info, p);
	}
}
