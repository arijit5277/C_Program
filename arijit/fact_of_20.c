#include<stdio.h>
int fact(int num);
int main()
{
	int num ;
	printf("Enter the range of fact : ");
	scanf("%d",&num);
	for(int i = 1;i<=num;i++)
	{
		printf("%d = %d\n",i,fact(i));
	}
	return 0;
}

int fact(int num)
{
	if (num == 0 || num == 1)
	{
		return 1;
	}
	else
	{
		return num * fact(num-1);
	}
}
