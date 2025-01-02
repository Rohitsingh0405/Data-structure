#include<stdio.h>

void display(int arr[] , int n ){
	// Traversal part
	for(int i = 0; i<n;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
}

int indexxInsertion(int arr[], int size, int element, int capacity, int index){
	// insertion part
	if(size>=capacity){
		printf("insertion fail");
		return -1;
	}
	for(int i = size-1 ; i>=index; i--){
		arr[i+1] = arr[i];
	}
	printf("insertion successful");
	arr[index] = element;
	return 1;
}

int main(){
	int arr[100]= {7,8,12,27,88};
	int size = 5; 
	display(arr, size);
	int element = 45;
	int capacity = 100;
	int index = 3;
	indexxInsertion(arr, size, element, capacity,index);
	size+=1;
	display(arr,size);

}