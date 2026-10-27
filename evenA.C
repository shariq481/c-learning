#include <stdio.h>
int main ()
{
    printf("Enter the size of an aray");
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if (arr[i]%2 ==0)
        {
            printf("%d is even\n",arr[i]);
        }
    }
    return 0;    
}
