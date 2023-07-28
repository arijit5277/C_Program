#include<stdio.h>
#define my_size_of(x) ({__typeof__(x)y;((char *)(&y+1) - (char *)(&y));})
int main()
{
	printf("%d",my_size_of(5));
	return 0;
}
