#include<stdio.h>
int main ()
{
    int n;
    scanf("%d",&n);
    switch((n>0)-(n<0))
  { 
     case 1:
    printf("positive");
    break;
    case -1:
    printf("negative");
    break;
    default:
    printf("zero");

}
return 0; 
}