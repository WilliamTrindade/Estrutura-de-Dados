#include<stdio.h>
#include<stdlib.h>
#define tamanho 100

// tabela hash
int vetor[tamanho] = {};

int calcula(int a, int b) {
	
	return (a%b);
	
}

void showInsert(int numero, int posicao) {
	
	printf("\nNumero %d inserido na posicao %d\n", numero, posicao);
	
}

void showSearch(int numero, int posicao) {
	
	printf("\nNumero %d encontrado na posicao %d\n", numero, posicao);
	
}

void insert(int vetor[], int numero) {
	
	if(numero == 0) {
		printf("Numero vazio!");
	}else {
		vetor[calcula(numero, tamanho)] = numero;
		showInsert(vetor[calcula(numero, tamanho)], calcula(numero, tamanho));
	}
		
}

int search(int vetor[], int numero) {
	
	// return a position of array
	int ret = calcula(numero, tamanho);	
	
	if(vetor[ret] != numero) {
		printf("\nNumero %d nao encontrado!\n", numero);
	}else {
		showSearch(vetor[ret], ret);
		return ret;
	}
}

void print(int vetor[]) {
	int i = 0;
	printf("\n");
	while(i<tamanho) {
		printf("pos: %d - valor: %d\n", i, vetor[i]);
		++i;
	}
	
}

int main() {
	
	insert(vetor, 5);
	insert(vetor, 32);
	insert(vetor, 44);
	search(vetor, 44);
	print(vetor);
	return 0;
	
}
