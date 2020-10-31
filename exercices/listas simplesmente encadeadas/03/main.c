#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	Lista *l;
	
	//lista inicia vazia
	l = NULL;
	
	l = insere(l, 1);
	l = insere(l, 2);
	l = insere(l, 5);
	l = insere(l, 7);

	//imprime
	imprimea(l);
	
	getch();
}
