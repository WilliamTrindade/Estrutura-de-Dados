#include<stdio.h>
#include<string.h>
#define t 10

struct tabela {
    int matricula;
    char nome[30];
    float nota1;
    float nota2;
    float media;
};

typedef struct tabela universidade;

void insere(universidade aluno[]) {
    aluno[0].matricula = 1001; strcpy(aluno[0].nome, "Maria"); aluno[0].nota1 = 7.1; aluno[0].nota2 = 6.9; aluno[0].media = (aluno[0].nota1 + aluno[0].nota2)/2;
    aluno[1].matricula = 1010; strcpy(aluno[1].nome, "Joao"); aluno[1].nota1 = 2; aluno[1].nota2 = 6.5; aluno[1].media = (aluno[1].nota1 + aluno[1].nota2)/2;
    aluno[2].matricula = 1204; strcpy(aluno[2].nome, "Carlos"); aluno[2].nota1 = 3.5; aluno[2].nota2 = 4.9; aluno[2].media = (aluno[2].nota1 + aluno[2].nota2)/2;
    aluno[3].matricula = 2598; strcpy(aluno[3].nome, "Jorge"); aluno[3].nota1 = 10; aluno[3].nota2 = 5.5; aluno[3].media = (aluno[3].nota1 + aluno[3].nota2)/2;
    aluno[4].matricula = 3520; strcpy(aluno[4].nome, "Bia"); aluno[4].nota1 = 2.9; aluno[4].nota2 = 1.8; aluno[4].media = (aluno[4].nota1 + aluno[4].nota2)/2;
    aluno[5].matricula = 3587; strcpy(aluno[5].nome, "Maria"); aluno[5].nota1 = 4; aluno[5].nota2 = 10; aluno[5].media = (aluno[5].nota1 + aluno[5].nota2)/2;
    aluno[6].matricula = 4571; strcpy(aluno[6].nome, "Carlos"); aluno[6].nota1 = 8.9; aluno[6].nota2 = 6.1; aluno[6].media = (aluno[6].nota1 + aluno[6].nota2)/2;
}

void imprime(universidade aluno[t]) {
    int i;
    for (i=0; i<7; i++) {
        printf ("%d \t", aluno[i].matricula);
        printf ("%s \t", aluno[i].nome);
        printf ("%.1f \t", aluno[i].nota1);
        printf ("%.1f \t", aluno[i].nota2);
        printf ("%.1f", aluno[i].media);
        printf ("\n");
    }
}

//Implementação Iterativa:
int buscaBinaria(universidade aluno[], int alvo, int tam) {
    int min = 0;     
    int max = tam - 1; // termina em 9
    int chute = (min + max) / 2;
    int test = 0;
    while(aluno[chute].matricula != alvo && min <= max) {
    	printf(" Teste de eficiencia:");
    	test++;
    	printf(" volta %d\n", test);
        if(aluno[chute].matricula < alvo) {
        	min = chute + 1;
		}else {
			max = chute - 1;
		} 
		chute = (min + max) / 2;
    }
    
    if(aluno[chute].matricula == alvo) {
		return aluno[chute].matricula;
	}else {
		return 0;
	}
}

int main() {
	
	universidade aluno[t];
	insere(aluno);
	imprime(aluno);
	int x = buscaBinaria(aluno, 3520, t);
	printf("busca: %d \n", x);
	return 0;
  
}
