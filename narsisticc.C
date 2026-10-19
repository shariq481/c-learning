#include <stdio.h>
int main ()
{   
    int n,n1,x,y,p=0,r,sum=0,count=0,prod;
    scanf("%d %d",&x,&y);
    for (int i=x;i<=y;i++)
    {   
        n=i,n1=i,p=0;
        while (n!=0)
        {
            n=n/10;
            p++;
        }
        n=n1;
        sum=0;
        
        while (n!=0)
        {   
            prod=1;
            r=n%10;
            for (int j=1;j<=p;j++)
            {
                        prod=prod*r;}
                    sum=sum+prod;
            
            n=n/10;

        }
        if (sum==i)
        {
            count++;
        }

    }

    printf("%d",count);
    return 0;
}