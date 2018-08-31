void mostra(int *vet, int tamanho){
	int *aux = vet;
	for(;aux < vet + tamanho; aux++){
		printf("%d \n", *aux);
	}
}
