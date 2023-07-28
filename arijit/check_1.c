#include<stdio.h>
struct kk
{
    int a;
    int *b;
};
void main()
{
      struct kk c;
       int d=10;
       c.a=20;
       c.b=d;
       printf("%d",c.a);
       printf("%d",c.b);
}
