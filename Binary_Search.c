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

void BinarySearch(int arr[], int element, int size, int start)
{
	int mid = arr[start] + arr[size];
	if (arr[mid] == element)
	{
		printf("%d", element);
	}
	else if (element < arr[mid])
	{
		int s = mid - 1;
		BinarySearch(arr, element, s, start);
	}
	else if (element > arr[mid])
	{
		int s = mid + 1;
		BinarySearch(arr, element, s, size);
	}
}

int main()
{
	int arr[] = {12, 54, 65, 32, 12};
	int e = 65;
	// int size = 5;
	int size = sizeof(arr) / sizeof(int);
	int start = 0;
	// int a = linerSearch(arr,e,size);
	// printf("%d",a);

	BinarySearch(arr, e, size, start);
	// printf("%d ", a);

	printf("%d", e);
}