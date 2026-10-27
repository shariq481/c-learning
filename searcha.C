#include <stdio.h>
int main ()
{
    printf("Enter the size of an aray");
    int n,i, x;

    scanf("%d",&n);
    printf("Enter the element to search for");
    scanf("%d",&x);
    int arr[n];
    for( i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i] == x)
        {
            printf("%d is present in the array\n",arr[i]);
            break;
        }
    
    }
    if (i==n)
    {
        printf("%d is not present in the array\n",x);
    }
    return 0;
}
