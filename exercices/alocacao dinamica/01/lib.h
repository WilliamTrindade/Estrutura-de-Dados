void inserir(int x[n]){
	int i;
	for(i=0; i<n;i++){
		printf("Digite o valor %d : ", i);
		scanf("%d", &x[i]);
	}	
}
void apresentar(int x[n]){
	int i;
	printf("\nAPRESENTANDO VETOR\n");
	for(i=0; i<n;i++){
		printf("%d : %d \n", i, *(x+i));
	}
}
void liberar(int x[n]){
	int i;
	printf("\nLIBERANDO VETOR..\n");
	free(x);
	system("pause");
}
