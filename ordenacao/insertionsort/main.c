#include<stdio.h>
#define t 10
print(int vet[]) {
	
	int i;
	for(i=0;i<t;i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	
}

// my insertionsort
void insertionSortMe(int vet[]) {

	// counts
	int i = 1, j, aux;	
	while(i<t) {
		for(j=i; j >= 0 && vet[j] < vet[j-1]; j--) {
			aux = vet[j];
			vet[j] = vet[j-1];
			vet[j-1] = aux;
		}
		i++;
	}
	
}

// teacher insertionsort
void insertionSortTh(int vet[]) {
		
	// counts
	int i = 1, j, aux;	
	while(i<t) {
		aux = vet[i];
		for(j=i-1; j >= 0 && aux < vet[j]; j--) {
			vet[j+1] = vet[j];			
		}
		vet[j+1] = aux;
		i++;
	}
	
}


int main() {
	
	int vet[t] = {10, 9, 65, 7, 6, 5, 4, 3, 2, 1};
	
	//insertionSortTh(vet);
	//print(vet);
	insertionSortMe(vet);
	print(vet);
	return 0;
	
} 
