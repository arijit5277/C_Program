#include<stdio.h>
int main()
{
	int a = 10;
	for(int i = 3;i>=0;i--)
	{
		a = a ^(1<<i);

	}
	printf("%d",a);
}
