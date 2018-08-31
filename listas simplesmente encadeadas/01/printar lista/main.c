#include<stdio.h>
//biblioteca da funcao malloc
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
	
	printf("\n");
	
	//imprime
	imprimeb(l);
	
	getch();
}
