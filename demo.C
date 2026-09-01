#include<stdio.h>
int main()
{
    int a;
    printf("enter your number");
    scanf("%d",&a);
    for (int i=2;i<=a;i++)
    if (a%i==0)
    {
            printf("A is a prime no:%d",a);


    }
    else
    {
        printf("A is not a prime no:%d",a);
    }
}