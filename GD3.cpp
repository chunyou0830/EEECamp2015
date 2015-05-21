#include <stdio.h>
#include <stdlib.h>

int main(void){
	
	int counter, units, tens, hundreds, sum;
	for(counter = 100; counter <=999; counter++){
		hundreds = counter/100;
		tens = (counter-hundreds*100)/10;
		units = counter-hundreds*100-tens*10;
		sum = hundreds*hundreds*hundreds + tens*tens*tens + units*units*units;
		if(sum == counter){
			printf("%d\n", counter);
		}
	}
	
	return 0;
}
