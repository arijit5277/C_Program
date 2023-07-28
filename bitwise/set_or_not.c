#include<stdio.h>
int main()
{
	int a = 10;
	if(a &(1<<3))
		printf("set");
	else
		printf("reset");
	return 0;
}
