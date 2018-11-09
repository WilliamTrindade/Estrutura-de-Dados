#include<stdio.h>
#include<stdlib.h>
#define x 8

// pergunta uma opcao
int opcao() {
	int op;
	printf("\tGrafos - Matriz de adjacencia\nDigite uma Opcao: \n1 - Criar Conexao\n2 - Verificar Caminho\n3 - Printar\n->");
	scanf("%d", &op);
	return op;
}

// printa a matriz
print(int mat[x][x]) {
	system("cls");
	int i, j;
	for(i=0;i<x;i++) {
		for(j=0;j<x;j++) {
			printf("%d ", mat[i][j]);
		}
		printf("\n");
	}
	system("pause");
}

// insere conexões
void insert(int mat[x][x]) {
	int a, b;
	printf("Digite o primeiro numero da conexao: ");
	scanf("%d", &a);
	printf("Digite o segundo numero da conexao: ");
	scanf("%d", &b);	
	mat[--a][--b] = 1;
}

// verifica caminho
int verify_waze(int a, int b, int mat[x][x]) {
	int i, ret=0;
	for(i=0;i<x;i++) {
		if(mat[a][i] == 1) {
			if(i == b) {
				return 1;
			}else {
				ret=verify_waze(i, b, mat);
			}
		}
	}
	return ret;
}

// verifica conexões
verify(int mat[x][x]) {
	int a, b;
	printf("Digite o primeiro numero da conexao: ");
	scanf("%d", &a);
	printf("Digite o segundo numero da conexao: ");
	scanf("%d", &b);	
	
	int resp = verify_waze(--a, --b, mat);
	if(resp==1) printf("Camiho Existe!\n");
	else printf("Caminho nao Existe!\n");
	system("pause");
}

// insere teste
void insert_test(int mat[x][x]) {
	mat[0][2] = 1;
	mat[1][6] = 1;
	mat[2][4] = 1;
	mat[3][3] = 1;
	mat[5][1] = 1;
	mat[6][7] = 1;
	mat[7][0] = 1;
}

int main() {
	int mat[x][x] = {};
	while(1) {
		int op = opcao();
		system("cls");
		switch(op) {
			case 1: {
				insert_test(mat);
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
