#include<stdio.h>
int main(){
    int a[10][10];
    int b[10][10];
    int c[10][10]={0};
    printf("ENTER FIRST 3*3 MATRIX:");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&a[i][j]);
        }
    }
    printf("ENTER SECOND 3*3 MATRIX:");
    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            scanf("%d",&b[i][j]);
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            c[i][j]=a[i][j]+b[i][j];
        }
    }

    for(int i=0;i<=2;i++){
        for(int j=0;j<=2;j++){
            printf("\n%d",c[i][j]);
        }
    }
}