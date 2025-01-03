#include<stdio.h>
#include<stdlib.h>

struct a {
	int data ;
	struct a * p;
};

void pri(struct a * ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr= ptr->p;
	}
}

int main(){
	struct a *first;
	struct a *second;
	struct a *third;
	struct a *fourth;

	first = (struct a*)malloc(sizeof(struct a));
	second = (struct a*)malloc(sizeof(struct a));
	third = (struct a*)malloc(sizeof(struct a));
	fourth = (struct a*)malloc(sizeof(struct a));

	first->data = 45;
	first->p=fourth;

	second->data= 12;
	second->p=NULL;

	third->data = 3;
	third->p=second;
	
	fourth->data= 78;
	fourth->p=third;

	pri(first);



	return 0;
}