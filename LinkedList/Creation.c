#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node * next;
};
void traver(struct node * ptr){
	while(ptr!=NULL){

	printf("Element : %d\n",ptr->data);
	ptr = ptr->next;
	}
}
int main(){
	struct node * head;
	struct node * second;
	struct node * third;

	head = (struct node *)malloc(sizeof(struct node));
	second = (struct node *)malloc(sizeof(struct node));
	third = (struct node *)malloc(sizeof(struct node));

	head->data= 7;
	head->next = second;

	second->data= 8;
	second->next=third;

	third->data=9;
	third->next=NULL;
	traver(head);
	return 0 ;

}