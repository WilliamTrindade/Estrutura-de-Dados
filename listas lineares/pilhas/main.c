#define t 10
#include<stdio.h>
#include"lib.h"
main(){
	int vet[t] = {}, op, i=0;
	while(1){
		printf("\tMANIPULACAO DE PILHAS\n\n");
		printf("%d - Oque deseja fazer: \n1)Push \n2)Pop \n3)Peek \n4)Empty \n5)sair\n", i);
		scanf("%d", &op);
		switch(op){
			case 1:{
				system("cls");
				i = i + push(vet,i);
				system("pause");
				system("cls");
				break;
			}
			case 2:{
				system("cls");
				i = i - pop(vet,i);	
				printa(vet);
				system("pause");
				system("cls");
				break;
			}
			case 3:{
				system("cls");
				peek(vet, i);
				printa(vet);
				system("pause");
				system("cls");
				break;
			}
			case 4:{
				system("cls");
				empty(vet, i);
				printa(vet);
				system("pause");
				system("cls");
				break;
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
