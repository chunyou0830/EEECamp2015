#include <stdio.h>
#include <stdlib.h>

int main(void){

	int in;
	scanf("%d", &in);
	if((in%7)==0){
		printf("YES");
	}
	else{
		printf("NO");
	}

	return 0;
}

