#include <stdio.h>
#include <stdlib.h>

int main(void){

	int length, countH, countS;
	scanf("%d", &length);
	for(countH=1; countH<=length; countH++){
		for(countS=1; countS<=countH; countS++){
			printf("*");
		}
		printf("\n");
	}

	return 0;
}

