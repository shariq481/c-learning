#include <stdio.h>
int check(int n);
int prime(int n);
int fact(int n);
int digsum(int n);
int main() {
    int n,a,b,c,d;
    scanf("%d",&n);
    a=check(n);
    b=prime(n);
    c=fact(n);
    d=digsum(n);
    if (a){
        printf("Even");
    }
    else {
        printf("Odd");
    }
     if (b){
        printf("\nPrime");
    }
    else {
        printf("\nNot Prime");
    }
    printf("\nFactorial: %d\n",c);
    printf("Sum of Digits: %d",d);

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
int check(int n)
{
    if (n%2 ==0){
        return 1;
    }
    else {
        return 0;
    }
}
int prime(int n){
    for (int i=2;i<n;i++){
    if (n%i==0){
        return 0;
    }

    }
    return 1;
}
int fact(int n){
    int f=1;
    for (int i=1;i<=n;i++){

        f=f*i;
    }
    return f;
}
int digsum(int n){
    int sum=0,rem;
    while (n!=0){
        
        sum+=n%10;
        n=n/10;

    }
    return sum;
}