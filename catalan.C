#include <stdio.h>
int main()
{   int N,r=1;
    scanf("%d",&N);
    for (int i=1; i<=N;i++)
    {
            r=r*(4*i-2)/(i+1);

    } 
    printf("%d",r);
return 0;

}