#include <stdio.h>
#include <stdlib.h>

int main(void){
	int a, b;
	for(a=1; a<=9; a=a+1){
		for(b=1; b<=9; b=b+1){
			printf("%d*%d=%d ", a, b, a*b);
		}
		printf("\n");
	}
	return 0;
}

