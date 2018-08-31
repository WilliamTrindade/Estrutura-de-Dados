#include<stdio.h>
void main(){
	int a=10, b=20, *x=&a, *y=&b;
	(x > y) ? printf("X mais adiante\n") : printf("Y mais adiante\n");
	printf("x = %d \ny = %d",x, y)
}
