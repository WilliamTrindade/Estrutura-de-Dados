#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
main(){
	arv *r = NULL;        
	r = insere(r, 15);
	r = insere(r, 10);
	r = insere(r, 8);
	r = insere(r, 20);
	r = insere(r, 12);
	
	printf("%d",  busca_reduzida(r, 0) );
}
