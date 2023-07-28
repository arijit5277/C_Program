#include<stdio.h>
#define my_size_of(x) ({__typeof__(x)y;((char *)(&y+1) - (char *)(&y));})

int main()
{
	int a = 10,c =10,sum =0;
	sum = a+c;
	int b = my_size_of(int);
	printf("%d",b);
	return 0;
}
