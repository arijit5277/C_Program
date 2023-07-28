#include<stdio.h>

int main()
{
	int arr[]= {7,4,2,9,4},size;
	size = sizeof(arr)/sizeof(arr[0]);
	int min = arr[0];
	int max = arr[1];
	for (int i=0; i<size ;i++)
	{
		if (min > arr[i])
		{
			min = arr[i]; 
		}
		if(max <arr[i])
		{
			max = arr[i];
		}	
	}
	printf("min = %d\n",min);
	printf("max = %d\n",max);
	return 0;
}
