#include<stdio.h>
int main()
{
	int arr[] ={2,4,7,3,2,7,2,7},i,num,size;
	size = sizeof(arr)/sizeof(arr[0]);
	num = 2;
	int count =0;
	for(i =0; i<size;i++)
	{

		if(arr[i] == num)
		{
			count++;
		}
	}
	printf("%d occour in array %d times \n",num,count);
	return 0;
}
