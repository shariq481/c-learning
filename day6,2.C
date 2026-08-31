#include<stdio.h>
int main ()
{
    int a,b,c,d;
    printf("enter a:") ;
    scanf("%d",&a);
    printf("enter b: ");
    scanf("%d",&b);
    printf("enter c: ");
    scanf("%d",&c);
   d= (((a>b)?a:b)>c)?((a>b)?a:b):c;
   printf("%d",d);
    
    return 0;

}