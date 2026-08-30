#include <stdio.h>
int main ()
{
    char ch;
    printf("enter your character ");
    scanf("%c",&ch);
    
    char i ='a';
    while (i<=ch)
    {
        printf("%c\n",i);
        i++;
    }
    
    return 0;
}