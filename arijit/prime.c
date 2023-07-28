#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7,8,9,10},prime[5],n_prime[5],p=0,n_p=0,i=0,j=0,count=0;
	for(i =0;i<10;i++)
	{
		count =0;
		for(j =1;j<=arr[i];j++)
		{
	
			if ((arr[i]%j) ==0)
			{
				count++;
			}
		}
		if (count == 2)
		{	
			prime[p++] = arr[i];
	//		printf("prime = %d\n", arr[i]);
		}
		else
		{
			n_prime[n_p++] = arr[i];
	//		printf("Not prime = %d",arr[i]);
		}
	}
	for(i = 0; i < 5; i++)
	{
		printf("%d\n",prime[i]);
	}
	return 0;
	
}
