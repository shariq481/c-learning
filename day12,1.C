#include<stdio.h>
int main ()
{   int balence =10000;
    int withdraw;
    printf("enter amount to withdraw: ");
    scanf("%d", &withdraw);
    if (withdraw>balence)
    {
        printf("unsufficient balence");

    }
    else
    {
        balence=balence-withdraw;
        printf("remaining balence is %d", balence);
    }
    
return 0;
}