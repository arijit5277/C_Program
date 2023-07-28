#include<stdio.h>
int main()
{
	char arr[20];
	char a;
	int c=0,i;
	printf("Enter the string :");
	scanf("%s",arr);
	printf("Enter the letter you want to check : ");
	scanf(" %c",&a);
	for(i =0;arr[i]!='\0';i++)
	{
		if (arr[i] == a)
		{		
			c++;
		}
	}
	printf("The charecter : %c is present in the string %d times",a,c);
	return 0;
}
