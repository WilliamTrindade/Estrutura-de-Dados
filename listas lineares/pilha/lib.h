int push(int vet[t], int i){
	if(i >= t){
		printf("Nao vai rolar !\n");
		return 0;
	}else{
		int x;
		printf("QUAL ELEMENTO QUER ADICIONAR AO TOPO ? \n");
		scanf("%d", &x);
		vet[i] = x;
		printa(vet);
		return 1;
	}
}

int pop(int vet[t], int i){
	if(i <= 0){
		printf("Nao vai rolar !\n");
		return 0;
	}else{
		i--;
		vet[i] = 0;
		return 1;
	}
}

peek(int vet[t], int i){
	if(i <= 0){
		printf("Nao vai rolar , de um push primeiro!\n");
		return;
	}else{
		printf("O ELEMENTO DO TOPO E: %d \n", vet[i - 1]);
		return;
	}
}

int empty(int vet[t], int i){
	if(i <= 0){
		printf("PILHA VAZIA!\n");
		return 1;
	}else{
		int x;
		printf("PILHA PREENCHIDA\n");
		return 0;
	}
}

printa(int x[t]){
	int i;
	for(i=0;i<t;i++){
		printf("%d ", x[i]);
	}
	printf("\n");
}
