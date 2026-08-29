#include <stdio.h>
int main ()
{
 int marks;
 printf("enter your marks :");
 scanf("%d",&marks);
 if (marks >=90)
 {
    printf("congrats you scored an A+");
 }
else if (80<marks<90)
{
    printf("youve scored an A");
}
else if (60<marks<80)
{
    printf("you are B grade");
}
else (marks <60);{
printf("you are fail");
}
return 0;


}