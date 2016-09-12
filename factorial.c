#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void main(int argc, char const *argv[]) {
	int input = atoi(argv[1]);
	int fact , count;
	for (count = 1; count <= input; count++){
		fact = fact * count;
	}
	printf("%d \n",fact);
}