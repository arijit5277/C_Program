#include<stdio.h>
int reverse(char *str)
{
   if (*str)
   {
	//char *p;
        reverse(str+1);
//       printf("%c", *str);
	
   }
	return 
}

int main()
{
   char a[] = "Mirafra";
   reverse(a);
 //  printf("%s \n", reverse(a));
  // printf("%s\n",a);
   return 0;
}
