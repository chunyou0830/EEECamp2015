#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int a, sum=0;
	for(a=1; a<=10; a=a+1){
		sum = sum + a;
		printf("%d\n", sum);
	}

	return 0;
}
