#include<stdio.h>
#include<stdlib.h>
main(){
	//ALOCACAO DINAMICA PARA UM VETOR
		int *vet, n, i;
		printf("\n Informe o tamanho do vetor");
		scanf("%d", &n);
		
		vet = (int*) malloc(n * sizeof(int));
		if(vet != NULL){
			printf("\nInforme os elementos do vetor:\n");
			for(i=0;i<n;i++)
				scanf("%d", &vet[i]);
			printf("\n Vetor: ");
			for(i=0;i<n;i++)
				printf("%d", *(vet + 1));
		}else{
			printf("\n sem memoria disponivel\n");
			free(vet);
		}
}
