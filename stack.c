#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define maxsize 10
int totalmember[maxsize];
int top = -1;


void push(int data){
	if (top == maxsize -1){
		printf("Stack is full / overflow\n");
		return;
	}
	totalmember[++top] = data;
}


int pop(){
	if (top == -1){
		printf("no data available for pop\n");
		return 0;
	}
	int poppedElement = totalmember[top];
	top--;
	return poppedElement;
}


void display(){
	int i;
	for (i=0 ; i<=top ; i++){
		printf("%d\n",totalmember[i]);
	} 
}

int isEqual(const char* str1, const char* str2) {
	if (strcmp(str1, str2) == 0){
		return 1;
	}
	else {
		return 0;
	}
}
 void main(){
	push(2);
	push(3);
	push(6);
	push(63);
	push(34);	
	display();
	printf("popped element = %d \n",pop());
	display();
}
