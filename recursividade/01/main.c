#include<stdio.h>
#include<stdlib.h>

int recursiva(int a);

main() {
	int x = 1, resultado;
	resultado = recursiva(x);
	printf("%d - ", resultado);
	getch();
}

int recursiva(int a) {
	if (a > 3){
		return a;
	}else{
		a++;
		a = recursiva(a);
	}
	return a;
}
