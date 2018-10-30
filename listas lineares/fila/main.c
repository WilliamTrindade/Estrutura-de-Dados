//fifo
#include <stdio.h>
#include <stdlib.h>
#define n 10

//variaveis globais
int empity = 1;
int size = 0;

//mostra
int display (int arr[n]) {
	
	if(empity) {
		printf("Fila Vazia! nao mostra\n");
		return;
	}
	int i=0;
	while (i < size) {
		printf(" %d -", arr[i]);
		++i;
	}
	printf("\n");
	
}

//insere
void insert (int arr[n], int v) {
	
	if (empity) empity = 0;
	arr[size] = v;
	++size;
	
}

//remove
int removeQ (int arr[n]) {
	
	if (empity) {
		printf("Fila Vazia! nao remove\n");
		return;
	}
	int j = 0;
	while (j < size) {
		arr[j-1] = arr[j];
		j++;
	}
	--size;
	if(size == 0) empity = 1;
	
}

//retorna o size
int sizeQ (int arr[n]) {
	
	int i = 0;
	while (i < size) ++i;
	return i;
	
}

//retorna o primeiro
int front (int arr[n]) {
	
	if(empity) return 0;
	return arr[0];
	
}

main () {

	int queue[n];
	insert(queue, 10);
	insert(queue, 50);
	removeQ(queue);
	display(queue);
	insert(queue, 30);
	display(queue);
	
	printf("%d", sizeQ(queue));
	printf("\n");
	printf("%d", front(queue));
}
