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
	int i;
void printa_recursiva(arv *a){
	if(i == 0){
		a->ind = 1;	
	}
	i++;
	if(a != NULL){
		printf("Valor: %d - Ind: %d", a->v, a->ind);
		if(a->esq != NULL){
			a->esq->ind = a->ind * 2-1;
		}
		if(a->dir != NULL){
			a->dir->ind = a->ind * 2;
		}		
		
		printa_recursiva(a->esq);
		printa_recursiva(a->dir);
		
	}
}
