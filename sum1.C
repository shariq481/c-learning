#include <stdio.h>
int main ()
{
int a,b;
printf("enter your two digit number");
scanf("%d",&a);
b=a%10,a=a/10;
printf("sum of digits is %d",a+b);
return 0;
}