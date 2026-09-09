#include <stdio.h>

int main(void) {
	setvbuf(stdout, NULL, _IONBF, 0);
	
	int n=5;
	
	int i=1, j=1;
	
	while(i<= n) {
		j=1;  //reset inner loop counter to the initial value
		while(j <= i) {
			
			printf("%d ", j);
			
			j= j+1;
		}
		
		printf("\n"); //note that this leaves an extra blank line at the end. How to avoid?
		
		i=i+1;
	}
	
	return 0;
}
