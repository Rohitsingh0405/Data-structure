#include<stdio.h>

void delete(int arr[],int ind){
for(int i = ind; i<5;i++){
	arr[i] = arr[i+1];
}

}
void print(int arr[]){
	for(int i = 0 ;i<4;i++){
		printf("%d ",arr[i]);
	}
}
int main(){
	int arr[] = {10,45,32,54,65};
	int index = 1;
	delete(arr,index);
	print(arr);
	return 0;
}