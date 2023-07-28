#include<stdio.h>
#define set(a,bit) a|=(1<<bit)
#define reset(a,bit) a&=~(1<<bit)
#define toggle(a,bit) a^=(1<<bit)
#define check_set(a,bit) (a&(1<<bit))
int main()
{
	int a = 10,bit = 3;
//	printf("%di\n",set(a,bit));
//	printf("%d\n",reset(a,bit));
//	printf("%d\n",toggle(a,bit));
	if check_set(a,bit)
		printf("set");
	else
		printf("reset");
	
	return 0;
}
