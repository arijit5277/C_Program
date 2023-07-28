#include<stdio.h>

int main()
{
	int arr[]={2,5,3,8,5,2,10,9},i;
	int size = sizeof(arr)/sizeof(arr[0]);	
	for(i = 0;i<size;i++)
	{
		if ((arr[i] > arr[i-1]) && (arr[i]>arr[i+1]))
		{
			printf("%d\n",arr[i]);
		}

	}
	return 0;
}
