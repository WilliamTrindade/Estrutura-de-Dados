// Matriz de Incidência

#include <stdio.h>
#include <stdlib.h>
#define c 7
#define l 6

int opcao() {
	int op;
	printf("\tGrafos - Matriz de Incidencia\nDigite uma Opcao: \n1 - Criar Conexao\n2 - Verificar Caminho\n3 - Printar\n->");
	scanf("%d", &op);
	return op;
}

void print(int mat[l][c]) {
	char letra = ;
	system("cls");
	int i, j;
	printf("  1 2 3 4 5 6 7\n\n");
	for(i=0;i<l;i++) {
		printf("%c ", letra);
		letra++;
		for(j=0;j<c;j++) {
			
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	system("pause");
}

void test(int mat[l][c]) {
	
}

void insert() {
	int a, b;
	printf("Digite a primeira letra da conexao: ");
	scanf("%d", &a);
	printf("Digite a segunda letra da conexao: ");
	scanf("%d", &b);	
}

int verify_waze() {
	
	return 0;
}

void verify() {
	
}

int main() {
	
	int mat[l][c] = {};
	
	while(1) {
		int op = opcao();
		system("cls");
		switch(op) {
			case 1: {
				insert(mat);
				// insert(mat);
				system("cls");
				break;
			}
			case 2: {
				verify(mat);
				system("cls");
				break;
			}
			case 3: {
				print(mat);
				system("cls");
				break;
			}
		}
	}
	return 0;
}
