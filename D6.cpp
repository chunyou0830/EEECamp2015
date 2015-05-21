#include <stdio.h>
#include <stdlib.h>

int main(void){

	int a, b;
	scanf("%d %d", &a, &b);
	if(a>b){
		printf("a is bigger than b.\n");
	}
	else if(a<b){
		printf("a is smaller than b.\n");
	}
	else{
		printf("a is equal to b.\n");
	}

	return 0;
}

