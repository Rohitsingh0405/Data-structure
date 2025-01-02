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
void input()
int main(){
struct arr a;
value(&a,5,2);
}