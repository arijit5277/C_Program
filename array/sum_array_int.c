#include<stdio.h>

int main()
{
	int arr[]={1,2,3,4,5,6,7,8,9,10},i=0,sum =0;
	for(i=0;i<10;i++)
	{
		sum += arr[i];
	}
	printf("SUM = %d \n",sum);
	return 0;
}
