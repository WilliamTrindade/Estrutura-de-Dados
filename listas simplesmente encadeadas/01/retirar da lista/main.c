#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	Lista *l;
	
	//lista inicia vazia
	l = NULL;
	
	//insere
	l = insere(l, 43);
	l = insere(l, 75);
	l = insere(l, 30);
	l = insere(l, 12);
	
	//imprime
	imprimea(l);
	
	//retira
	l = retira(l, 30);
	l = retira(l, 7);
	l = retira(l, 75);
	printf("\n");
	
	//imprime
	imprimea(l);
	
	getch();
}
