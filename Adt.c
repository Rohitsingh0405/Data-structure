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
void input(struct new *b){
	int n; 
	for(int i =0 ; i< b->uses_size ;i++){
		printf("Enter the value %d", i);
		scanf("%d",&n);
		(b->p)[i] = n;

	}
}
void show(struct new *a){
	for(int i = 0; i< a->uses_size ; i++){
		printf("%d\n",(a->p)[i]);
	}
}
int main(){
	struct new a;
	
	return 0;
}