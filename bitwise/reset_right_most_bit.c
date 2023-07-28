#include<stdio.h>
int main()
{
	int a = 11;
	a = a & (a-1);
	printf("%d\n",a);
}

