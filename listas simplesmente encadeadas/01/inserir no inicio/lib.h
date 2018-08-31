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
