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

int busca(arv *a, int c){
	if(a == NULL){
		return 0;
	}else{
		if(c == a->v){
			return 1;
		}else if( busca(a->esq, c) == 1 ){
			return 1;
		}else{
			return busca(a->dir, c);
		}
	}
}
