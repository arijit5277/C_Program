#include<stdio.h>
void reversearray(int arr[],int start,int end)
{
	int temp;
	while (start<end)
	{
		temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	}
}
void printarray(int arr[],int n)
{
	for(int i =0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
	printf("\n");
	
}
int main()
{
	int arr[]={1,2,3,4,5,6},i;
	int size = sizeof(arr)/sizeof(arr[0]);
	printarray(arr,size);
	reversearray(arr,0,size-1);
	printarray(arr,size);
	return 0;
}
