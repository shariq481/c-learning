#include<stdio.h>
int main (){
printf("Enter the size of an array");
int n,i,j,mim;
scanf("%d",&n);
int a[n];
for (int i=0;i<n;i++)
{
    scanf("%d",&a[i]);
}
for (int i=0;i<n;i++){
    mim=i;
    for (int j=i+1;j<n;j++){
        if (a[j]<a[mim]){
            mim=j;
        }
    }
    int temp=a[i];
    a[i]=a[mim];
    a[mim]=temp;
}
for (int i=0;i<n;i++){
    printf("%d ",a[i]);
}
return 0;
} 