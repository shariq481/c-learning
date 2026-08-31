#include<stdio.h>
void printhello();
void printhi();
int main ()
{ 

    int a,b; 
printf("enter your number ");
scanf("%d",&a);

if (a>=100){
printhello();}
else
printhi();
return 0;
}


void printhello ()
{
    printhello();
}
void printhi ()
{
 printhi();
 
}