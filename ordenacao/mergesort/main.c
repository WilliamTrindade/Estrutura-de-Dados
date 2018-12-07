#include <stdio.h>
#include <stdlib.h>

//#define N 8
int count = 0;
// Combina dos subvetores de vetor[].
// O primeiro subvetor é  vetor[esq..meio]
// O segundo subvetor é vetor[meio+1..dir]
void merge(int vetor[], int esq, int meio, int dir) {
    int i, j, k;
    int n1 = meio - esq + 1;
    int n2 =  dir - meio;

    /* cria os vetores temporarios */
    int parteEsquerda[n1], parteDireita[n2];

    /* Copia os dados para os vetores temporarios parteEsquerda[] e parteDireita[] */
    for (i = 0; i < n1; i++)
        parteEsquerda[i] = vetor[esq + i];
    for (j = 0; j < n2; j++)
        parteDireita[j] = vetor[meio + 1 + j];

    /* Combinar os vetores temporarios de volta no vetor[esq..dir]*/
    i = 0; // indice inicial do primeiro subvetor
    j = 0; // indice inicial do segundo subvetor
    k = esq; // indice inicial do subvetor combinado
    while (i < n1 && j < n2) {
        if (parteEsquerda[i] <= parteDireita[j]) {
            vetor[k] = parteEsquerda[i];
            i++;
        } else {
            vetor[k] = parteDireita[j];
            j++;
        }
        k++;
    }
    /* Caso sobrem elementos, copia os mesmos de parteEsquerda[] */
    while (i < n1) {
        vetor[k] = parteEsquerda[i];
        i++;
        k++;
    }
    /* Caso sobrem elementos, copia os mesmos de parteDireita[] */
    while (j < n2) {
        vetor[k] = parteDireita[j];
        j++;
        k++;
    }
}

/* esq para o indice esquerdo e dir para o indice direito do subvetor do vetor que sera ordenado */
void mergeSort(int vetor[], int esq, int dir) {
    if (esq < dir) {
        // ou esq+(dir-esq)/2
        int meio = (esq+dir)/2;
        printf("Meio: %d\n", meio);
        // Ordena a primeia e a segunda metade
        mergeSort(vetor, esq, meio);
        mergeSort(vetor, meio+1, dir);

        merge(vetor, esq, meio, dir);
    }
}

void imprime(int vetor[], int tam) {
    int i;
    for (i=0; i < tam; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

void imprimeParte(int vetor[], int a, int b) {
    int i;
    for (i=a; i < b; i++)
        printf("%d ", vetor[i]);
    printf("\n");
}

int main() {
    int vetor[] = {12, 11, 13, 6, 15, 7};
    int tam = sizeof(vetor)/sizeof(vetor[0]);
    printf("tam %d\n", tam);
    printf("Vetor inicial \n");
    imprime(vetor, tam);

    mergeSort(vetor, 0, tam - 1);

    printf("\nVetor ordenado \n");
    imprime(vetor, tam);
    system("pause");
    return 0;
}
