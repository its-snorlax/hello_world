#include <stdio.h>
#include <stdlib.h>
int fibonacci (int nterm) {
	if (nterm == 2){
		return 1;
	}

	if (nterm == 1) {
		return 0;
	}
	else {
		return (fibonacci(nterm-2) + fibonacci(nterm-1));
	}		
}
void main(int argc, char *argv[]) {
	int nterm = atoi(argv[1]);
	int	result = fibonacci(nterm);
	printf("%d\n", result );
}