#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	Lista *l;
	l = NULL;
	l = insere(l, 1);
	l = insere(l, 2);
	l = insere(l, 3);
	
	imprime(l);
}
