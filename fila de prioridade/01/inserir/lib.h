int inserir(int vetor[n], int j) {
	int i = j;
	int auxiliar, indicePai=0;
	printf("\nDigite o numero a Inserir: ");
	scanf("%d", &vetor[i]);

	
	// percorre o while enquanto o pai for 
	while(vetor[i/2] < vetor[i]){
		auxiliar = vetor[i];
		vetor[i] = vetor[i/2];
		vetor[i/2] = auxiliar;
		i = i / 2;
	}
	return ++j;
	/*
	joão's code
	while(x[j/2] < x[j]) {			
		y=x[j];		
		x[j]=x[j/2];
		x[j/2]=y;
		j = j/2;		
	}
	*/
	/*
	my firt algorithn
	indicePai = i / 2;	
	if(vetor[i] > vetor[indicePai]){
	 	auxiliar = vetor[indicePai];
		vetor[indicePai] = vetor[i];
		vetor[i] = auxiliar;
	}
	*/
	
}
void imprimir(int vetor[n]) {
	system("clear");
	int i;
	printf("Pos -  Valor\n");
	for(i=0;i<n;i++) printf("%d   -   %d\n", i, vetor[i]);
	getchar();
}
