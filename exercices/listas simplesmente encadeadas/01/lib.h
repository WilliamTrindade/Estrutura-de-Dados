struct lista{
	int info;
	struct lista *prox;
};
typedef struct lista Lista;

Lista *i;
Lista *f;
int cont;

//insere
Lista *insere(Lista *l, int i){
	Lista *novo;
	//acessar os campos da struct
	novo = (Lista*) malloc(sizeof(Lista));
	novo -> info = i;
	novo -> prox = l;
	return novo;
}

//IMPRIMIR for 
void imprime(Lista *l){
	Lista *p;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		printf("%d    -   %d \n", p->info, p);
	}
}

void pares(Lista *l){
	Lista *p;
	int t;
	printf    ("INFO -   ENDERECO\n");
	for(p=l;p!=NULL;p=p->prox){
		if(p->info%2==0){
			printf("%d    -   %d \n", p->info, p);
			t=1;
		}
	}
	if(t==0) printf("Nao existem valores pares");
	return;
	
} 
