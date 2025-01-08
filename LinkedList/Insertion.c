#include<stdio.h>
#include<stdlib.h>

struct a {
	int data ; 
	struct a* p;
};
 
struct a* insertAtBegin(struct a* head,int data){
	struct a* b = (struct a*)malloc(sizeof(struct a));
	b->data=data;
	b->p=head;
	return b;
}

struct a* insertAtEnd(struct a* head, int data){
	struct a* pr = (struct a*)malloc(sizeof(struct a));
	pr->data = data;
	struct a* h = head;
	while(h->p!=NULL){
		h=h->p;
	}
	h->p=pr;
	pr->p=NULL;
	return(head);
}

struct a* insertAtIndex(struct a*head,int data , int index){
	struct a* ptr = (struct a*)malloc(sizeof(struct a));
	struct a* a1 = head;
	int i = 0;
	while(i!=index-1){
		a1=a1->p;
		i++;

	}
	ptr->data=data;
	ptr->p = a1->p;
	a1->p = ptr;
	return(head);
}

struct a* insertAfterNode(struct a* head,struct a* h, int data ){
	struct a* ptre = (struct a*)malloc(sizeof(struct a));
	ptre->data=data;
	ptre->p=h->p;
	h->p=ptre;
	return head;
}
void traverse(struct a* ptr){
	
	while(ptr!=NULL){

		printf("%d\n",ptr->data);
		ptr=ptr->p;

	}
}

int main(){
	struct a* first;
	struct a* first1;
	struct a* first2;
	struct a* first3;
	struct a* second1;
	struct a* second2;
	struct a* second3;
	first = (struct a*)malloc(sizeof(struct a));
	first1 = (struct a*)malloc(sizeof(struct a));
	first2 = (struct a*)malloc(sizeof(struct a));
	first3 = (struct a*)malloc(sizeof(struct a));
	second1= (struct a*)malloc(sizeof(struct a));
	second2= (struct a*)malloc(sizeof(struct a));
	second3= (struct a*)malloc(sizeof(struct a));
	first->data=45;
	first->p=first1;

	first1->data=4;
	first1->p=first2;

	first2->data=41;
	first2->p=first3;

	first3->data=43;
	first3->p=second1;


	second1->data=12;
	second1->p=second2;

	second2->data=121;
	second2->p=second3;

	second3->data=1223;
	second3->p=NULL;

	// traverse(first);
	// printf("This is insertion at beginning\n");
	// first = insertAtBegin(first,12);
	// traverse(first);
	// printf("This is insertion at index\n");
	// insertAtIndex(first,32,1);
	// traverse(first);
	// printf("\nThis is insertion at end\n");
	// insertAtEnd(first,35);

	// traverse(first);
	printf("\nThis is insertion at any point\n");
	insertAfterNode(first,first2,56);
	traverse(first);

	return 0;
}