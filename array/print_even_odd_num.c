#include<stdio.h>
int main()
{
	int arr[100],i=0,j=0;
	for(i=0;i<100;i++)
	{
		arr[i] = i + 1;
	}
	printf("odd numbers are : ");
	for(i=0;i<100;i=i+2)
	{
		printf("%d\n",arr[i]);
	}
	printf("even numbers are : \n");
	for(i=1;i<100;i=i+2)
	{
		printf("%d\n",arr[i]);
	}
}
