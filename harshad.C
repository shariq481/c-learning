#include<stdio.h>
int main ()
{
    int N,n2,sum=0;
    scanf("%d",&N);
    int n1=N;
    while (N!=0)
    {
        n2=N%10;
        sum=sum+n2;
        N=N/10;
    } if (n1%sum==0)

    {
        printf("%d is harshad no",n1);
    }
    else {
printf("%d is not harshad no",n1);    }

return 0;
}