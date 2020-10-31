#include <stdio.h>
#define TAM 5
atribui(int x[TAM]){
	int i;
	for(i=0;i<TAM;i++){
		printf("DIGITE O VALOR %d : ",i+1);
		scanf("%d",&x[i]);
	}
}
maior(int x[TAM]){
	int *p = x, m = *p, i, pos=0, v=0;
	for(i=0;i<TAM;i++){
		p++;
		if(*p > m){
			m = *p;
			pos = p;
			v=i;
		}
	}
	printf("O MAIOR VALOR E O %d\n VALOR %d\nPOSICAO %d",v+2 , m, pos);
}
main(){
	int vet[TAM] = {};
	atribui(vet);
	maior(vet);
}
