struct x{
	int info;
	struct x *prox;
};
typedef struct x Lista;

//IMPRIMIR FOR 
void imprime(Lista *l){
	Lista *aux = l;
	printf    ("INFO    -   ENDERECO     - PROXIMO\n");
	do{
		printf("%d       -   %d      - %d\n", aux->info, aux, aux->prox);
		aux=aux->prox;
	}while(aux!=l);
	printf("\n\n");
}

//INSERIR NO FINAL
Lista *insere(Lista *l, int i){
    Lista *novo = (Lista*) malloc(sizeof(Lista));
    novo->info = i;
    novo->prox = NULL;
    if (l == NULL){
        novo->prox = novo;
        return novo;
    }else{
        Lista *p = l;
        while (p->prox != l)
        p = p->prox;
        p->prox = novo;
        novo->prox = l;
        return l;
    }
}
