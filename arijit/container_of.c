#include<stdio.h>
#define container_of(ptr,type,member) ((type*)((char *)ptr - (char *)&(((type *)0) -> member)))

struct sample 
{
	int a;
	int b;
}s;

int main()
{
	struct sample *p = &s;	
	printf("%p",container_of(p,struct sample,a));
	return 0;
}
	
