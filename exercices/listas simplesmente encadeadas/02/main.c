#include<stdio.h>
#include<stdlib.h>
#include"lib.h"
#define n 10
main(){
	int x, i;
	Lista *l;
	
	//lista inicia vazia
	l = NULL;
	
	//insere
	for(i = 0; i < n; i++) {
		l = insere(l, n-i);
	}
	
	//retira
	printf("\t RETIRAR DA LISTA SIMPLESMENTE ENCADEADA \n");
	while(1){
		printf("Qual valor quer retirar? ");
		scanf("%d", &x);
		l = retira(l, x);
		imprimea(l);
		system("pause");
		system("cls");
	}
	printf("\n");
	
	//imprime
	imprimea(l);
	
	getch();
}
