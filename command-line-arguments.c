#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main (int argc, char const *argv[]) {
	if (strcmp(argv[2] , "+") == 0)
	{
		int sum = atoi(argv[1]) + atoi(argv[3]);
		printf("sum = %d\n",sum);
	}
}