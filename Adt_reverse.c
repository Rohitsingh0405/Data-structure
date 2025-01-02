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
void reverse(struct arr *b, struct arr *c){
	for(int i = 0; i<b->size; i++){
		for(int j = c->size ; b>=0 ;b--){
		(c->p)[j] = (b->p)[i];

		}

	}
}
void print(struct arr *b){
	for(int i =0; i<b->size; i++){
		printf("%d",(b->p)[i]);
	}
}
int main(){
struct arr a;
struct arr b;
value(&a,5,2);
input(&a);
value(&b,5,2);
reverse(&a,&b);

}