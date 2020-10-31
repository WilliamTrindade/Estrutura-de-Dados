#include<stdio.h>
#include<stdlib.h>
#define t 10

printa(int x[t]) {
	
	int i;
	for(i=0;i<t;i++){
		printf("%d ", x[i]);
	}
	printf("\n");
	
}

void ordenaCres(int x[t]) {
	
	int i = 0, j = 0, aux;
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			if( x[i] < x[j] ) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}	
	
}

void ordenaDecs(int x[t]) {
	
	int i = 0, j = 0, aux;
	
	for(i=0;i<t;i++) {
		for(j=0;j<t;j++) {
			if( x[i] > x[j] ) {
				aux = x[i];
				x[i] = x[j];
				x[j] = aux;
			}
		}
	}	
	
}

main(){
	
	int vet[t] = {43434,10,3,4,32,76,1,76,5,9};
	int i = 10, j = 0;
	
	printa(vet);
	ordenaCres(vet);
	printa(vet);
	
	ordenaDecs(vet);
	printa(vet);
	
}	
