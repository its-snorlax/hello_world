#include <stdio.h>
#include <stdlib.h>
void swap(int* number1 , int* number2); 
void main(int argc, char const *argv[]) {
	int number1 = atoi(argv[1]);
	int number2 = atoi(argv[2]);
	swap(&number1 , &number2);
	printf("number1 = %d \n number2 = %d ",number1 , number2);
}
void swap(int* number1 , int* number2){
	int temprary = *number1;
	*number1 = *number2;
	*number2 = temprary;
}