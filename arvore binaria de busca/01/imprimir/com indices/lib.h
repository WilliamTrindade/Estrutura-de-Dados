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
//imprime com indices com nivel hierarquico
void printa_com_indices_a(arv *a){
	if(i == 0){
		a->ind = 1;	
	}
	i++;
	if(a != NULL){
		if(a->esq != NULL){
			a->esq->ind = a->ind * 2-1;
		}
		if(a->dir != NULL){
			a->dir->ind = a->ind * 2;
		}		
		printf("Valor: %d - Ind: %d\n", a->v, a->ind);
		printa_com_indices_a(a->esq);
		printa_com_indices_a(a->dir);
	}
}
//como se fosse um vetor
void printa_com_indices_b(arv *a){
	if(i == 0){
		a->ind = 1;	
	}
	i++;
	if(a != NULL){
		if(a->esq != NULL){
			a->esq->ind = a->ind * 2;
		}
		if(a->dir != NULL){
			a->dir->ind = a->ind * 2+1;
		}		
		printf("Valor: %d - Ind: %d\n", a->v, a->ind);
		printa_com_indices_b(a->esq);
		printa_com_indices_b(a->dir);
	}
}
