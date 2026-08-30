#include <stdio.h>
int main ()
{
int n,sum=0;
printf("enter your age ");
scanf("%d",&n);
for(int j=n,i=0;i<=n&&j>=1;i++,j--)
{
    printf("%d\n",i);
 
    sum=sum+i;

}
printf("%d\n",sum);
}