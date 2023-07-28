#include<stdio.h>
int main()
{
	int arr[10],i=0,max=0,min=0;
	printf("Enter the value of the arrays \n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&arr[i]);
	}
	max = arr[0],min = arr[0];
	for(i=1;i<10;i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		if(arr[i] < min)
		{
			min = arr[i]; 
		}
	}
	printf("biggest number is : %d\n",max);
	printf("the smallest number is : %d\n",min);

}
