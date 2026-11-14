#include<stdio.h>
int main ()
{int n,i;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements of the array: ");
    for (int i=0;i<n;i++)
    {
       scanf("%d",&a[i]);
   }
   for (int i=0;i<n;i++)
   {
    for (int j=i+1;j<n;j++){
        if (a[i]==a[j])
        {
            printf("Duplicate element found: %d\n",a[i]);
            return 0;
        }
    }
   }
   if (i==n)
   {
    printf("No duplicate element found");
   }
return 0;

}