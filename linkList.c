#include <stdio.h>
#include <stdlib.h>
struct node{
	int data;
	struct node *link;
};
struct node *start = NULL;

void create(int data){
	struct node *allocate;
	struct node *next;
	allocate = (struct node*) malloc(sizeof(struct node));
	allocate->data = data;
	allocate->link = NULL;
	if (start==NULL){
		start = allocate;
	}
	else{
		next = start;
		while(next -> link != NULL){
			next = next->link;
		}
		next->link = allocate;
	}
}

int display(){
	struct node *iterate;
	iterate = start;
	while(iterate != NULL){
		printf("%d  ",iterate->data);
		printf("%p \n",iterate->link);
		iterate = iterate->link;
	} 
}

void main(){
	create(7);
	create(34);
	create(65);
	create(21);
	display();
}