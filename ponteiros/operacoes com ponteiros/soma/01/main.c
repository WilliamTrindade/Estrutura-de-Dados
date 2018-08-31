#include<stdio.h>
void main(){
	int x = 10, i, *y = &x;
	printf("Valor contido na variavel : %d\n\n", *y);
	for(i=0;i<20;i++) printf("%d = %d\n",i, *y++);
}
