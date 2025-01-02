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

void valuenter(struct myStruct *a){
	int n ;
	for(int i = 0; i< a->used_size ;i++){
		printf("Enter the value in %d" ,i );
		scanf("%d",&n);
		(a->ptr)[i]=n;
	}
}
void show(struct myStruct *a){
	for(int i = 0; i< a->used_size ; i++){
		printf("%d\n",(a->ptr)[i]);
	}
}
int main(){
	struct myStruct arr ;
	value(&arr , 10, 2);
	valuenter(&arr);
	show(&arr);

	return 0;
}