#include<stdio.h>
#include<stdlib.h>

int func(int a);

main(){
	func(0);
}

int func(int a){
	if(a < 3){
		func(a+1);
		printf("%d\n", a);
	}
}
