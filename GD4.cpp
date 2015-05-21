#include <stdio.h>
#include <stdlib.h>

int main(void){

	int length, countH, countV, side;
	scanf("%d", &length);
	side = length-2;
	for(countH=1; countH<=length; countH=countH+1){
		printf("*");
	}
	printf("\n");
	for(countV=1; countV<=side; countV=countV+1){
		printf("*");
		for(countH=1; countH<=side; countH=countH+1){
			printf(" ");
		}
		printf("*\n");
	}
	for(countH=1; countH<=length; countH=countH+1){
		printf("*");
	}
	printf("\n"); 

	return 0;
}

