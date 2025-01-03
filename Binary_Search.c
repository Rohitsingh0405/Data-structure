#include <stdio.h>

int linerSearch(int arr[], int element, int size)
{
	for (int i = 0; i < size; i++)
	{
		if (arr[i] == element)
		{
			return i;
		}
	}
	return -1;
}

// void sorted(int arr[]){

// }/

int BinarySearch(int arr[], int element, int size)
{
	int mid, high,low;

	low = 0;
	high = arr[size-1];
	while(low<=high){

	mid = (low + high)/2;
	if(arr[mid] == element){
		return element;
	}
	if(arr[mid]<element){
		low = mid+1;
	}
	else{
		high = mid-1;
	}
	}
	return -1;
}

int main()
{
	int arr[] = {12, 54, 65, 32, 12};
	int e = 65;
	// int size = 5;
	int size = sizeof(arr) / sizeof(int);
	// int start = 0;
	// int a = linerSearch(arr,e,size);
	// printf("%d",a);
	
	int a = BinarySearch(arr, e, size);
	printf("%d ", a);

	
}