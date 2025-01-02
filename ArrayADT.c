#include <stdio.h>
#include<stdlib.h>

struct myStruct{
	int total_size;
	int used_size ;
	int *ptr;
};

void value(struct myStruct *a , int t , int s){
	a->total_size = t;
	a->used_size = s;
	a->ptr = (int *)malloc(t*sizeof(int));
}

int main(){
	struct myStruct arr ;
	value(&arr , 10, 2);

	return 0;
}