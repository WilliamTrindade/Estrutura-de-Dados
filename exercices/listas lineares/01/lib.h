novo(int x[t],int y[t]){
	int p, v, c;
	while(1){
		printf("EM QUAL POSICAO QUER ADICIONAR :\n");
		scanf("%d", &p);
		if(p>10 || p<1){
			printf("Posicao fora do escopo!\n\n");
		}else{
			if(y[p-1] != 0){
				printf("Nao pode adicionar ! apenas alterar!\n\n");
			}else{
				printf("DIGITE O VALOR QUE QUER ADICIONAR: \n");
				scanf("%d", &v);
				y[p-1] = 1;
				x[p-1] = v;
				printa(x);
				system("pause");
				system("cls");
				return;
			}
		}
	}
}

acessar(int x[t]){
	int p;
	while(1){
		printf("QUAL POSICAO QUER ACESSAR: \n");
		scanf("%d", &p);
		if(p>10 || p<1){
			printf("Posicao fora do escopo!\n\n");
		}else{
			printf("Posicao %d = %d\n",p,x[p-1] );
			printa(x);
			system("pause");
			system("cls");
			return;
		}
	}
}

deletar(int x[t],int y[t]){
	int p;
	while(1){
		printf("QUAL POSICAO QUER DELETAR: \n");
		scanf("%d", &p);
		if(p>10 || p<1){
			printf("Posicao fora do escopo!\n\n");
		}else{
			y[p-1] = 0;
			x[p-1] = 0;
			printa(x);
			system("pause");
			system("cls");
			return;
		}
	}
}

alterar(int x[t],int y[t]){
	int p, v;
	while(1){
		printf("EM QUAL POSICAO QUER ALTERAR :\n");
		scanf("%d", &p);
		if(p>10 || p<1){
			printf("Posicao fora do escopo!\n\n");
		}else{
			printf("DIGITE O VALOR QUE QUER ADICIONAR: \n");
			scanf("%d", &v);
			y[p-1] = 1;
			x[p-1] = v;
			printa(x);
			system("pause");
			system("cls");
			return;
		}
	}
}

printa(int x[t]){
	int i;
	for(i=0;i<t;i++){
		printf("%d ", x[i]);
	}
	printf("\n");
}
