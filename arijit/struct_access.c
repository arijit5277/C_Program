#include<stdio.h>

struct sample
{
	int x;
	int *p;

}s;

int main()
{
	int a = 10;
	s.x = 5;
	s.p = a;
	printf("%d\n",s.x);
	printf("%d\n",s.p);
	return 0;
}
