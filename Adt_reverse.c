#include<stdio.h>
#include<stdlib.h>

struct arr {
int capacity;
int size ;
int *p;
};
void value(struct arr *b , int c , int s){
	b->capacity=c ; 
	b->size = s;
	b->p=(int*)malloc(s*sizeof(int));
}
void input(struct arr *b){
	int n ;
	 for(int i = 0 ; i<b->size;i++){
		printf("Enter the value in position %d",i);
		scanf("%d",&n);
		(b->p)[i] = n;
	 }
}
int main(){
struct arr a;
value(&a,5,2);
}