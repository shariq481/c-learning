#include <stdio.h>
int cat (int n)
{   int f=1;
    for (int i=1;i<=n;i++)
    {
        f=f *(4*i-2)/(i+1);
    }
    return f;
}
int main ()
{
    int n;
    scanf("%d",&n);
  int r =  cat (n);
  printf("%d",r);
  return 0;
}