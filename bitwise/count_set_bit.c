#include<stdio.h>
int main()
{
	int a = 10,count =0;
	while(a != 0)
	{
		count++;
		a&= (a-1);	
	}
	printf("%d\n",count);
}
