#define t 10
#include<stdio.h>
#include"lib.h"
main(){
	int vet[t] = {}, op, aux[t] = {};
	while(1){
		printf("\tMANIPULACAO DE LISTAS\n\n");
		printf("OQUE DESEJA FAZER: \n1)inserir novo elemento\n2)acessar elemento\n3)retirar elemento\n4)alterar elemento\n5)sair\n");
		scanf("%d", &op);
		switch(op){
			case 1:{
				system("cls");
				novo(vet, aux);
				break;
			}
			case 2:{
				system("cls");
				acessar(vet);
				break;
			}
			case 3:{
				system("cls");
				deletar(vet, aux);
				break;
			}
			case 4:{
				system("cls");
				alterar(vet, aux);
				break;
			}
			case 5:{
				system("cls");
				return;
				break;
			}
			default:{
				printf("OPCAO INVALIDA\n");
				system("pause");
				system("cls");
				break;
			}
		}
	}
}
