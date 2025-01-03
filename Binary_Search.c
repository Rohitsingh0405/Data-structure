#include<stdlib.h>

int linerSearch(int arr[],int element,int size){
	for(int i = 0;i<size;i++){
		if(arr[i]==element){
			printf("%d", "found ",element);
			return 0;
		}
		else if(i>=size){
			printf("%d not found",element);
		}
		
	}

}

void BinarySearch(int arr[],int element){

}

int main(){
int arr[] = {12,54,65,32,12};
int e = 32;
int size = 5;
linerSearch(arr,e,size);


}