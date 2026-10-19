#include <stdio.h>
int main()
{   int n;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++)
    {
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d",&a[i]);
    }

    int max,mim;
    max = a[0],mim=a[0];
    for (int i=0;i<n;i++)
    {
        if (a[i]>max)
        {
            max=a[i];
         }
        if (a[i]<mim)
        {
            mim=a[i];
        }


    }
    printf("The maximum element in the array is: %d\n", max);
    printf("The minimum element in the array is: %d\n", mim);
    return 0;
}