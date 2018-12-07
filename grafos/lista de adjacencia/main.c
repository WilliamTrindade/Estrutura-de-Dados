#include<stdio.h>
#include<stdio.h>
#define n 6
// Adjacency list

// estrutura
/*
typedef struct x {
	int no;
	struct x *aresta; 

}grafo;
*/

struct x {
	int no;
	int peso;
	struct grafo *prox;
	struct grafo *adj;
};
typedef struct x g;


g *insereDinamicamente(g *grafo, int i) {
	
	g *novo = (g*) malloc(sizeof(g));
	
    novo->no = i;
    novo->prox = NULL;
    novo->adj = NULL;
    
	if(grafo == NULL) {
		novo->prox = NULL;
		return novo;
	}
	
	g *p;
	for(p=grafo;p->prox!=NULL;p=p->prox);
	
	//acessar os campos da struct
	novo = (g*) malloc(sizeof(g));
	novo -> no = i;
	novo -> prox = NULL;
	
	p->prox = novo;
	return grafo;
	
}

void imprimeNos(g *grafo) {
	g *p;
	printf("NO\n");
	for(p=grafo;p!=NULL;p=p->prox){
		printf("%d\n", p->no);
	}
	printf("\n\n");
}

int main() {
	// cria lista de adjascencia
	g *grafo;
	grafo = NULL;
	
	int i;
	for(i=0;i<n;i++) {
		grafo = insereDinamicamente(grafo, i);
	}
	
	// imprime nós
	imprimeNos(grafo);
	return 0;
}
