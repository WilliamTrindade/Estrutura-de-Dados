struct x{
	int v;
	struct x *esq;
	struct x *dir;
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

void printa_recursiva(arv *a){
	if(a != NULL){
		//mostra o valor da raiza da sub-arvore
		printf("%d \n", a->v);
		//mostra o valor da esquerda
		printa_recursiva(a->esq);
		//mostra o valor da direita
		printa_recursiva(a->dir);
	}
}
