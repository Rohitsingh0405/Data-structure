#include<stdlib.h>

int linerSearch(int arr[],int element,int size){
	for(int i = 0;i<size;i++){
		if(arr[i]==element){
			return i;
		}
	}
	return -1;

}

void BinarySearch(int arr[],int element){

}

int main(){
int arr[] = {12,54,65,32,12};
int e = 52;
// int size = 5;
int size = sizeof(arr)/sizeof(int);

int a = linerSearch(arr,e,size);
printf("%d",a);


}