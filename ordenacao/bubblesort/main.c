#include<stdio.h>
#define t 10
print(int vet[]) {
	
	int i;
	for(i=0;i<t;i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	
}
// bubblesort
void bubbleSort(int vet[]) {
	
	int aux, final = t;
	
	// counts
	int i = 0, j = 0;
	
	while(j<final) {
		for(i=0;i<t-1-j;i++) {
			if(vet[i] > vet[i+1]) {
				aux = vet[i+1];
				vet[i+1] = vet[i];
				vet[i] = aux;
			} 
		}
		j++;
	}
	
}

int main() {
	
	int vet[t] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	bubbleSort(vet);
	print(vet);
	return 0;
	
}
