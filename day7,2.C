#include <stdio.h> 
int main ()
{
    int n;
    scanf("%d",&n);
if (n>0&&n%2==0&&n<=100000){

    for(int i=20;i>=1;i--)
{
    if (i==4){
        break;
    }
    if (i==7)
    {
        continue;
    }
    int j ;
    j=i*n;
    printf("%d\n",j);

}
}
else
{printf("wrong number");}
return 0;

}