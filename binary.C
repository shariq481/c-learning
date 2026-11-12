#include<stdio.h>
int main (){
int n,low,mid,high,search;
scanf("%d %d",&n,&search);
int arr[n];
low=0,high=n-1,mid=(low+high)/2;
for(int i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
    for (int i=0;i<(n-1);i++){
        mid=(low+high)/2;
        if (arr[mid]==search){
            printf("%d is present AT INDEX %d\n",search,mid);
            break;
        }
        else if (arr[mid]<search){
            low=mid+1;
        
        }
        else{
            high=mid-1;
        }
    }





return 0;
}

