Implemente funções para completar o seguinte algoritmo:

#include "filas.h" 

main(){ 

 Fila *f; 
 
 char nome[20], op; 
 
 int cod; 
 
 f = criaFila(); 
 
 do { 

gets(nome); 

scanf("%d", cod); 

INSERT(f, nome, cod); 

printf("inserir outro? (s/n)"); 

scanf("%c", &op); 

} while(op == 's'); 

imprime(f); 

f = REMOVE(f); 

  imprime(f); 

} 
