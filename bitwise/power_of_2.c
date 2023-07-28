#include<stdio.h>
int main()
{
	int a = 8;
	if (a & (a-1))
	{
		printf("Not Power of 2\n");
	}
	else
	{
		printf("power of 2\n");
	}
}
