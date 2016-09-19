#include <stdio.h>
#include <stdlib.h>


int fact (int input) {
	if (input <= 1){
		return 1;
	}
	return input * fact(input - 1);
}
void main(int argc, char *argv[]) {
	int input = atoi(argv[1]);
	int result = fact(input);
	printf ("%d \n",result);
}	