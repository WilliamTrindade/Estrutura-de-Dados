#include<stdio.h>
#define t 10
print(int vet[]) {
	
	int i;
	for(i=0;i<t;i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	
}
// insertionsort
void insertionSort(int vet[]) {
	
	int aux;
	
	// counts
	int i = 0, j = 0;
	
	if(vet[0] > vet[1]){
		aux = vet[1];
		vet[1] = vet[0];
		vet[0] = aux;
	}
	j = 2;
	
	while(j<t) {
		
		for(i=j;i>=0&&vet[j]<vet[i];i--) {
			if(vet[i] < vet[i-1]) {
				aux = vet[i];
				vet[i] = vet[i-1];
				vet[i-1] = aux;
			}
		}
		
		j++;
	}
	
}

int main() {
	
	int vet[t] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	
	insertionSort(vet);
	print(vet);
	return 0;
	
}
