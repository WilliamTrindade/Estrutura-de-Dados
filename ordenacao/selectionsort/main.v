#include<stdio.h>
#define t 5

print(int vet[]) {
	
	int i;
	for(i=0;i<t;i++){
		printf("%d ", vet[i]);
	}
	printf("\n");
	
}

// Selection sort
void selectionsort(int vet[]) {
	
	int i, j, aux, menor;

	while(i<t) {
		menor = i;
		for(j=i;j<t-i;j++) {
			if(vet[j] < vet[i]) menor = j;
		}
		aux = vet[i];
		vet[i] = vet[menor];
		vet[j] = aux;
		
		i++;
	}
	
}

int main() {
	
	int vet[t] = {13, 9, 2, 0, 6};
	
	selectionsort(vet);
	print(vet);
	return 0;
	
} 
