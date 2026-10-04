#include <stdio.h>
int main()
{
    int n;
    int n1,n2,n3;
    scanf("%d", &n);
    n1=n;
    n3=0;
    while (n!=0)
    {
        int fact=1;
        n2=n%10;
        for (int i=1;i<=n2;i++)
        { fact=fact*i;

        }
        n3=n3+fact;
        n=n/10;
    }
    
        if (n3==n1)
     {
        printf("Strong number");
        }
        else
        {
            printf("Not a strong number");
        }
        
    
    return 0;
}