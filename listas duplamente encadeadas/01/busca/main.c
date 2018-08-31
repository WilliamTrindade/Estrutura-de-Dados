#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	Lista *l;
	l = NULL;
	l = inseref(l, 1);
	l = inserei(l, 2);
	l = inseref(l, 6);
	l = inserei(l, 10);
	l = inseref(l, 6);
	
	imprime(l);
	
	buscaeprinta(l, 2);
	busca(l, 10);
	
	imprime(l);
}
