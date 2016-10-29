#include <stdio.h>
#define maxsize 10

int totalNumber[maxsize];
int rear = -1;
int front = -1;

void insert(int data){
	if (rear == maxsize - 1){
		printf("overflow / queue is full\n");
	}
	rear++;
	totalNumber[rear] = data;
	if (rear == 0){
		front = 0;
	}
}

void delete(){

        printf("Element deleted from queue is : %d\n", totalNumber[front]);
        totalNumber[front] = 0;
        front++;
}    

void display(){
	for (int i = front; i <= rear; ++i) {
		printf("Element are %d \n",totalNumber[i]);
	}
}

void main(){
	insert(39);
	insert(66);
	insert(92);
	insert(14);
	insert(29);
	display();
	delete();
	display();
	delete();
	display();
}