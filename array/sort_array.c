#include<stdio.h>
void swap(int *xp, int *yp)
{
	int temp = *xp;
	*xp = *yp;
	*yp = temp;
}
void selection_sort(int arr[],int size)
{
	int min;
	for(int j =0;j<size-1;j++)
	{
		min = j;
		for(int i = j+1; i <size;i++)
		{
			if (arr[i]<arr[min])
			{
								
				swap(&arr[min],&arr[i]);
			}
				
		}
	}
}
void printarray(int arr[],int size)
{
	for(int i = 0;i<size;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[] = {5,2,8,2,0,1,3};
	int size = sizeof(arr)/sizeof(arr[0]);
	printarray(arr,size);
	selection_sort(arr,size);
	printarray(arr,size);
	return 0;
}	
