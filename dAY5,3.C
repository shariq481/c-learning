#include <stdio.h>
int main ()
{
        int n,j;
        printf("enter number whose table you want to print:");
        scanf("%d",&n);
        for (int i =1;i<=20;i++)
        {
            j=n*i;
            printf("%d\n",j);

        }

return 0;

}