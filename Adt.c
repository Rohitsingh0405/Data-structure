#include<stdio.h>
#include<stdlib.h>

struct new{
	int total_size;
	int uses_size;
	int *p;

};

void init(struct new *b,int t, int s ){
	b->total_size= t;
	b->uses_size= s;
	b->p=(int*)malloc(t*sizeof(int));
}

int main(){
	struct new a;
	return 0;
}