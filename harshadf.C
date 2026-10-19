#include <stdio.h>
int harshad(int n)
{   
    int sum=0,temp=n,rem;
    while (temp!=0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    if (n%sum==0)
    {
        return 1;
    }
    else {
        return 0;
    }
}
int main ()
{
    int n;
    scanf("%d",&n);
    int r =harshad(n);
    if (r){
        printf("Harshad number");
    }
    else {
        printf("Not a harshad number");
    }
    return 0;
}    

