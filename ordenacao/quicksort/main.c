#include <stdio.h>
#include <stdlib.h>

#define N 8
int count = 0;
void troca(int vet[], int i, int j){
    int aux = vet[i];
    vet[i] = vet[j];
    vet[j] = aux;
}

void imprime(int vet[], int n){
   int i;
   for(i=0;i<n;i++){
      printf("%d ", vet[i]);
   }
    printf("\n");
}
void imprimeParte(int vet[], int inicio, int final){
   int i;
   for(i=inicio;i<=final;i++){
      printf("%d ", vet[i]);
   }
    printf("\n");
}

int part(int vet[], int p, int q){
    int x = vet[p];
    int i = p, j;
    for(j = p + 1; j <= q; j++) {
       count++;
       if(vet[j] <= x){
          i++;
          troca(vet, i, j);
       }
    }
    troca(vet, p, i);
    return i;
}

void quicksort(int vet[], int p, int q){
   if(p < q){
      int r = part(vet, p, q);
      imprime(vet, N);
      imprimeParte(vet, p, r - 1);
      quicksort(vet, p, r - 1);
      imprimeParte(vet, r + 1, q);
      quicksort(vet, r + 1, q);
   }
}

int main() {
   /*int vet[N] = {1, 4, 7, 62, 233, 152, 215, 9 , 24, 100, 2, 88, 323, 42, 61,
                31, 324, 6, 72, 63, 115, 125, 29 , 242, 110, 22, 18, 232, 44, 162,
                14, 41, 726, 612, 35, 312, 15, 49 , 234, 90, 52, 98, 23, 40, 63,
                5, 10, 12, 990, 65};*/
    int vet[N] = {6, 10, 13, 5, 8, 3, 2, 11};
    imprime(vet, N);
    quicksort(vet, 0, N-1);
    printf("\nAcabou: %d\n", count);
    imprime(vet, N);
    system("pause");
    return 1;
}
