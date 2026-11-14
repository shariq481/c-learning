#include<stdio.h>
int main (){
int a,b,c,d;
scanf("%d %d",&a,&b);
int ar[a][b];
for (int i=0;i<a;i++){
    for (int j=0;j<b;j++){
        scanf("%d",&ar[i][j]);
    }
}
scanf("%d %d",&c,&d);
int br[c][d];
for (int i=0;i<c;i++){
    for (int j=0;j<d;j++){
        scanf("%d",&br[i][j]);
    }
}
//Multiplication of two matrices
if (b!=c){
    printf("Multiplication not possible");
}
else {
    for (int i=0;i<a;i++){
        for (int j=0;j<d;j++){
            int sum=0;
            for (int k=0;k<b;k++){
                sum+=ar[i][k]*br[k][j];
            }
            printf("%d ",sum);
        }
        printf("\n");
    }


}
return 0;
}