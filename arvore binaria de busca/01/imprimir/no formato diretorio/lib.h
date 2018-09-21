struct x{
	int v;
	struct x *esq;
	struct x *dir;
	int ind;
};

typedef struct x arv;

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
		if(c < aux->v)
			aux->esq = novo;
		else
			aux->dir = novo;	
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
