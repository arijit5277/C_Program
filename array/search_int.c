#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5};
	int a = 3,c=0;
	for(int i =0;i<5;i++)
	{
		if (arr[i] == a)
		{
			printf("Found in %dth index and value is %d ",i,arr[i]);			
			break;
		}
	}
	
}

