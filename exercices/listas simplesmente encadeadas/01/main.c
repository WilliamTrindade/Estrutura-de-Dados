#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	Lista *l;
	l = NULL;
	int n, i;
	
	printf("Quntos elementos quer inserir na Lista ? \n");
	scanf("%d", &n);
	
	for(i=0;i<n;i++){
		l = insere(l, 0);
	}
	
	printf("Agora insira os valores: \n");
	i = 0;
	Lista *p;
	for(p=l;p!=NULL;p=p->prox){
		int v;
		printf("Valor %d: ", i);
		scanf("%d", &v);
		p->info=v;
		i++;
	}
	
	imprime(l);
	
	printf("Os pares sao : \n");
	pares(l);
	getch();
}
