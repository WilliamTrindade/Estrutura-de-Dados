#include<stdio.h>
#include<stdlib.h>
#define tamanho 50
// tabela hash
int vet[tamanho] = {};

int insert(int vet[], int matricula) {
	vet[matricula%tamanho] = matricula;
	
	return matricula%tamanho;
	
}

int main() {
	
	int x = insert(vet, 201811411);
	// printf("%d", insert(vet, 201811411));
	printf("Matricula: %d - Posicao: %d", vet[x], x);
	return 0;
	
}
