#include<stdio.h>
void main(){
	int v[5], i;
	for(i=0; i<5;i++)
		scanf("%d", (v+1));
	for(i=0;i<5;i++)
		printf("%d", *(v+i));
		getch();	
}
