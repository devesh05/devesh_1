#include<stdio.h>
void main()
{
int a,b,c,d,e;
printf("enter the three number");
scanf("%d%d%d",&a,&b,&c);
c=(a>b)?a:b;
e=(c>d)?c:d;
printf("%d",e);
}
