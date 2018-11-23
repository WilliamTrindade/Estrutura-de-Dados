#include<stdio.h>
#include<stdio.h>
#define n 6
#define inicioDaVisita 0

// matriz e vetor global
int visitado[n] = {};
int grafo[n][n] = {}; 

// percorre em profundidade	
void profundidade(int totalNos, int atual) {
	int i;
	// printa e marca como visitado
	printf("%d\n", atual);
	visitado[atual] = 1;
	
	// percorre a linha atual
	for(i = 0; i<totalNos; ++i) {
		if(grafo[atual][i] == 1 && !visitado[i]) {
			profundidade(totalNos, i);
		}
	}
}

// insere o teste
void insereTest() {
	grafo[0][1] = 1;
	grafo[0][2] = 1;
	grafo[1][4] = 1;
	grafo[1][3] = 1;
	grafo[2][5] = 1;
	grafo[3][4] = 1;
	grafo[2][3] = 1;
}

// main
int main() {
	insereTest();
	profundidade(n, inicioDaVisita);	
	return 0;
}
