


#include<stdio.h>
int main ()
{
    int consumed;
    printf("enter the amount of electricity consumed in units: ");
    scanf("%d", &consumed);
    if (consumed<0){
        printf("you have entered an invalid number");
    }
     else if (consumed<=100&&consumed>=0)
    {
        printf("the bill is %d", consumed*2);
    }
  else if (consumed>100&&consumed<=200)
  {
    printf("the bill is %d ",3*consumed);
  }
    else if (consumed>200&&consumed<=400)
    {
    printf("the bill is %d",consumed*5);
}
    else if (consumed>400)
    {
        printf("the bill is %d",consumed*7);
    }
}